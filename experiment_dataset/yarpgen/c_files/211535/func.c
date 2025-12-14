/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211535
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((+(var_6))) >= (((((/* implicit */int) var_2)) ^ (var_17)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) | (3993203811577386880LL)))) : (((var_13) ? (((/* implicit */unsigned long long int) var_19)) : (var_15)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_18)), (var_19)))) ? (var_15) : (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1 + 2] [i_2 - 2]) ? (arr_2 [i_0 - 1] [i_1 - 1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1] [i_2 + 1]))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            var_22 -= ((/* implicit */unsigned char) (+(1599461816377390713LL)));
                            arr_11 [i_4] [i_1 + 4] [i_3] [i_2 - 2] [i_1 + 4] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_0 + 1] [i_1 + 2] [i_2] [i_3] [i_2 + 2] [(unsigned char)1])), (((arr_8 [i_0] [i_1 + 2] [11] [i_3]) / (((/* implicit */int) ((signed char) var_7)))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) : (var_0))), (((/* implicit */long long int) ((var_12) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0 + 1]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))))))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 876378215)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL)));
                            var_25 ^= ((/* implicit */signed char) (-(((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) - (1LL)))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 12; i_5 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_1 + 4] [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 4] [(unsigned char)9] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 4])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_10 [7LL] [i_1 + 4] [7LL] [i_2] [i_3] [i_3])))) : (min((min((1620064136), (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) ((unsigned char) arr_6 [i_5])))))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_8))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) var_1)) : (((int) arr_13 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2])))))));
                            var_29 = ((((/* implicit */_Bool) ((arr_4 [(_Bool)1] [i_1] [i_1]) ? (((/* implicit */long long int) ((unsigned int) (unsigned char)187))) : (((var_16) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [(signed char)4] [(signed char)4] [(signed char)4] [i_3] [i_5 - 1])))) : (((((var_4) + (9223372036854775807LL))) << ((((~(((/* implicit */int) var_3)))) - (70))))));
                        }
                        arr_14 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) || (((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1] [5])))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))), ((unsigned char)251)));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_18), (var_8)))) ? (min((var_10), (((/* implicit */long long int) arr_10 [(unsigned char)3] [10LL] [(unsigned char)3] [11] [(unsigned short)2] [(unsigned char)3])))) : (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_9))))))))) ? (min((min((((/* implicit */unsigned long long int) -1599461816377390713LL)), (var_14))), (((/* implicit */unsigned long long int) max((arr_13 [i_0 - 1] [(unsigned char)8] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_12 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0]))))))) : (max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [1ULL] [1ULL]))) | (var_14)))))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 2) 
    {
        var_31 ^= ((/* implicit */_Bool) (~(arr_18 [i_6])));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) max((max((arr_16 [i_6 - 1] [i_6 - 1]), (arr_16 [i_6 + 1] [i_6 + 1]))), (((/* implicit */int) ((arr_18 [i_6]) == (((/* implicit */int) var_8))))))))));
    }
}
