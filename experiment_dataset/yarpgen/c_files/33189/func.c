/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33189
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
    var_14 = ((/* implicit */unsigned short) (~(18446603336221196288ULL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (-1)))))))), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2 - 1])), (arr_6 [i_0] [i_1] [i_2 - 2] [i_0])))));
                    var_16 += ((/* implicit */unsigned short) (+(min((min((((/* implicit */unsigned long long int) (unsigned char)12)), (arr_6 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) (signed char)20))))));
                    var_17 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                    var_18 = ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_2 - 2]) | (((/* implicit */unsigned long long int) 2097151))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (_Bool)1)) : (-1)))) : ((~(arr_3 [i_0] [i_1] [i_2 - 2]))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) min((var_19), (arr_5 [i_0] [i_0] [i_0])));
        var_20 = ((/* implicit */long long int) 2147483645);
        var_21 = (-(var_5));
    }
    var_22 = ((/* implicit */unsigned int) max((((long long int) 4719342678814213607LL)), ((~((~(5582307551322673240LL)))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((var_2), (var_11))))));
    /* LoopNest 3 */
    for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
        {
            for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) var_5));
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_25 += ((/* implicit */unsigned short) max((((long long int) arr_12 [i_3 + 1] [i_5 - 1] [i_4 - 2])), (-137438953472LL)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            arr_23 [i_5] [i_7] = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3 - 1]))))), (min((arr_12 [i_3 - 1] [i_3] [i_3 - 1]), (((/* implicit */long long int) (_Bool)0))))));
                            var_26 = ((/* implicit */int) 18446603336221196289ULL);
                            var_27 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        var_28 = ((/* implicit */unsigned long long int) arr_22 [i_3] [i_4] [i_5] [i_3] [i_5]);
                    }
                    for (signed char i_8 = 3; i_8 < 12; i_8 += 3) 
                    {
                        arr_26 [i_3] [i_4 + 2] [i_5] [i_8 - 1] |= ((/* implicit */_Bool) 140737488355328ULL);
                        arr_27 [i_3] [i_4] [i_8] [i_8] [i_3] [i_8] = ((/* implicit */int) ((max((((/* implicit */long long int) arr_21 [i_3] [i_4 - 1] [i_4 - 1] [i_4] [i_5 - 1] [i_4 - 1] [i_5])), (var_2))) == (((/* implicit */long long int) arr_25 [i_3] [i_4 + 1] [i_4]))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 5873512922338012820LL)) ? (((140737488355327ULL) >> (((((/* implicit */int) (unsigned short)46252)) - (46249))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)17)))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_30 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_16 [i_9] [i_4 - 1] [i_5] [i_9]), (arr_16 [i_3] [i_9] [i_5 - 1] [i_3]))))));
                            var_31 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)31), (((/* implicit */signed char) (_Bool)1)))))) | (3625255269U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9505953905784254083ULL)) ? (2147483647) : (((/* implicit */int) (short)32767)))))));
                            var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 523962224U)), (max((((((-4719342678814213608LL) + (9223372036854775807LL))) << (((arr_28 [i_3] [i_4] [i_4] [i_9] [i_10]) - (6049604978156258100LL))))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_12)))))))));
                            var_33 = ((long long int) arr_11 [i_3 - 1] [i_4] [i_10 - 1]);
                        }
                        for (unsigned int i_11 = 3; i_11 < 14; i_11 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (-((+(((((/* implicit */int) var_3)) << (((/* implicit */int) var_4)))))))))));
                            arr_36 [i_3 + 1] [i_4] [i_9] [i_9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2147483647), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_22 [i_9 + 2] [i_4] [i_5] [i_9] [i_9 + 2])) ? (arr_22 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_11]) : (arr_22 [i_9 + 1] [i_9 + 1] [i_3] [i_9 + 1] [i_11 - 3]))) : (arr_22 [i_9 - 1] [i_5] [i_11] [i_9] [i_11])));
                        }
                        var_35 = ((/* implicit */unsigned char) (~(((14LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_36 ^= (~(((/* implicit */int) ((arr_12 [i_3 + 1] [i_3 + 1] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
    } 
}
