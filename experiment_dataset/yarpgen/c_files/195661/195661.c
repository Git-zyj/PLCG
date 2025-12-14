/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = (min(10658, -1226124271));
        arr_3 [5] = (max(((((arr_1 [i_0] [3]) << (((arr_0 [i_0 + 1]) - 5888172658128436737))))), (arr_0 [i_0])));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_11 = (min(var_11, (((((((var_7 ? 16140901064495857664 : 2147483647)) ? (((arr_5 [i_1] [12]) ? (arr_5 [i_1] [i_1 + 1]) : -4293317689405254062)) : (~var_8))))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_2] [0] = (((((~(arr_10 [i_1 - 3] [13] [i_1 - 3])))) | ((-29501 ? (arr_9 [i_1] [15]) : (arr_5 [i_1 + 1] [14])))));
            arr_12 [2] [1] = ((-(((var_4 ? 2674450548585625857 : -1226124271)))));
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_12 = (max(var_12, (((((min(14217323117845234525, (arr_14 [4]))))) ? (((arr_7 [i_1 - 4]) ^ var_1)) : var_9))));
                        var_13 = 288230376151711744;
                        var_14 = (((((-(arr_5 [i_1] [i_1])))) ? (arr_5 [12] [i_3 + 3]) : (arr_5 [0] [i_3 + 2])));
                        var_15 = (((arr_4 [0] [3]) ? (arr_7 [i_5]) : var_9));
                    }
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = (~var_7);
    #pragma endscop
}
