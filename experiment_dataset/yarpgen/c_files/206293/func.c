/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206293
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_8 [i_0] [(_Bool)1] = ((/* implicit */_Bool) 767376148U);
                arr_9 [i_0] [(unsigned short)9] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1 + 1]) << (((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_5)))) - (242)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)242))))) & (arr_5 [i_0] [i_0] [2]))) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 + 1]))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) (+(((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((long long int) ((arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]) >= (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                var_13 = ((/* implicit */int) arr_2 [i_2] [i_2]);
            }
        } 
    } 
}
