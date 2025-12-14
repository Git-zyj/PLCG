/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47799
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
    var_10 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (18446744073709551611ULL));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_0]), (arr_3 [i_0]))))));
                var_12 ^= ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_1);
}
