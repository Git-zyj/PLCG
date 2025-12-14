/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_8, 0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((+((5466040705593224575 ? (arr_1 [i_0 + 2]) : (min(var_4, (arr_3 [i_1])))))));
                arr_6 [i_0] [i_0] [i_1] = ((-4 ? (min(1628155711617335914, (!10))) : 1628155711617335914));
                var_15 = (-(min(var_4, ((((arr_3 [i_0]) - var_0))))));
            }
        }
    }
    var_16 += var_8;
    var_17 = (max(var_17, ((((((var_8 ? var_3 : (min(0, 1523450855))))) ? var_9 : ((min(((max(1, var_8))), ((36 ? -5466040705593224595 : 3077900951))))))))));
    #pragma endscop
}
