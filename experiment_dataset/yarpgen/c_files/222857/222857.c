/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (((((arr_3 [i_1]) | (arr_3 [i_0]))) != (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [15] [i_2] [i_2] [14] [i_0] = (((min(1, (arr_3 [0]))) <= 194));
                            arr_13 [i_0] [i_2] [i_0] [i_0] = ((!((((((var_0 ? 1 : (arr_6 [i_0] [i_1] [i_2] [i_2])))) ? var_2 : (!var_7))))));
                            var_16 = 2198956146688;
                        }
                    }
                }
            }
        }
    }
    var_17 = -9988;
    #pragma endscop
}
