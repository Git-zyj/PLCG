/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214490
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_10 = ((/* implicit */unsigned int) var_4);
                    var_11 = ((/* implicit */signed char) ((var_0) == ((+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))));
                    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [i_1]))));
                }
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_7 [i_0 - 1] [i_0])))), (((/* implicit */int) (short)-24794))));
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3] [(signed char)10]))));
                        arr_12 [i_0] [19LL] [4] [19LL] [19LL] [i_0] = ((/* implicit */long long int) arr_6 [10] [i_0] [i_4]);
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_4 + 2])), (var_5)))) ? (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_0]))))) : (min((((/* implicit */unsigned long long int) var_0)), ((-(var_2)))))));
                        var_15 = var_4;
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_16 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0])) && (((/* implicit */_Bool) arr_6 [i_5] [i_0] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        var_16 = ((/* implicit */int) var_5);
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */int) ((unsigned short) var_2));
                            arr_19 [i_0] [i_0] [i_0 + 1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_0]);
                            arr_20 [i_0 - 1] [i_1] [i_0] [i_3] [i_0 - 1] = ((/* implicit */unsigned long long int) var_9);
                        }
                        for (unsigned long long int i_7 = 4; i_7 < 20; i_7 += 3) 
                        {
                            var_18 = ((short) (short)24773);
                            var_19 = ((((((/* implicit */_Bool) (short)-24811)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5))) % (((/* implicit */unsigned long long int) var_0)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_5] [i_0] [(signed char)19] = ((/* implicit */unsigned int) (+(arr_13 [i_0 + 1] [(unsigned char)11] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
                            var_20 -= ((/* implicit */int) ((unsigned short) arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]));
                            arr_27 [i_0] [i_0 + 1] [i_0] [18ULL] [i_0] = ((((/* implicit */_Bool) arr_25 [13ULL] [i_1] [i_5] [i_5] [i_0 - 1] [i_5])) ? (var_2) : (((/* implicit */unsigned long long int) arr_21 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0])));
                            arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_0] [i_0] [i_3] [i_5] [i_5] [i_8]))) | (-244589449)));
                        }
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            arr_33 [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]);
                            var_21 = ((/* implicit */short) ((unsigned short) arr_1 [i_0 + 1] [i_0]));
                        }
                    }
                    arr_34 [(unsigned char)19] [i_0] [13U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_24 [i_3] [i_0] [(unsigned char)18] [i_1] [i_0] [i_0 + 1])))) ? (((/* implicit */int) arr_30 [i_0 - 1] [i_1] [i_0] [i_3] [i_3] [i_3] [i_3])) : ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_3]))))));
                }
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_25 [i_0 - 1] [i_0] [(short)8] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_5)))) ? (((var_7) >> (((var_6) + (1700460584))))) : ((-9223372036854775807LL - 1LL))));
}
