/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42807
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
    var_11 = ((/* implicit */unsigned char) (~(((unsigned int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) min((((long long int) -2105754911776364979LL)), (min((min((2446450677834827673LL), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((unsigned int) 1545504212U)))))));
                arr_8 [0LL] = ((/* implicit */_Bool) min(((~(arr_2 [i_0 + 1] [i_1 - 2]))), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_6))))))));
                var_12 |= ((/* implicit */unsigned long long int) ((unsigned char) var_2));
            }
        } 
    } 
}
