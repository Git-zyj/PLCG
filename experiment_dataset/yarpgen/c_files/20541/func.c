/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20541
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) ((3355128539U) >> (((((/* implicit */int) var_3)) + (25164)))));
                        arr_10 [(short)1] [(short)1] [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0] [i_1] [i_2 + 1] [i_3];
                        var_15 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(short)1] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [(short)4] [i_2] [i_2] [i_3] [i_3])) : (((/* implicit */int) var_6))))) : (arr_1 [i_2 + 1])));
                        arr_11 [i_0] [i_2 + 2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) 3355128528U)) ? (((/* implicit */int) ((_Bool) var_8))) : ((-(((/* implicit */int) var_11))))));
                        var_16 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((_Bool) ((((((/* implicit */int) var_13)) & (((/* implicit */int) arr_2 [i_4])))) >> (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) - (24596)))));
                        var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) var_1)), (arr_7 [i_0] [(short)8] [i_0] [i_2 + 3] [i_2 + 2] [i_2 + 3])))) + (2147483647))) << ((((((~(((/* implicit */int) var_12)))) + (20))) - (19)))));
                        var_19 = arr_12 [i_0] [i_1] [i_4];
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_20 -= ((/* implicit */short) 1782035761U);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 3] [i_2 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_1] [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3]))));
                    }
                    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_1] [(short)0] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))), (max((arr_4 [i_0] [i_1] [(_Bool)1]), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2])) ? (arr_3 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    arr_17 [i_0] = var_5;
                    arr_18 [i_0] [i_1] [i_2 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_12 [i_0] [i_1] [(_Bool)1]))))) ? (arr_4 [i_2 + 2] [i_2 + 1] [i_2 + 3]) : (((arr_13 [i_1] [i_0] [i_0] [i_1] [i_1] [i_2 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3355128569U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [(short)1] [i_1] [i_1] [i_2] [i_2 + 3])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_0), (arr_8 [i_1] [i_2]))))))) : (((var_0) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (short)-544))))) : (var_4)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_5)))) ^ (((((/* implicit */int) (short)-30020)) + (((/* implicit */int) (short)553))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) (-(((/* implicit */int) var_13))))))));
    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) == (3006777830U))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
}
