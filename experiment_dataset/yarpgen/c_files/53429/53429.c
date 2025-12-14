/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((min(var_4, -var_2))) ? (((!1788767309) ? ((64 ? 9 : 1640903592)) : var_2)) : (((min(9, 243)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] |= ((-(arr_3 [i_0] [i_1])));
                arr_5 [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, var_4));
                            arr_10 [6] [6] [6] [i_3] [i_3] [i_3] = var_5;
                        }
                    }
                }
            }
        }
    }
    var_14 += var_4;
    #pragma endscop
}
