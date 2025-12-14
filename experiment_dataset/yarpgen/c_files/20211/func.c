/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20211
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) max((((short) (_Bool)1)), (min(((short)-4384), (var_0)))))) * (max((1847155472), (((/* implicit */int) (short)(-32767 - 1)))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */short) (+(((int) (_Bool)1))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_11))));
                    var_18 = ((/* implicit */short) var_8);
                    arr_11 [i_0] [i_1] [i_1] = (~(((((/* implicit */_Bool) -2147483632)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 3; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_19 = ((short) (_Bool)1);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4 - 3])) & (((/* implicit */int) (short)-4224))));
        /* LoopSeq 2 */
        for (short i_5 = 3; i_5 < 21; i_5 += 1) 
        {
            var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_16 [i_5 + 2] [i_5]))));
            var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_16 [i_4] [i_5 - 3]))));
            var_23 = ((/* implicit */short) max((var_23), (var_10)));
            var_24 = arr_14 [i_4 - 3] [i_5];
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_25 -= var_2;
            arr_21 [i_4] [i_4] = (short)7;
            var_26 = ((/* implicit */_Bool) max((var_26), ((((((_Bool)1) ? (2083674841) : (((/* implicit */int) var_14)))) > (((int) arr_14 [i_6] [i_6]))))));
        }
        var_27 = ((/* implicit */int) min((var_27), ((((_Bool)1) ? (((/* implicit */int) ((_Bool) 409696015))) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (_Bool)1)))))))));
        var_28 = ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_18 [i_4 - 1] [i_4 + 1] [i_4 - 1])));
    }
    /* vectorizable */
    for (short i_7 = 3; i_7 < 23; i_7 += 1) /* same iter space */
    {
        var_29 = ((((/* implicit */int) (short)-24261)) > (-392226455));
        var_30 *= var_4;
    }
    var_31 = ((var_7) == (-2147483626));
}
