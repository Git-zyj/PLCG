/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34650
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                arr_10 [i_1] [i_1] [i_2 - 2] [i_2] = ((/* implicit */_Bool) ((arr_5 [i_0] [i_1 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2 - 2])))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) >> (((2798175843U) - (2798175816U)))));
                arr_11 [i_1] [i_1 - 1] = ((/* implicit */short) (-(arr_2 [i_1 + 1])));
            }
            for (int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3 + 1])) ? (arr_8 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32542)))));
                var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 18446744073709551615ULL)))) * (((unsigned int) (short)-22930)));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    arr_17 [i_0] [i_1] = (~(2020425003U));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_21 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_5]))) : (arr_8 [i_0] [i_1] [i_3 + 1])));
                        arr_22 [i_4] [i_1] [i_3] [i_1] [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_15 [i_1] [i_1]))))));
                        var_17 = ((/* implicit */long long int) (signed char)-23);
                    }
                }
                for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    arr_25 [i_6] [i_3] [(unsigned char)2] [i_1] [6] [i_6] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_6]))));
                    var_18 -= ((/* implicit */signed char) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1 - 1] [i_3 - 1])))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3]))))))))));
                }
                var_20 = ((/* implicit */signed char) (((+(arr_4 [i_0] [i_1]))) != (((/* implicit */int) var_6))));
            }
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_21 ^= ((/* implicit */signed char) ((((arr_9 [6U]) + (9223372036854775807LL))) << (((((arr_4 [i_1 + 2] [(unsigned char)18]) + (93911276))) - (55)))));
                var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 1598629893U))));
                arr_29 [6LL] [i_1] [i_1] [i_7] = ((/* implicit */unsigned int) (signed char)35);
            }
            for (unsigned int i_8 = 2; i_8 < 18; i_8 += 3) 
            {
                arr_34 [(signed char)11] [i_1] [(signed char)11] = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_1] [i_1] [i_8 + 1] [i_8 - 2])) ^ (((/* implicit */int) (signed char)-61))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (signed char)-108))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((unsigned int) var_0))) : (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_1] [i_1] [i_8]))))));
            }
            var_25 ^= ((/* implicit */unsigned short) arr_24 [i_1 - 1] [i_1 + 1] [(unsigned short)6] [i_1] [i_1]);
            var_26 ^= ((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [(unsigned char)6]);
            arr_35 [i_1] = ((/* implicit */unsigned long long int) var_0);
        }
        arr_36 [i_0] = ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [14]);
        var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [(unsigned short)6])) << (((((/* implicit */int) (short)-22930)) + (22937)))));
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), ((short)-32550))))) | (var_7)))) ? (((((long long int) var_6)) % (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)-28090)))))))));
    var_29 &= max((var_11), (((/* implicit */unsigned short) var_2)));
    var_30 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned short)3854)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)61717)) : (((/* implicit */int) var_3)))) : (var_5))));
}
