/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44677
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0])) >= (((/* implicit */int) arr_0 [i_1 - 2]))));
                        var_19 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_9))))));
                        arr_14 [i_0] [i_3] = ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) : (var_8)));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) (+(arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] [i_4])));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) ((arr_7 [i_1] [i_1] [i_0]) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_0])) << (((arr_16 [i_0] [i_1 - 3] [i_2] [i_4] [i_4] [i_1 - 3]) - (1366265697))))))))) : ((~(((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_0 [i_1])) : (var_18)))))));
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1])))) ? (arr_3 [i_1 - 3]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((unsigned long long int) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((unsigned short) var_16))))));
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_5] = arr_11 [i_0];
                        var_24 += ((/* implicit */unsigned int) min((9223372036854775806LL), (min((min((((/* implicit */long long int) (unsigned char)142)), (-2LL))), (((/* implicit */long long int) (_Bool)1))))));
                        arr_22 [i_0] [i_1] [i_0] [i_5 + 1] [i_1 + 1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (((/* implicit */int) var_4)) : (arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5]))), (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((var_8), (((/* implicit */unsigned long long int) arr_12 [i_6]))))))) ? (((((/* implicit */int) ((_Bool) var_0))) + (((/* implicit */int) var_5)))) : (((/* implicit */int) (short)10))));
                            arr_25 [i_0] [i_2] [i_0] [i_6] = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((signed char) var_3)))))));
                            arr_26 [i_6] [i_1] [i_1] [i_6] [i_1] [i_1] [i_1 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_6] [i_6])) ? (var_18) : (((/* implicit */int) (unsigned char)113))))) / (max((arr_19 [i_6] [i_6] [i_2] [i_6] [i_0]), (((/* implicit */unsigned int) var_12))))))) : ((-(var_8)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_0);
                            var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 1] [i_0] [i_7])), (max(((((_Bool)1) ? (17891014902486890292ULL) : (((/* implicit */unsigned long long int) -2147483631)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(min((((/* implicit */int) ((signed char) 2882627428U))), ((-(((/* implicit */int) var_7)))))))))));
                        }
                    }
                    var_29 = ((/* implicit */short) max((((max((((/* implicit */unsigned long long int) -2147483636)), (var_10))) - (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)251)) ? (-2147483641) : (((/* implicit */int) (signed char)-1)))))))));
                    arr_29 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_1 - 3] [i_1] [i_2]))))))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)247)) : ((-(((/* implicit */int) (signed char)(-127 - 1))))))))));
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2] [i_0] [i_1 - 3] [i_1 + 1] [i_0])) || (((/* implicit */_Bool) arr_28 [i_1] [i_1 - 1] [i_1 - 2] [i_0] [i_1 + 1] [i_1 - 1] [i_1])))), ((_Bool)1)));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) (+(((var_11) % (((/* implicit */unsigned long long int) ((long long int) var_6)))))));
}
