/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(((var_2 ? 2767875131 : var_5)), var_6)) + 2767875131));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = (arr_4 [i_0] [10] [i_2]);
                            arr_10 [8] [i_1] [i_2] [i_3] |= var_5;
                            var_12 += (arr_0 [6] [i_0]);
                        }
                    }
                }
                arr_11 [i_0] [14] [11] = 241;
            }
        }
    }
    #pragma endscop
}
