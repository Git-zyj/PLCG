/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (17174670183093968403 ^ 6514);
                arr_5 [i_1] [i_0] = (min(44, ((((max(var_1, var_13))) ? var_12 : 32767))));
            }
        }
    }
    #pragma endscop
}
