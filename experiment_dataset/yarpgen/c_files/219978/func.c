/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219978
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32512)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 6; i_4 += 1) 
                        {
                            {
                                var_12 = max((max((((/* implicit */unsigned long long int) arr_9 [i_4] [i_1 - 1])), ((+(arr_10 [i_0] [i_1] [i_4] [i_3 - 1] [i_4]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-9))))));
                                var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-2))))))))));
                                arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                                arr_13 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))))) ? ((~(arr_8 [i_4 - 3] [i_1 + 3] [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_6), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)0)), (var_2)))))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5])) ? (1101106737721753205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) || (((/* implicit */_Bool) 9957588395843236194ULL))))));
                arr_21 [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_6 + 1]))))), (24U)));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 4) 
                            {
                                var_15 = ((/* implicit */long long int) (~(arr_24 [i_8 - 1] [i_8] [i_8] [i_9 + 1])));
                                var_16 = ((/* implicit */short) (~(var_2)));
                            }
                            for (long long int i_10 = 3; i_10 < 19; i_10 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_10 - 3]))))), (arr_15 [i_10 + 1])));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_22 [i_8] [i_8 + 2] [i_7])), (arr_24 [i_6 - 1] [i_6 - 1] [i_6] [i_6])))) ? (max((((/* implicit */unsigned long long int) ((int) -885881001))), (((unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8 - 1] [i_8] [i_8]))) - (arr_28 [i_5] [i_6] [i_7] [i_7] [i_7] [i_8] [i_10]))))));
                                arr_30 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8 - 1])) ? (((/* implicit */int) arr_19 [i_10 + 1])) : (((/* implicit */int) arr_16 [i_8 + 2]))))) ? (((/* implicit */int) max(((signed char)85), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2099396763U)))))))) : (((/* implicit */int) arr_15 [i_5]))));
                            }
                            for (short i_11 = 4; i_11 < 19; i_11 += 2) 
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned int) arr_25 [i_11] [i_8] [i_5])) & (var_3))) : (((/* implicit */unsigned int) arr_25 [i_5] [i_5] [i_11]))))) ? (((/* implicit */int) arr_19 [i_5])) : (var_6))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_11))))) & (((/* implicit */int) max((arr_16 [i_7]), (((/* implicit */short) arr_14 [i_7])))))))) ? (((/* implicit */unsigned long long int) ((max((var_8), (((/* implicit */long long int) 2082756175U)))) / (((/* implicit */long long int) var_9))))) : (17815126311008748176ULL)));
                            }
                            for (long long int i_12 = 2; i_12 < 19; i_12 += 2) 
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_5))));
                                arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */short) arr_18 [i_5] [i_5])), (var_10)));
                            }
                            arr_37 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) arr_14 [i_6 + 1])), (arr_29 [i_8] [i_8 + 2] [i_8] [i_6 + 1]))), (max((((/* implicit */unsigned int) var_5)), (arr_29 [i_8 + 1] [i_8 + 1] [i_6 + 1] [i_6 + 1])))));
                            var_22 = ((/* implicit */signed char) (~(min((arr_25 [i_6 + 1] [i_8 + 2] [i_8 + 2]), (((/* implicit */int) arr_14 [i_8]))))));
                            var_23 = ((/* implicit */unsigned short) min(((~(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_11)))))), (max((((/* implicit */long long int) arr_14 [i_7])), (max((arr_32 [i_8 + 1] [i_6 + 2] [i_7] [i_6 + 2] [i_6 + 2] [i_5]), (((/* implicit */long long int) (signed char)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
