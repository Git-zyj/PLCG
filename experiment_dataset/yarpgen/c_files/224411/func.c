/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224411
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
    var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 |= ((/* implicit */unsigned short) (~(((unsigned int) 4294967288U))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) * (4294967288U))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                var_24 |= ((/* implicit */unsigned short) ((unsigned long long int) (-(arr_10 [i_3]))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (((7U) << (((arr_8 [i_3]) - (262138497U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4])) | (((/* implicit */int) arr_9 [i_3])))))));
                arr_13 [i_3] [i_3] [i_4] |= ((/* implicit */_Bool) var_13);
            }
        } 
    } 
}
