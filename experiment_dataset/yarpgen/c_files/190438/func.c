/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190438
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_4), (((/* implicit */int) var_1))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_2), (var_6))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2] [i_0]))))) : (((int) min((var_6), (var_6))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (short)24261)) < (((/* implicit */int) var_7)))))))) != (((unsigned int) ((((/* implicit */_Bool) (unsigned short)1733)) ? (((/* implicit */int) (_Bool)1)) : (var_4))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((min((((((/* implicit */int) (short)24241)) & (((/* implicit */int) (unsigned short)35492)))), (((/* implicit */int) var_2)))) ^ (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) (short)24264)))))));
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (signed char)4);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_3] [i_2] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (short)63)))) < (((((/* implicit */int) (unsigned char)64)) * (((/* implicit */int) (unsigned short)37558))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])) % (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) (signed char)80);
                            arr_25 [i_2] [i_5] [i_4] [i_5] = var_2;
                        }
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                    }
                    for (int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        arr_30 [i_2] [i_2] = ((((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) var_1))))) ? (arr_4 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_3]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [i_2 + 2] [i_8])))))));
                        arr_31 [i_3] [i_2] = ((/* implicit */_Bool) (-(1294190958)));
                    }
                    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
                    {
                        arr_34 [i_2] [i_3] [i_2] [i_3] [i_9 + 1] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)13622)), (255)));
                        arr_35 [i_2 - 1] [i_3] [i_3] [i_2] [i_2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [i_3] [i_4] [i_3])), (var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_28 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [i_3] [i_4] [i_2]))) : (arr_9 [i_2] [i_2]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))));
                        arr_36 [i_2] [i_2] [i_2] [i_9] [i_2] [9ULL] = max((((/* implicit */unsigned long long int) (unsigned char)251)), (13674571079936224569ULL));
                        arr_37 [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((max((3785885554U), (((/* implicit */unsigned int) var_6)))) - (max((((/* implicit */unsigned int) (_Bool)1)), (((958431211U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_9] [i_2])))))))));
                    }
                    arr_38 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4772172993773327044ULL)) ? (arr_10 [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (((((_Bool)1) ? (13674571079936224598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_2] [i_2] [(signed char)9]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_2] [i_2 + 2] [i_2]), (((/* implicit */short) arr_2 [i_2]))))))))) : (((/* implicit */int) (short)-63))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_46 [i_2] [i_3] [i_2] [i_2] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) * (((/* implicit */int) (short)-49))));
                                var_20 = ((/* implicit */short) arr_45 [i_2] [i_11]);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 188797327)))) != (max(((~(67108863U))), (((/* implicit */unsigned int) (signed char)-80))))));
                                arr_47 [2] [i_3] [i_10] [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_2 - 1] [i_2])) || (((/* implicit */_Bool) min((arr_16 [i_3] [i_3] [i_2 + 2] [i_4]), (((/* implicit */unsigned int) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
