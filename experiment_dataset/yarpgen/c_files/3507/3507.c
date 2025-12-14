/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((((arr_0 [i_1]) % -1163273382)));
                arr_5 [i_0] [19] [i_1] = (arr_1 [i_0 + 1]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        var_13 = ((~((-((31370 ? 10193128471469469138 : -8504032824670365697))))));
                        var_14 = (min((((~(arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1])))), (((var_0 ^ -6408) | (arr_8 [i_2 - 1])))));
                        arr_15 [i_5] [i_5] = (109 ^ 0);
                        var_15 = var_1;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_21 [i_2 - 1] [i_2 - 1] [i_6 - 1] [i_6] = (arr_12 [i_2] [i_2] [4]);
                    var_16 = (((arr_9 [i_2 + 1]) ? var_10 : (((((var_11 ? 1614039568850081361 : (arr_9 [i_7])))) ? ((-103 ? var_4 : 2810934813)) : (arr_12 [i_6 + 1] [i_6 - 2] [i_2 + 2])))));
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
