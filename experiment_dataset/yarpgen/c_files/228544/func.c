/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228544
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = max(((signed char)127), ((signed char)-1));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_3)))));
                    var_16 ^= ((/* implicit */long long int) min(((-2147483647 - 1)), (2147483647)));
                    arr_8 [3] [3] [8] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_5))))));
                    var_17 -= ((/* implicit */short) var_2);
                }
            }
        } 
    } 
}
