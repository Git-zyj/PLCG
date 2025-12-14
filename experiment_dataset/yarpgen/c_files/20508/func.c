/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20508
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) ((short) arr_2 [i_0 + 1] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            var_13 |= min((max((arr_3 [i_1 - 1] [i_0 - 1] [i_1 - 1]), (arr_3 [i_0] [i_1] [i_1 - 1]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1 - 1] [i_0 + 2] [i_0 + 2])) < (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 1]))))));
            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)65))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_11 [(short)7] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (((!(((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)2)))))) ? (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)190)) == (((/* implicit */int) var_0))))))) : (((/* implicit */int) (!(arr_4 [i_2] [i_0 + 2] [i_2]))))));
                        var_15 ^= arr_3 [i_0] [i_2] [i_3];
                        var_16 -= min((((((/* implicit */_Bool) max((arr_9 [i_0 + 1] [i_2] [i_4] [i_4]), (arr_9 [(unsigned short)2] [i_2] [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0 - 1] [i_2] [i_4] [i_4]))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_4] [i_2]))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [8LL] [i_2] [i_2] [i_0] [i_0 + 1])) < (((/* implicit */int) arr_12 [i_0 - 1] [i_3] [i_0 + 2] [i_0 + 2] [i_0 + 1])))))) != (min((var_10), (((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1]))))));
                        var_18 = ((/* implicit */unsigned long long int) var_1);
                        arr_15 [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_4), (var_10))))))), (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1])) ? (-5958487465400569418LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 21; i_6 += 3) 
                        {
                            var_19 ^= ((/* implicit */signed char) arr_17 [10U] [6ULL] [i_3] [(unsigned char)18] [i_2]);
                            var_20 = ((/* implicit */long long int) arr_3 [i_2] [i_3] [i_6]);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_14 [i_5] [i_2] [i_0] [i_5] [(unsigned short)5]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (arr_16 [i_5]) : (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0])))))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        arr_24 [(unsigned char)11] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) max((var_1), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [(unsigned char)4])))) << (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [(unsigned short)19] [i_3] [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [4ULL])) && (((/* implicit */_Bool) var_2)))))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 3; i_8 < 20; i_8 += 4) 
                        {
                            var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [2ULL] [i_8 + 1])) ? (arr_14 [i_8] [i_0] [i_0] [i_7] [i_8 + 2]) : (arr_14 [i_0] [(signed char)17] [i_0] [i_0] [i_8 - 3])))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_3] [i_8])) / (((/* implicit */int) min((arr_5 [i_8 + 1] [i_3] [(short)11]), (arr_5 [i_2] [10ULL] [i_7])))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            arr_29 [i_7] |= ((/* implicit */unsigned int) var_6);
                            arr_30 [i_0] [i_7] [i_3] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                        }
                    }
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    {
                        arr_40 [i_0] = ((/* implicit */unsigned int) (unsigned char)190);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max(((unsigned char)158), (((/* implicit */unsigned char) arr_33 [i_11] [i_10] [i_0 + 2]))))) : (((/* implicit */int) (unsigned char)65))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min((arr_20 [i_0] [(unsigned char)15] [i_11] [i_0 - 1] [i_0 + 1]), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) == (arr_21 [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) var_4);
    var_27 = (!(((/* implicit */_Bool) (unsigned char)83)));
}
