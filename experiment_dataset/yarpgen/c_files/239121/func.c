/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239121
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
    var_10 = ((/* implicit */short) max((var_2), (((/* implicit */int) (short)16820))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))), ((-(arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 1]))))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 1]))), (min((((/* implicit */long long int) (short)-16806)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 1])) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [4U]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((251658240U), (((/* implicit */unsigned int) (signed char)-115))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) - (arr_7 [i_0] [i_1] [i_1] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))) : (arr_8 [11] [i_1] [i_1] [i_4]))))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 0U))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_6);
}
