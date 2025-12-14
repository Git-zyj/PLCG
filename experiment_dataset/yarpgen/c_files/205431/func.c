/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205431
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 *= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-4583)))))));
        var_12 = ((/* implicit */short) ((((/* implicit */int) ((short) (short)-11333))) >= (((/* implicit */int) arr_1 [i_0]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((short) arr_9 [i_1] [i_4] [i_4]);
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_13 *= arr_6 [i_1] [i_3] [i_1];
                            var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-11337)) ? (((/* implicit */int) (short)11316)) : (((/* implicit */int) (short)-11333))));
                            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1]))));
                            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-11316)) ? (((/* implicit */int) arr_10 [i_5] [i_4] [i_3] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)11333)))))));
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */short) max((var_17), (arr_17 [i_3] [i_3] [i_6] [i_4] [i_6])));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((/* implicit */int) arr_16 [i_1] [i_1] [i_3] [i_6] [i_1] [i_1])))))));
                        }
                    }
                } 
            } 
        } 
        var_19 -= (short)11353;
        arr_20 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 + 3])) & ((+(((/* implicit */int) arr_3 [i_1]))))));
        var_21 = (short)11339;
    }
}
