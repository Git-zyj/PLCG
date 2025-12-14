/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235135
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
    var_20 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28325)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((int) (short)-1)) : ((~(((/* implicit */int) (signed char)-1))))))) : (arr_1 [i_1]));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_14 [i_1] [(short)5] [i_4] = ((/* implicit */unsigned short) var_8);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_18))))))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] [i_1] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] [i_4]);
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (3668024629376086683ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_5] [i_1] [i_5 - 1])))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) : (((((/* implicit */_Bool) var_9)) ? (63ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5])))))));
                        }
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            arr_23 [i_1] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */short) ((9223372036854775798LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55502)))));
                            var_25 = arr_5 [i_1 - 1] [i_2 - 1] [i_2 + 1];
                            arr_24 [i_0] [i_1] [i_6] [(unsigned char)6] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_7 [2LL]) : (((/* implicit */int) (unsigned short)65532))));
                            arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_1]))) ? (((/* implicit */long long int) var_6)) : (((long long int) arr_0 [i_0] [i_3]))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20))))) ? (arr_9 [i_0] [(short)8] [i_1 - 2] [i_3] [i_7] [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_14) : (arr_22 [i_0] [i_0])))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_1] [i_2 + 1] [i_2 - 1] [i_1] [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) arr_19 [i_1 - 1] [i_1 + 1]))));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((unsigned long long int) ((unsigned int) var_9))))));
                        }
                        arr_28 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((int) var_13)));
                        arr_29 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 206724297)) && (((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 - 1]))));
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_33 [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (4194303LL));
                        arr_34 [i_1] [i_1] [i_2] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) ^ ((~(arr_1 [i_0])))));
                        var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 2]))) & (7696352647274091909LL)));
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_30 = var_18;
                        var_31 = ((/* implicit */int) var_2);
                    }
                    arr_37 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(arr_31 [i_1 - 3] [i_1] [i_2 - 3] [i_2] [i_2])));
                    var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */int) arr_32 [i_1 - 1] [i_1 - 1] [i_2] [i_2 + 3] [i_2 - 2])) : (((((/* implicit */_Bool) arr_35 [i_0] [i_1 + 1] [i_2 - 3] [i_2 + 1])) ? (708598210) : (var_6)))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned short)65532))))));
}
