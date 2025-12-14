/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45719
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
    var_15 += ((/* implicit */unsigned int) min((((/* implicit */long long int) 4294967271U)), (5129425420590133316LL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) (+(3992316635U)));
                    var_17 = ((/* implicit */signed char) ((unsigned long long int) -8LL));
                }
            } 
        } 
        var_18 = (-9223372036854775807LL - 1LL);
        arr_8 [i_0] &= ((/* implicit */unsigned int) ((signed char) 302650660U));
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_26 [i_3] [i_3] [i_7] [i_3] [i_3] = max((((/* implicit */unsigned long long int) 302650660U)), (min((((/* implicit */unsigned long long int) 3992316636U)), (var_10))));
                                arr_27 [i_7] [i_7] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_3] [2LL] [i_5] [i_3] [i_5])), (((((/* implicit */_Bool) 3992316635U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (8065665189000459582LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_3] [i_8] [i_5] [i_8] [i_3] = min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_4] [i_3] [i_8])), (min((3704256388701562941ULL), (((/* implicit */unsigned long long int) var_1)))));
                        arr_31 [i_3] [i_8] [i_4] [i_4 - 3] [i_5] [8U] = ((/* implicit */signed char) max((max((arr_24 [i_4] [i_4 - 1] [i_8] [(signed char)4]), (((/* implicit */unsigned long long int) 302650638U)))), (((((/* implicit */_Bool) 16777215U)) ? (arr_24 [i_4] [i_4 - 1] [i_8] [i_8]) : (((/* implicit */unsigned long long int) 2513080936U))))));
                    }
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_19 |= ((/* implicit */signed char) 3495326321436103427ULL);
                            arr_37 [i_3] [i_9] [i_9] [i_9] [(signed char)8] [i_5] = ((/* implicit */long long int) 302650660U);
                            arr_38 [i_9] = ((/* implicit */unsigned int) arr_20 [i_10] [i_9] [i_3] [i_3] [i_3]);
                        }
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            arr_43 [i_4] [i_9] [i_9] [i_9] [i_11] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_34 [i_9] [i_4 + 1] [i_9] [i_4] [i_4 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_41 [i_4 + 1] [i_4 + 1] [i_4] [4U] [i_4 - 1] [i_4] [i_4 + 1]));
                            arr_44 [i_4] [i_4 - 1] [i_4] [i_4] [i_9] = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_29 [8LL] [i_4] [2U])), (var_8)))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3992316634U)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_47 [i_3])) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-1), ((signed char)34))))))), (((/* implicit */long long int) min((9560607U), (((/* implicit */unsigned int) (signed char)-34)))))));
                            var_21 = ((/* implicit */unsigned int) var_6);
                        }
                    }
                    var_22 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) arr_2 [i_3])), (var_7))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (signed char i_14 = 3; i_14 < 10; i_14 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (-(2995311239104334999LL)));
                                var_24 = ((/* implicit */unsigned long long int) ((long long int) (signed char)-35));
                                var_25 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 4294967295U)), (((((/* implicit */_Bool) (-(var_4)))) ? ((+(8697839808049612127ULL))) : (((/* implicit */unsigned long long int) -1288341009969112253LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
