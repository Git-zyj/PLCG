/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190384
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
    var_14 = var_3;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (var_4)));
                            arr_11 [i_3] [i_2] [i_0] [3LL] [i_0] [i_0] &= ((/* implicit */unsigned char) (-(max((((unsigned int) arr_10 [i_3] [i_2] [i_0] [i_0])), (arr_3 [i_0] [i_1] [i_0])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]))));
                arr_12 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1])) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1]))))), (((unsigned char) arr_3 [i_1] [i_1] [i_0]))));
            }
        } 
    } 
}
