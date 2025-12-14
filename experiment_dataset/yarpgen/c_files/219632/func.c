/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219632
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
    var_13 = ((/* implicit */_Bool) (+((~((-(var_6)))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), ((unsigned short)1117)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) 4294967295U);
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) arr_0 [i_0 + 1])) : (max((4294967295U), (((/* implicit */unsigned int) arr_0 [i_0])))))) >> ((((((-(4294967295U))) ^ (((/* implicit */unsigned int) -1855891071)))) - (2439076215U))))))));
        var_17 = ((/* implicit */int) (unsigned short)64418);
        var_18 -= ((/* implicit */_Bool) min((((((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0]))))) - (((((/* implicit */_Bool) 4294967288U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)14)) == (((/* implicit */int) (unsigned short)1115)))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_4 [i_1] = ((unsigned short) 1359703951312366773ULL);
        arr_5 [i_1] = ((unsigned int) (+(((/* implicit */int) (unsigned short)64421))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (var_12)));
                    arr_13 [i_2] [(short)3] [(short)3] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_4 + 2] [i_4 + 2] [i_2 + 1]))));
                    arr_14 [i_2] [i_2 - 1] = ((/* implicit */signed char) ((((unsigned long long int) arr_9 [i_3])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_3] [i_4 + 1] [i_2])) < (((/* implicit */int) arr_12 [i_2] [i_3] [i_4 + 1] [i_3]))))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((-26LL) * (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17087040122397184843ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [8U] [8U]))) : (4294967293U)))) : (1838925631928941880ULL))))));
                    var_22 = ((/* implicit */int) ((arr_10 [5] [i_4 - 1] [i_2 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4 + 2])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            var_23 = ((/* implicit */signed char) ((unsigned short) arr_15 [i_5 - 3] [i_5 - 1] [i_5]));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 78167048U)) ? (var_1) : (var_12)))) ? (((/* implicit */int) ((signed char) 9223372036854775807LL))) : (((/* implicit */int) arr_9 [i_2 + 1]))));
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */int) 17087040122397184821ULL);
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                var_25 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2] [i_6] [i_6] [i_5 - 2])) + (((/* implicit */int) arr_12 [(unsigned short)12] [i_5 - 2] [(signed char)7] [i_5 - 1]))));
                var_26 |= ((/* implicit */_Bool) ((288185346) | (((/* implicit */int) ((((/* implicit */int) arr_11 [i_5])) != (((/* implicit */int) (short)-6190)))))));
            }
            for (int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                arr_23 [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2LL)) ? (5U) : (3547956175U)));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) (~((-2147483647 - 1))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 1] [i_9 - 1])) ? (arr_29 [i_9] [i_9] [i_9 + 1] [2LL] [i_9] [i_9 - 1] [i_9 + 1]) : (arr_29 [10U] [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9])));
                        var_29 = ((/* implicit */_Bool) arr_6 [i_2 - 1]);
                    }
                    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        arr_33 [18U] [(signed char)9] [i_5] [i_7] [(signed char)9] [i_10] = ((signed char) arr_16 [i_2 - 1] [i_2 - 1]);
                        var_30 = ((/* implicit */int) arr_9 [i_7]);
                    }
                }
            }
            arr_34 [i_5] [i_5] [i_5 - 2] = ((/* implicit */unsigned short) (+(1359703951312366773ULL)));
        }
        arr_35 [i_2] [(signed char)15] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) -6679944053475681847LL)) ? (((/* implicit */unsigned long long int) 4294967293U)) : (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
        var_31 = ((((/* implicit */int) arr_7 [i_2] [i_2 - 1])) * (((/* implicit */int) arr_7 [i_2] [i_2 + 1])));
    }
    var_32 = ((/* implicit */short) var_8);
}
