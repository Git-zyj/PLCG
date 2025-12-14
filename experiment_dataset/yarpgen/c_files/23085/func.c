/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23085
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_1 [i_2])), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-12542))) + (arr_8 [i_1] [i_2] [i_1]))))), (arr_7 [i_2] [i_2] [i_2])));
                            arr_10 [i_2] [i_1] [i_1] [8U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-12530)), (((((/* implicit */_Bool) arr_7 [i_2] [i_1 + 2] [i_2])) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned char)165))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (arr_3 [i_0] [i_2] [i_3])))) ? (arr_7 [i_2] [7ULL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [(unsigned char)3] [i_2] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4194272U)) ? (((/* implicit */int) (short)-12534)) : (((/* implicit */int) (short)4)))))));
                            arr_11 [i_0] [(short)8] [i_0] [i_2] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) (short)-19946))));
                            var_20 = min((((/* implicit */unsigned long long int) arr_9 [(unsigned char)14] [i_1] [i_1 - 1] [i_1 + 3])), (min((max((3709111574326936421ULL), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_2])))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1] [i_2])))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((472952735069160149ULL), (((/* implicit */unsigned long long int) ((((14737632499382615194ULL) >= (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_1])))) ? (((arr_8 [i_0 - 2] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_10))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-32259))))))) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) var_4)), (((((/* implicit */int) var_18)) + (((/* implicit */int) var_2))))))));
}
