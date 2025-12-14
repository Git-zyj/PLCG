/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239251
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
    var_19 += ((/* implicit */short) (~(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)16930)) : (((/* implicit */int) var_15)))), (((/* implicit */int) min((var_3), (var_16))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [(short)8] = var_2;
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_2 - 1] [i_2])) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_7)) - (((/* implicit */int) var_3)))))) + (((((/* implicit */int) ((short) var_9))) - (((/* implicit */int) var_7)))))))));
                            var_21 += var_15;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */int) arr_17 [(short)6] [(short)6])) ^ (((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 2] [(short)16] [i_0 + 2])))) > (((/* implicit */int) ((short) arr_7 [i_0] [(short)10]))))))));
                                arr_18 [i_6] [i_6] [i_0] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((short) arr_0 [i_0 + 2] [i_0]))) ? (((/* implicit */int) ((short) arr_11 [i_0]))) : ((-(((/* implicit */int) var_9)))))) : ((-(((/* implicit */int) (short)339))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 3; i_7 < 8; i_7 += 2) 
    {
        var_23 |= ((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)-30218)))))), ((~(((/* implicit */int) arr_11 [(short)2]))))));
        arr_22 [i_7] = ((/* implicit */short) (+((~(((/* implicit */int) arr_16 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 - 2] [(short)17]))))));
    }
}
