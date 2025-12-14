/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (1 ? -336596591 : (min((((!(arr_3 [i_0])))), ((var_5 ? 0 : 227)))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_3] = (arr_8 [i_1] [i_1] [i_1 - 1] [i_1] [i_1]);
                        var_12 = ((-(((((((arr_9 [i_0] [i_1] [i_2] [i_0] [i_1 - 1] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : 255))) && (((18 ? var_3 : var_5))))))));
                    }
                    var_13 = ((((min(25, 2))) ? (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
