/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46061
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
    var_19 = ((/* implicit */unsigned short) ((signed char) var_10));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = ((long long int) (unsigned char)61);
                arr_6 [i_1] = ((/* implicit */unsigned short) -1263537306);
                arr_7 [i_1] = ((/* implicit */signed char) (unsigned char)248);
            }
        } 
    } 
    var_20 = ((/* implicit */short) (unsigned char)248);
}
