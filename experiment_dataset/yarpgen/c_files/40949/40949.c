/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_11;
    var_21 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_22 &= 1964231789;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [8] [i_0] [8] [8] = ((-32748 ? 32728 : 2797299620680559045));
                    arr_8 [i_0] [i_0] [i_2] = ((-32747 & (arr_3 [i_1 + 1] [i_1 + 2])));
                    var_23 = (max(var_23, -1));
                }
            }
        }
    }
    #pragma endscop
}
