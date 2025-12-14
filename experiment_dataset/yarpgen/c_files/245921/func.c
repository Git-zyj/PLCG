/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245921
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
    var_14 &= ((/* implicit */unsigned char) (~(((long long int) (short)-32756))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_4))) > ((~(0LL)))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((long long int) (signed char)-23)) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-32767)) + (32825))) - (58))))))));
                var_16 = ((/* implicit */unsigned char) ((signed char) (unsigned char)0));
            }
        } 
    } 
}
