/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39303
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
    var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_14)), (var_2))), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) var_11)) : (max((var_0), ((+(((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_18 ^= ((/* implicit */unsigned int) ((-1916251330) < (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_0] [i_1 + 2] [i_2] [i_3 - 2] [(_Bool)1]), (((/* implicit */unsigned long long int) 59098195U))))))))));
                            arr_14 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) -1916251330))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_7 [i_3 + 1] [i_2] [i_3 + 1] [i_3])));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)229)) < ((~(((/* implicit */int) var_5))))));
                            var_20 = ((/* implicit */short) 523519867);
                            arr_18 [i_0] [i_2] [i_1] [i_0] [9U] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 1])) ? (arr_4 [i_3 + 1] [i_0 - 3]) : (arr_4 [i_0] [i_1]));
                            arr_22 [i_6] [i_2] [i_2] [i_0 - 1] = ((var_12) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0] [i_3 - 1]));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(2097151)))) ? (2097151) : (((/* implicit */int) arr_24 [i_7] [i_3] [i_2] [i_1] [i_0] [i_0]))));
                            arr_26 [i_2] [i_7] = ((/* implicit */int) min((max((arr_5 [i_3 - 1] [i_2] [i_2] [i_0 + 1]), (arr_5 [i_3 - 2] [i_2] [i_2] [i_0 - 3]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_3 - 2] [i_2] [i_2] [i_0 - 3])))))));
                            var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2] [i_3 - 1] [i_7]))))), (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 + 1])) ? (arr_4 [i_0 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) -1916251330))))));
                        }
                        for (short i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) 1916251329);
                            var_25 = ((/* implicit */unsigned int) arr_13 [i_0 - 4] [i_1 + 1] [i_2] [i_3] [i_8 - 1]);
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) max((arr_10 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) ((_Bool) var_7)))))) < (((/* implicit */int) var_14))));
                    }
                    var_26 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1916251319)) ? (((/* implicit */int) (unsigned char)47)) : (787335909)))) < (((((/* implicit */_Bool) arr_3 [i_2] [i_1 + 2] [i_2])) ? (arr_3 [i_0] [i_1 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((-1916251310) <= (-787335910))))));
                    var_28 = max((((/* implicit */int) ((-1916251349) <= (arr_25 [i_1 - 1] [i_1 - 1] [i_2] [i_2] [i_2] [(_Bool)1])))), (max((arr_11 [i_2] [i_1] [i_2] [i_2] [i_2]), (arr_25 [i_1 - 1] [i_1 + 1] [i_1] [i_2] [(short)9] [i_2]))));
                }
                var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_1])) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [(unsigned short)0] [(unsigned short)10]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)29447)) - (((/* implicit */int) (_Bool)1)))))));
                var_30 = ((/* implicit */short) ((unsigned short) arr_12 [i_0] [i_0 - 3] [i_0 + 1] [i_0 - 4] [i_0 - 4]));
            }
        } 
    } 
    var_31 = ((/* implicit */short) var_1);
}
