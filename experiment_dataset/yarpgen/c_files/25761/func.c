/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25761
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_6 [i_1] [0] [i_1] = ((/* implicit */unsigned char) var_7);
                var_13 = ((((/* implicit */_Bool) var_9)) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((778811060) < (266338304))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */int) ((unsigned char) 3439320589722805579LL));
    var_15 = ((/* implicit */unsigned short) var_7);
}
