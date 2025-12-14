/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30978
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
    var_15 &= var_13;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */signed char) ((max((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2]))))), ((~(4624638789704443204LL))))) - (((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */signed char) ((_Bool) arr_4 [i_0] [i_1] [i_0])))))))));
                    var_17 |= ((/* implicit */_Bool) max(((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) <= (((/* implicit */int) arr_0 [i_2]))))))), (((/* implicit */int) ((arr_5 [i_1 + 1] [i_2] [i_1 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_5)), (arr_15 [i_3 + 3] [i_3 + 2] [i_5 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_13)) + (((/* implicit */int) var_9)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            var_19 *= ((/* implicit */_Bool) ((unsigned long long int) 6203631927869891020LL));
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_5] [i_5]))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_21 *= ((/* implicit */signed char) arr_8 [i_6]);
                            var_22 |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max(((signed char)-85), (((/* implicit */signed char) arr_25 [i_8] [i_4] [i_4] [i_4] [i_3]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_24 [(_Bool)1] [i_5])), (4035225266123964416ULL)))))));
                        }
                        var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_21 [i_5 - 1])) ? (((/* implicit */int) arr_21 [i_5 - 1])) : (((/* implicit */int) arr_18 [i_3 + 2] [i_5 - 1] [i_3] [i_6 + 1])))), (((/* implicit */int) ((signed char) arr_18 [i_3 + 2] [i_5 + 1] [i_3] [i_6 - 1])))));
                        var_24 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((-8083054084245971458LL), (((/* implicit */long long int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_6 - 2])))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) (+(((min((((/* implicit */unsigned long long int) var_4)), (arr_17 [i_3] [i_3 + 2] [i_3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3 + 1])))))));
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_4] [i_5] [i_9])) == (((/* implicit */int) ((arr_12 [i_3] [i_3] [i_3]) && (((/* implicit */_Bool) var_4))))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [4ULL]))))) * (((/* implicit */int) (!(arr_25 [i_3] [i_4] [i_3] [3LL] [i_9]))))))) ? (min((var_2), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 1] [i_4] [i_3] [i_9])))));
                    }
                    for (long long int i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        var_28 ^= ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) -5876121215055674328LL)) ? (arr_15 [i_3] [i_5] [9ULL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (signed char)56))))));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_29 |= arr_25 [(signed char)2] [i_4] [i_5] [i_5] [i_11];
                            var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min(((signed char)81), (((/* implicit */signed char) (_Bool)1))))) >= (((((/* implicit */int) var_6)) >> (((/* implicit */int) (signed char)3)))))))) - (max((arr_17 [i_10 + 1] [i_5 + 2] [i_3 + 3]), (((/* implicit */unsigned long long int) var_13)))));
                            var_31 = ((/* implicit */short) (~(17179860992ULL)));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 2; i_12 < 15; i_12 += 2) 
                        {
                            var_32 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) - (((((/* implicit */_Bool) var_7)) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_33 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)29763))));
                        }
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL)))))));
                        var_35 -= max((max(((-(arr_9 [i_10]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))), (((min((var_2), (((/* implicit */unsigned long long int) var_1)))) << (((arr_9 [i_3]) - (3558370254768095350ULL))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */long long int) (-(((/* implicit */int) (((~(((/* implicit */int) var_1)))) > (((/* implicit */int) (!(var_13)))))))));
                        var_37 = ((((/* implicit */long long int) ((/* implicit */int) arr_25 [(signed char)11] [i_3] [i_4] [i_5] [i_13]))) >= (((arr_37 [i_3] [i_3 + 2] [3LL] [i_5 + 2] [i_5 + 2]) % (var_4))));
                    }
                }
            } 
        } 
    } 
}
