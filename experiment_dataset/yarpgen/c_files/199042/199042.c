/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_13);
    var_16 = ((((~9223354444668731392) && var_11)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 ^= (min(27430, 14568626812472489212));
                var_18 = (arr_4 [i_0 + 3] [i_1] [4]);
                var_19 |= (min((arr_0 [i_1]), (!-1489229420)));
                var_20 = (max(var_20, ((((min(2332285574682137331, 3082226995989695548)) + (arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
