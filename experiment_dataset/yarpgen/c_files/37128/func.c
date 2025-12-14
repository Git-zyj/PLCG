/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37128
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
    var_18 += ((/* implicit */signed char) ((_Bool) var_3));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                    var_19 *= (~(((4ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21061))))));
                }
            } 
        } 
        var_20 += ((/* implicit */short) (+(0ULL)));
    }
}
