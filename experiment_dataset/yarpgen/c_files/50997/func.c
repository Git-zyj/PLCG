/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50997
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = min((min((3171926583U), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_18 = ((/* implicit */signed char) (-((+(1123040712U)))));
        var_19 = ((/* implicit */short) 3171926583U);
        var_20 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3171926584U)) && (((/* implicit */_Bool) arr_0 [i_0 + 1])))))) ^ (1123040706U)));
    }
    for (short i_1 = 2; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (~(3171926588U)));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 3171926585U))));
    }
    for (short i_2 = 2; i_2 < 23; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) max((arr_7 [i_2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2 + 1])))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((-(max((1123040712U), (((/* implicit */unsigned int) (unsigned char)127)))))) <= (min((3171926583U), (max((1123040716U), (1123040724U))))))))));
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_24 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_13 [i_2 - 2] [i_3] [i_5])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_5 - 3] [i_2 - 1]))) | (793536906U)))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_20 [i_5] [i_3] [i_4] [i_5] [i_6] [5ULL] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_16 [i_2 + 1])), (max((3171926583U), (((/* implicit */unsigned int) arr_6 [i_5 + 4])))))), (max((arr_10 [i_2 + 1]), (3171926584U)))));
                            arr_21 [i_6] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4])))))))), (3171926584U)));
                            var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)118))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_25 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+((-(1123040705U)))));
                            var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(1123040705U))))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(1123040712U)))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_28 [i_5] [(unsigned short)19] [i_4] [1] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-10758))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!(max(((!(((/* implicit */_Bool) 3171926590U)))), (((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 33554176LL)))))))))));
                            var_29 = ((/* implicit */unsigned long long int) (short)-10758);
                        }
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(min((0ULL), (((/* implicit */unsigned long long int) -33554153LL)))))))));
                            arr_32 [i_5] [i_3] = ((/* implicit */short) ((1123040712U) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [i_2 + 1] [i_5] [i_5 + 3] [i_5] [i_5 - 1] [i_5] [i_5])), (arr_22 [i_2 + 1] [(unsigned char)9] [i_5 + 3] [i_9] [i_9] [i_5])))))));
                            var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(-33554153LL)))), (min((((/* implicit */unsigned long long int) arr_30 [i_5] [i_5] [i_5])), (arr_24 [i_5] [i_5 + 4] [i_4] [i_2] [i_5])))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 1; i_10 < 20; i_10 += 2) 
                        {
                            arr_35 [i_5] [i_10] [i_10] [(unsigned char)9] [i_10] [i_10] = ((/* implicit */unsigned char) 1123040719U);
                            arr_36 [i_2] [i_5] [i_5] [i_4] [i_3] [i_5] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-256))));
                        }
                    }
                    for (short i_11 = 3; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned long long int) (~(3171926570U)));
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_33 += ((/* implicit */short) (+((~(18446744073709551615ULL)))));
                            arr_44 [i_2] [i_3] [i_3] [i_4] [i_3] [i_11 + 2] [i_12] = ((/* implicit */signed char) (unsigned char)15);
                            var_34 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min((1123040719U), (3171926584U)))), (min((127ULL), (((/* implicit */unsigned long long int) arr_14 [8ULL] [(signed char)6])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-32718))))), ((~(-9223372036854775806LL))))))));
                        }
                        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min(((+(min((((/* implicit */unsigned long long int) -33554186LL)), (0ULL))))), (((/* implicit */unsigned long long int) min(((~(3171926555U))), ((+(1123040704U)))))))))));
                            var_36 += ((/* implicit */unsigned long long int) arr_5 [i_4]);
                            arr_49 [i_4] [i_4] [i_13] [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_16 [i_2]);
                            arr_50 [6LL] [i_13] [(signed char)14] [i_4] [i_11] [i_13] = ((/* implicit */unsigned long long int) (short)-10749);
                            var_37 = ((/* implicit */unsigned char) (+(-33554198LL)));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) min((var_38), (arr_8 [i_2 + 1] [i_2 - 2])));
                            arr_54 [i_4] [i_11] [i_14] = ((/* implicit */signed char) (short)247);
                        }
                    }
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) var_8))));
    var_40 += ((/* implicit */signed char) var_4);
}
