/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 ? (min(-24923, ((16147 >> (((-32767 - 1) + 32796)))))) : 1));
    var_14 = (max(var_11, (min((((var_6 ? var_8 : var_10))), (min(var_2, 1))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_1 - 1] = 9133;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (~(arr_1 [i_0]));
                        arr_10 [i_0] [i_1] [i_2] [i_1] = var_2;
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = 2420;
                        arr_12 [i_1] = ((((var_3 > 9130) | ((-26505 ? 2420 : var_0)))));
                        arr_13 [i_1] = ((9126 == ((((((arr_2 [i_0] [i_0] [i_3]) | (arr_7 [i_0] [i_0])))) & -var_11))));
                    }
                }
            }
        }
        arr_14 [i_0] = var_4;
        arr_15 [i_0] [i_0] = var_6;
        arr_16 [i_0] [i_0] = (((((arr_0 [i_0]) || var_12)) ? (!-9120) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_19 [6] = (20739 ? -9126 : 260496914621034744);
        arr_20 [i_4] = min(((-((0 ? -7432923078439212081 : 32744)))), var_11);
    }
    #pragma endscop
}
