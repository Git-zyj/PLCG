/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-((max(var_9, var_8)))))) && 246992615));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((27375 ? var_4 : 25)) >> (((max(((min(var_9, 246992600))), 6)) - 18168)));
                arr_5 [i_1] [11] [i_0] = (~var_9);
            }
        }
    }
    var_12 = (var_4 || var_7);
    var_13 = 3;
    #pragma endscop
}
