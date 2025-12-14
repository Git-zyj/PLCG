/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0 + 1] = ((arr_1 [i_0 + 2]) & (arr_1 [i_0 - 1]));
        arr_3 [i_0 + 2] = ((2147450880 ? 2147516416 : (arr_0 [i_0 - 2] [i_0 + 3])));
        var_11 = (((arr_0 [i_0 - 3] [i_0 + 3]) % -12567));
        arr_4 [i_0 - 2] [i_0 + 2] = (((arr_1 [i_0 - 1]) ? ((5051046425314557215 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))) : (var_6 ^ 994129831777493552)));
        var_12 = (arr_0 [i_0 - 1] [i_0 - 2]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2 - 2] [i_2 - 1] [i_3] [i_4] [i_4] = 2147516416;
                        var_13 -= (~var_5);
                        var_14 += (arr_12 [10] [i_3] [10]);
                        arr_16 [i_1] [i_2 + 2] [i_2] [i_4] = ((~(arr_6 [i_2 - 2])));
                        var_15 = ((1893 / (arr_13 [i_1] [i_2 + 1] [i_1] [i_4] [i_3])));
                    }
                }
            }
        }
        var_16 -= 8301821958739273398;
    }
    #pragma endscop
}
