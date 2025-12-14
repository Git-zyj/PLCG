/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200057
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 7410980826790714621LL)) || (arr_0 [i_0])))));
                var_14 -= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -6345428971787517341LL)), (min((arr_6 [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_2]))))));
                arr_9 [(signed char)8] [i_3] [(short)4] &= ((/* implicit */short) var_2);
            }
        } 
    } 
}
