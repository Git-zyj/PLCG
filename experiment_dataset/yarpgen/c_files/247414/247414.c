/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_4, ((var_1 ? var_4 : var_14)))) << (var_11 >= var_5)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (-32767 - 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [3] [i_2] = (min((((min(var_14, (arr_1 [i_0]))) << (((arr_4 [i_0]) - 45623)))), (!-13746)));
                    arr_8 [10] [4] [i_0] [1] = ((-((-((var_0 ? var_5 : 1113733179))))));
                }
            }
        }
        arr_9 [i_0] [i_0] = 395726330;
    }
    #pragma endscop
}
