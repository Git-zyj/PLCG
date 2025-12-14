/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242572
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) arr_2 [i_0]);
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_2 + 2] [13U]);
                            arr_14 [i_1] [i_3] [i_2] [(signed char)12] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4 + 3] [i_4 - 1] [i_4] [i_4 + 3] [i_4 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 + 1] [(unsigned short)5]))) : (arr_13 [i_0 - 1] [i_2 + 2] [i_2 + 2] [i_3 + 2] [i_3 - 1])));
                            arr_15 [(unsigned char)10] [i_1] [(unsigned char)12] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 3] [i_4 + 3]))));
                            arr_16 [i_0] [(short)4] [i_2] [i_3 + 1] [i_1] [i_4] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_0] [(signed char)6]);
                        }
                        for (long long int i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */short) 17ULL);
                            arr_19 [i_0] [i_1] [i_2 + 1] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (short)16113)) : (arr_6 [(unsigned char)4] [(unsigned char)11] [i_2] [(unsigned char)4])))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_5]))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_2 + 3] [i_3] [i_3 - 1])) == (((/* implicit */int) arr_8 [i_2 + 2] [(signed char)5] [i_3 + 1]))));
                            var_19 ^= arr_13 [i_0 + 1] [i_0] [7] [1ULL] [i_0];
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_9 [10ULL] [i_3 + 1] [i_3] [i_3 + 1]))));
                        }
                        arr_20 [i_1] = ((/* implicit */_Bool) arr_18 [(signed char)13] [i_1] [i_2] [i_1] [i_1] [i_1] [i_2]);
                        arr_21 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        arr_22 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_3 + 1] [i_2] [i_1] [i_0]);
                    }
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (12ULL) : (14ULL)));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(short)0] [(short)0] [i_2 + 1]))))))))));
                    arr_23 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1] [i_0 - 2] [i_0] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 - 1] [(unsigned char)5])) : (((/* implicit */int) var_10))))));
                }
            } 
        } 
        var_23 *= ((/* implicit */signed char) (-(491891047)));
        arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32737)) ? ((-(arr_7 [i_0 - 3]))) : (((((/* implicit */_Bool) arr_13 [i_0 - 2] [13LL] [i_0] [i_0 - 3] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)16))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) > (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 1] [(signed char)4])) ? (arr_10 [0] [(short)0] [i_0] [i_0]) : (arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0])))));
    }
    /* LoopSeq 1 */
    for (short i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        var_25 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-22161))))) : ((~(9722238491135884188ULL))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_26 [i_6]), (arr_26 [i_6])))))))));
        var_26 = ((/* implicit */unsigned short) (-(max((arr_25 [i_6 - 1]), (arr_25 [i_6 - 1])))));
    }
}
