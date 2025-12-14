/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 -= ((~(178 >= 2036617953)));
                    var_15 = 5682639737751244771;
                    var_16 = (max(var_16, ((((arr_1 [i_0 - 4] [i_0 - 1]) >> (((arr_0 [i_0] [i_1]) + 18)))))));
                }
            }
        }
        arr_8 [8] = ((!(var_10 / var_10)));
        var_17 = (((((arr_4 [i_0] [i_0]) && var_9))) >= (var_4 != 11673));
    }
    var_18 += (53372 ^ 11652);
    var_19 = max(108, (min(187, -4540488067234075248)));
    var_20 = var_2;
    #pragma endscop
}
