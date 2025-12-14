/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242854
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
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */int) ((8556380160ULL) < (18446744065153171456ULL)));
                var_20 -= ((/* implicit */_Bool) ((short) max((17222613234158793796ULL), (((/* implicit */unsigned long long int) (unsigned char)38)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_12);
}
