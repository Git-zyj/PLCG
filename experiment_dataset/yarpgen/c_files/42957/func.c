/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42957
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)28))))), (((((/* implicit */_Bool) 13577742030280656824ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_8)))))));
                arr_5 [i_0] [i_0] [i_0] = arr_2 [i_0];
                var_19 = ((/* implicit */unsigned long long int) (-(arr_2 [i_0])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((251658240U) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) ? (((min((var_15), (((/* implicit */unsigned long long int) var_17)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))) + (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                var_21 = ((/* implicit */long long int) arr_20 [i_2] [i_4 + 1] [i_2 + 2] [i_5] [i_3 - 1] [i_5 + 2] [i_5]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */short) max((min((-217629105), (((/* implicit */int) arr_14 [i_8 - 1] [i_3 - 1] [i_3 - 1])))), (((/* implicit */int) min((arr_14 [i_2 - 3] [i_3 - 1] [i_8 + 2]), (arr_14 [i_4 + 1] [i_3 + 1] [i_3 + 1]))))));
                                arr_28 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((11024946981373251097ULL) + (((/* implicit */unsigned long long int) 1199845226U))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_7] [i_3] [i_3])))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2])) * (((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */int) min((arr_6 [i_2]), (arr_6 [i_2])))) : (((((/* implicit */int) arr_6 [i_2])) + (((/* implicit */int) arr_6 [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_4))))) + (((7171327059212749356LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1199845226U)) ? (2147483632) : (((/* implicit */int) var_3))))) ? (((var_13) ? (((/* implicit */int) var_1)) : (-2147483621))) : (((/* implicit */int) (short)-11294)))))));
}
