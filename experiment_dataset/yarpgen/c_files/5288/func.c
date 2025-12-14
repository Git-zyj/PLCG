/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5288
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
    var_16 += ((/* implicit */_Bool) ((unsigned long long int) 0ULL));
    var_17 += ((/* implicit */unsigned int) (+(((long long int) (short)0))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (!((((+(17703826181788941666ULL))) <= (((/* implicit */unsigned long long int) var_0))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)106))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
                                var_20 = ((/* implicit */signed char) max((70368744177663ULL), (((unsigned long long int) (+(var_4))))));
                                arr_14 [i_0] [14ULL] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((-(((/* implicit */int) (short)-962))))))), (((((/* implicit */long long int) ((int) arr_12 [i_0] [i_1] [i_2 + 4] [i_3] [18ULL]))) / (arr_12 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0])))));
                                var_21 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((_Bool) (short)-9712)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
