/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219003
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = min((((/* implicit */int) ((short) ((((/* implicit */int) (short)67)) < (((/* implicit */int) (short)-50)))))), ((~(((((/* implicit */_Bool) 539179928)) ? (var_4) : (-1960261754))))));
                        var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-22))))) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1])) < (((/* implicit */int) (short)21399)))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_0] [16] [i_4] &= var_1;
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_0)))));
                            arr_16 [i_1] [i_1] [i_0] = ((/* implicit */int) min(((short)-78), (var_10)));
                        }
                        /* vectorizable */
                        for (short i_5 = 2; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((short) arr_5 [i_3]);
                            arr_20 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_12 [i_0] [i_0] [i_2 - 1])));
                            arr_21 [i_1] [i_5] [i_2] [i_5] [i_3] [i_1] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (var_12)))));
                            var_15 = ((/* implicit */int) var_5);
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_16 = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [5];
        arr_23 [i_0] = ((/* implicit */int) var_1);
        var_17 = 1880338643;
    }
    var_18 = var_9;
    var_19 -= ((/* implicit */short) var_0);
    var_20 = max((((/* implicit */int) ((((/* implicit */int) (short)16384)) > (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (short)17609)))))))), (((((/* implicit */_Bool) var_10)) ? (min((424588371), (((/* implicit */int) var_2)))) : ((~(var_0))))));
}
