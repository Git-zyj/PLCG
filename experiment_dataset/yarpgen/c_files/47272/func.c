/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47272
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
    var_12 += ((/* implicit */short) (-(3593225435U)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((701741861U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((771438836) < ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
                    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) max((((/* implicit */signed char) arr_4 [i_1 - 1] [i_1 + 1])), ((signed char)6)))), (max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)178)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) ((int) var_7));
                            arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] = (!(((/* implicit */_Bool) (-(517450336U)))));
                            arr_13 [i_0] = ((/* implicit */long long int) ((var_4) && (((/* implicit */_Bool) (+(var_3))))));
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((var_2), (((/* implicit */unsigned long long int) var_0)))))));
                            arr_17 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_5])) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (signed char)29))))) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) : (((/* implicit */int) (signed char)41))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))))) : (max((arr_16 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(var_8))))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_3 - 2] [i_6] [i_3 - 2] [i_6] [i_6] [i_6]))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)50963);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (10494948598611675184ULL))))), (((var_9) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-95)))))))));
                            var_17 = ((/* implicit */int) min((var_17), (2147483647)));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_18 = ((max((((/* implicit */int) arr_29 [i_8] [i_8 - 2] [i_1 + 1] [i_1 + 1])), (407971828))) * (((/* implicit */int) min((arr_29 [i_8 + 1] [i_8 - 3] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned char) var_6))))));
                        var_19 *= ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_2] [i_8]);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((min((((/* implicit */unsigned int) ((signed char) 1751301131))), ((~(2430445033U))))), (536870848U))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            {
                var_21 *= ((/* implicit */signed char) 3389802543U);
                arr_37 [i_9] [i_9] [i_9] &= ((/* implicit */int) max((((/* implicit */short) var_6)), (((short) arr_0 [i_10]))));
                arr_38 [i_9] [i_10] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]))))), (max((arr_11 [i_10] [i_10] [i_9] [i_10] [i_9]), (((/* implicit */unsigned long long int) (+(var_0))))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((_Bool) 2233785415175766016ULL))))));
}
