/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232661
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
    var_15 = ((/* implicit */unsigned char) min((var_5), (var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1 + 4] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) 3484898258996221791LL);
                            arr_11 [i_0] = ((/* implicit */long long int) min((arr_9 [i_0]), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))))) ? (arr_3 [i_0] [i_3]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_8 [i_0] [4LL] [i_2] [i_3])), (var_3))))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */long long int) (unsigned char)255);
                arr_13 [i_0] [i_1 + 2] [i_0] = ((/* implicit */long long int) arr_2 [i_1 + 4] [i_1 + 1] [i_1 - 2]);
            }
        } 
    } 
}
