/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218843
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((int) arr_0 [i_0])) / (((/* implicit */int) ((signed char) (unsigned char)160)))));
                    var_21 = ((/* implicit */int) max(((short)-6512), ((short)-6512)));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) ^ (max((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0])))));
        var_23 -= ((/* implicit */long long int) var_17);
    }
    var_24 ^= ((/* implicit */_Bool) ((((_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) -9223372036854775801LL)), (17179867136ULL)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (3825713585U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) 469253688U))))))));
}
