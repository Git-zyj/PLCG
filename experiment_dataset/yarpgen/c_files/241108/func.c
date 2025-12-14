/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241108
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
    var_12 |= ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_0))))) | (((var_2) >> (((var_1) - (1764355345898226668LL))))))) << (((((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_3) + (8149629674566647859LL))))) >> (((var_8) + (6133160889740625636LL)))))));
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -6846950442814507117LL)))) | (((((/* implicit */_Bool) ((long long int) -1485320544331479527LL))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))))));
    var_14 ^= ((/* implicit */long long int) ((((/* implicit */long long int) var_6)) != (((long long int) ((var_11) << (((((/* implicit */int) var_5)) - (229))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) <= (var_11)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1686445236U)) || (((/* implicit */_Bool) -1485320544331479527LL))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_18 ^= ((((/* implicit */_Bool) arr_5 [i_1] [i_2 - 2] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1] [i_1]))))) : (((arr_1 [11LL] [i_1]) / (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))));
                    arr_6 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 + 1]))));
                    var_19 = var_7;
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [8ULL] = ((((/* implicit */unsigned long long int) var_6)) / (arr_1 [6ULL] [i_1 - 1]));
                    var_20 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1 + 1]);
                    arr_10 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1 - 1]);
                    arr_11 [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_3))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_1 - 1] [i_1] [i_0]))))));
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_3]))) != (1485320544331479530LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1] [(_Bool)0])))) : (((unsigned long long int) var_5))));
                }
                for (short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    arr_14 [8LL] [11LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_13 [i_0 + 1] [i_0 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1] [i_1 + 1])) ? (arr_13 [i_0 + 1] [i_0 + 1] [i_1 + 1]) : (((/* implicit */long long int) var_6)))) : (((((arr_13 [i_0 + 1] [i_0 + 1] [i_1 + 1]) + (9223372036854775807LL))) << (((((arr_13 [i_0 + 1] [i_0 + 1] [i_1 + 1]) + (2370473415082580767LL))) - (35LL)))))));
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 1485320544331479526LL));
                    var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_0]) >> (((var_9) - (3747398226U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) var_7))))) : (((long long int) arr_0 [(short)1] [(short)1]))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0 + 1] [10U] [(signed char)0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_4])))))) : (((((/* implicit */_Bool) ((var_11) | (arr_2 [i_0] [i_1] [i_0])))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-12552)) + (2147483647))) << (((((-1485320544331479552LL) + (1485320544331479564LL))) - (12LL)))))) : (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0] [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_4])))))))));
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) ((824981535U) << (((1485320544331479526LL) - (1485320544331479521LL)))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((_Bool) min((((/* implicit */unsigned int) arr_0 [i_4] [i_0 + 1])), (var_9)))) ? (((/* implicit */unsigned long long int) ((((long long int) var_4)) >> (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9)))))) : (((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) var_6)) : (((unsigned long long int) arr_5 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])))))))));
                }
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1] [1]) || (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_2 [0ULL] [i_0 + 1] [(signed char)10]))) / (((/* implicit */int) ((_Bool) arr_3 [(_Bool)1] [i_1 - 1])))))) : (((((/* implicit */_Bool) arr_13 [5LL] [i_0 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_12 [i_1 - 1] [i_0 + 1] [i_0]))))))));
                arr_17 [i_0] [i_0] [i_0] = (~(((((unsigned long long int) var_11)) >> (((min((((/* implicit */long long int) arr_7 [i_0] [(_Bool)1] [i_0 + 1])), (arr_2 [i_0 + 1] [i_0 + 1] [8LL]))) + (3025390510501516401LL))))));
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(short)9] [2LL] [7LL] [i_1 + 1])) != (((/* implicit */int) arr_4 [9ULL] [i_1 + 1] [(_Bool)0])))))) != (arr_13 [i_1 + 1] [i_1 + 1] [i_0 + 1])))) * (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 + 1] [(signed char)3] [i_1 + 1] [i_1 - 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_0])) : (var_6))))))))))));
            }
        } 
    } 
}
