/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38980
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
    var_20 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (signed char)-11)) >= (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)66)) << (0ULL)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0 + 1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_13);
}
