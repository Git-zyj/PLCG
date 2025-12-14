/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-101 | 255);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (arr_4 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = (max(893154020324354751, 46913));
                            var_13 = (!var_6);
                        }
                    }
                }
            }
        }
    }
    var_14 = (((184 ? ((max(var_6, var_4))) : 0)));
    #pragma endscop
}
