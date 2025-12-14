/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206640
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
    var_14 = max((2147352576ULL), (18446744073709551615ULL));
    var_15 = ((unsigned long long int) var_3);
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551605ULL) : (18446744073709551615ULL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1])))))));
                    var_18 ^= min((4ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2 + 1] [i_2 + 1]))))));
                    arr_6 [i_0] [5ULL] [i_2] = (+(((unsigned long long int) 3901797022956198199ULL)));
                }
            } 
        } 
    } 
}
