/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [8] [i_0] = (max(0, 31718));
                            var_12 = (((arr_4 [i_0] [i_1] [i_1] [i_3]) || -60));
                            var_13 -= (arr_0 [i_3]);
                        }
                    }
                }
                var_14 -= -31718;
                var_15 = (min(var_15, ((max((28981 & 60), 10791)))));
            }
        }
    }
    #pragma endscop
}
