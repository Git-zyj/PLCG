/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216795
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (((+(((/* implicit */int) arr_2 [i_0 - 1] [5U] [i_0])))) ^ ((~(((/* implicit */int) (_Bool)0)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_13 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_2 [(unsigned short)6] [(unsigned short)6] [(_Bool)1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1076873300U) : (3884535529U)))) ? (((/* implicit */long long int) (-(arr_4 [i_0 + 1] [i_2])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) : (-1LL)))))));
                            var_14 -= ((/* implicit */_Bool) min((((min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) -175476281)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_3 [1])))) ? (((((/* implicit */_Bool) 699504427)) ? (9053027594534463817LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3693076748U)))))))));
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((((/* implicit */_Bool) 410431766U)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                            var_16 = ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_15 [i_0] [(unsigned char)3] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)28195)) ? (var_5) : (var_10)));
                        arr_16 [i_0] [i_0] [i_1] [i_4] [i_5] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_8 [i_5] [i_5]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((unsigned long long int) (+(((/* implicit */int) (unsigned char)133))))))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -26348207885583130LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_1])) : (4294967295U)))))) : ((+(((arr_7 [9] [i_4] [i_4] [i_1] [i_0] [i_0 - 1]) + (arr_17 [i_0] [6] [i_4] [i_6])))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_19 -= ((/* implicit */short) (unsigned char)122);
                            var_20 = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)268)));
                            var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 4294967295U))))));
                        }
                        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) 2353927012497616860LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_23 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_1)) && ((_Bool)1)))));
                        var_24 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) 1944172412U)) <= (9223372036854775807LL))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_25 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 14478413964565665041ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1] [i_1]))))));
                        arr_25 [(unsigned char)9] [i_0] = arr_0 [i_1];
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) max((arr_4 [7LL] [(unsigned char)10]), (arr_3 [(unsigned char)2])))) >= (1U)))))));
                    var_27 = ((/* implicit */short) arr_13 [(unsigned short)0] [(unsigned short)0]);
                    var_28 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2818)) ? (1944172412U) : (((/* implicit */unsigned int) 2147483647))))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))) : (((/* implicit */unsigned int) 667931333))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)24)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)7447))))));
    var_30 = ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)122)) ? (4294967295U) : (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))) + ((((!((_Bool)1))) ? (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33554431U)) ? (((/* implicit */int) (short)2818)) : (2147483647)))))));
    var_31 = ((/* implicit */unsigned short) ((int) 33554431U));
    var_32 -= ((/* implicit */unsigned long long int) var_11);
}
