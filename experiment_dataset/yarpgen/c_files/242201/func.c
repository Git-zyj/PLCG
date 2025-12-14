/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242201
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((unsigned char) ((signed char) 9223372036854775807LL)));
                var_14 *= ((/* implicit */unsigned long long int) max((((long long int) arr_0 [i_0] [i_1 + 3])), (((/* implicit */long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (908863053))))));
                var_15 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) -908863060)));
                arr_6 [i_0] |= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551608ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (-2109879830))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_2);
}
