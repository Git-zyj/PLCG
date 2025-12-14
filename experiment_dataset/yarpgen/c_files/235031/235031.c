/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_12);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 = var_9;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 ^= var_10;

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_21 = var_10;
                var_22 = (-7418854763726417476 >= 6540704193789913014);
                var_23 = ((13 ? ((105 << (3246825935892786309 - 3246825935892786298))) : (arr_5 [i_0 - 1])));
                arr_11 [i_0] [i_1] [i_1] [i_0] = (~4294967295);
                arr_12 [i_0] [i_1] [i_2] = ((arr_10 [i_0] [i_1] [i_0 - 2]) ? (arr_8 [i_1]) : 939);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_21 [i_3] [21] [21] [i_5] = var_5;
                    var_24 = ((((((arr_16 [i_5]) ? var_5 : 228))) + (((4703 ? -7418854763726417485 : (!var_11))))));
                    arr_22 [i_4] [i_5] = (((max(var_0, (((arr_18 [i_3]) / 4703))))) ? (((((max((arr_19 [i_3] [17] [i_5] [i_5]), 60833))) ? -243 : (arr_19 [i_5] [i_4] [i_3] [i_3])))) : (max(19, -3318264084773961795)));
                }
            }
        }
    }
    #pragma endscop
}
