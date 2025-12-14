/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, 50));
                    var_19 = var_10;
                    var_20 -= (((arr_4 [i_2 + 1] [i_2 + 1] [i_2]) ? var_13 : (min(230, (arr_6 [i_0] [5] [i_0 - 2])))));
                    arr_9 [i_0] [2] [i_2] [i_2] = (arr_1 [i_2 + 2]);
                }
            }
        }
    }
    var_21 = (max(var_21, -8176));
    var_22 = var_11;
    #pragma endscop
}
