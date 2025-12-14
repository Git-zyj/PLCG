/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25756
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
    var_12 = ((/* implicit */unsigned long long int) 1134526126U);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned char)2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)3))))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)253))))));
                    arr_9 [i_2 + 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1]))))), (((unsigned short) arr_3 [i_2 - 3] [i_2 + 1]))));
                    var_13 = ((/* implicit */unsigned long long int) 24576U);
                }
            } 
        } 
    } 
}
