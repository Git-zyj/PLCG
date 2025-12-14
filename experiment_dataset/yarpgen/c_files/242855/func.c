/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242855
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)-121)) + (((/* implicit */int) (signed char)91))));
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) -4857177620668620833LL)) || (((/* implicit */_Bool) 11271410784324779821ULL))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), ((-(((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-5876187252232934785LL)))) ? (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (arr_8 [i_2 - 1] [i_2 + 1])))))));
                                var_14 ^= (+(((((/* implicit */_Bool) var_6)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [0ULL] [i_3 - 1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [(signed char)4] [i_2])) ? (arr_7 [i_2] [i_2] [i_2 - 1] [i_2 + 1]) : (arr_7 [i_0] [i_1] [i_2 - 1] [i_2])))))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(398224435U)))), (-1071902156326774929LL)));
}
