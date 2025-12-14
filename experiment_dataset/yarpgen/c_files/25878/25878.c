/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max((12450 ^ -32761), ((min(-110, -111)))));
                var_18 = (((arr_0 [i_0] [i_0]) ? (((125 & -11944) ? (~-94) : ((min(var_16, (arr_1 [i_0])))))) : (((var_0 ^ -106) ? ((max(-20, (arr_2 [i_0])))) : (((var_6 + 2147483647) << (var_5 - 48030)))))));
            }
        }
    }
    var_19 |= var_10;
    var_20 = (max(var_20, var_10));
    #pragma endscop
}
