/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25326
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (var_13)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = (signed char)114;
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 - 1]);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) -7869901665472629296LL);
            }
        } 
    } 
}
