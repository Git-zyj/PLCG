/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 |= (1 >= var_1);
    var_22 = ((13165 * (65534 < var_4)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [1] [i_0] [10] [1] = arr_3 [12] [i_0];
                    arr_8 [1] [12] [i_0] = (arr_3 [9] [i_0]);
                }
            }
        }
    }
    var_23 = (max(var_23, 13143));
    #pragma endscop
}
