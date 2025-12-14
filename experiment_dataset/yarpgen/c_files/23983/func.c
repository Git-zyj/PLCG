/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23983
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
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_4 [12] [16LL] [i_2])), (var_5))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_6);
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 4] [i_0 + 2] [i_0 - 3])))), (((/* implicit */int) max((arr_5 [i_0 - 4] [i_0 + 1] [i_0 - 2]), (arr_5 [i_0 + 3] [i_0 + 2] [i_0 + 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */long long int) 2147483647);
    var_15 = ((/* implicit */long long int) ((var_2) ? (((/* implicit */int) min((var_11), (((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((-1LL) | (-1LL)))))))));
}
