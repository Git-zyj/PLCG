/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47715
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (-(arr_0 [i_0])))), (((((/* implicit */unsigned long long int) var_7)) / (19ULL))))) | (((/* implicit */unsigned long long int) 4294967293U))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_0] = ((((4294967284U) >= (arr_7 [i_1 + 2] [i_4 - 1] [i_4]))) ? ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_1 - 1] [i_2])))));
                                var_12 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 2] [i_4] [i_4] [i_4 + 1])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1]))))) : ((~(var_0)))))));
                            }
                        } 
                    } 
                    var_13 = (~(((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 2])) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (arr_1 [(signed char)17] [i_1 + 2]))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [20U] [i_1] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_3 [(signed char)4] [i_1 + 2] [i_2]))) : (((/* implicit */unsigned long long int) (~(arr_12 [i_0] [i_1] [i_2] [i_1] [i_2])))))), (((/* implicit */unsigned long long int) (~(((arr_7 [i_2] [(signed char)11] [i_0]) << (((arr_3 [(signed char)0] [i_1 - 1] [i_2]) - (8882549665180739631ULL)))))))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_15 += ((/* implicit */unsigned long long int) (+(((((unsigned int) arr_15 [i_0] [i_1 - 1] [i_2])) * (arr_8 [i_1 + 2] [i_1] [i_1 - 1] [i_1] [i_2])))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(min((1100237067U), (1073479680U))))))));
                        var_16 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (16653089617291631718ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_10 [i_0]))))))));
                        var_17 = min(((~(arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1]))), (((unsigned int) (~(((/* implicit */int) var_2))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) arr_17 [i_0] [i_1] [i_1] [i_2] [i_6]);
                        var_19 = ((((/* implicit */_Bool) (signed char)-36)) ? ((~(var_5))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_6])));
                        var_20 |= ((unsigned int) (signed char)(-127 - 1));
                        var_21 = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_7)));
                    }
                    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned int) ((unsigned long long int) arr_14 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_7 - 1]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            arr_28 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned int) arr_22 [i_1] [i_1]);
                            var_23 = ((((/* implicit */_Bool) ((unsigned int) ((4303205000453236233ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))));
                        }
                        var_24 = ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_0] [i_7 - 1] [i_1 + 1]);
                    }
                    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) var_5);
                        arr_33 [i_0] [i_9 + 3] [i_2] [i_9 - 1] [i_2] [16U] &= ((/* implicit */unsigned long long int) var_4);
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) min((var_26), (((unsigned int) var_5))));
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
}
