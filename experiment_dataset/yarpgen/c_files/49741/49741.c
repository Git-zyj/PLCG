/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((1 < (-8763896127009214607 <= 1753837570)));
        var_14 = ((48 ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [4] [i_0 - 1])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (arr_1 [i_0]);
            arr_6 [i_0] [i_0 + 1] = 8931815763204439864;
        }
        arr_7 [i_0 + 1] = ((1 ? 1 : -1));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = -1582817565;
                    arr_16 [7] [i_2] [10] [1] = ((((((arr_8 [i_4] [i_2]) ? (arr_8 [i_2] [i_3]) : (arr_8 [i_2] [i_4])))) || (((~((~(arr_14 [1]))))))));

                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_5] [i_3] [i_3] [i_3] = 65520;
                        arr_20 [i_2] [i_5] [1] [i_4] [i_5 - 3] = (~1910076864);
                        arr_21 [i_3] [i_5] [i_5] = ((((~((-(arr_13 [1] [i_4] [i_3]))))) >> (((~1753837560) + 28705))));
                    }
                    var_15 *= (((((~(arr_3 [i_2] [i_3] [i_4])))) ? ((~((~(arr_1 [2]))))) : (~-722064886)));
                }
            }
        }
    }
    #pragma endscop
}
