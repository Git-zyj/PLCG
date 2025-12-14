/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = 18446744073709551594;
            arr_6 [i_1] [i_1] = ((var_5 < 99) ? 23 : ((max(931531451, (arr_2 [i_1] [i_0 - 1])))));
        }
        arr_7 [i_0 + 3] [i_0] = ((!((((arr_0 [i_0 - 2]) * (arr_0 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_10 = (max(var_10, (((((((arr_12 [i_0] [i_0 - 2]) % (arr_1 [i_0 - 3])))) ? ((4976208262574247341 ? (arr_12 [i_0] [i_0 + 1]) : (arr_1 [i_0 + 1]))) : (0 || 1))))));
                    arr_14 [i_0 + 3] [i_0] [i_0 + 3] [i_0] = min(((min(1, 0))), (16352 | 56));
                    arr_15 [1] [i_2] [i_3] [i_3] = ((+(max((arr_11 [i_3] [i_3] [i_3] [i_3]), (arr_12 [i_0 - 2] [i_0 - 3])))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_11 = 0;
        var_12 = (~119);
    }
    var_13 = (~1749011319);
    #pragma endscop
}
