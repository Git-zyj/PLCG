/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 &= 1585407841;
                var_21 ^= ((min((min(-1358140973, (arr_0 [i_1])), -1585407842))));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_22 ^= 1585407864;
                    var_23 = (min(var_23, ((max((var_6 * var_6), var_15)))));
                }
            }
        }
    }
    var_24 = ((((((0 <= var_6) ? (max(-1585407850, var_11)) : (((var_15 ? var_1 : 1585407841)))))) ? var_4 : var_1));
    #pragma endscop
}
