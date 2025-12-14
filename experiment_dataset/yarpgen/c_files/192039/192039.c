/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(!1617)));
    var_11 *= (((var_7 ? 34183 : -3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        var_13 = (arr_5 [i_1 - 1] [i_0] [i_1 - 1]);
                        var_14 = ((var_1 * ((~(arr_8 [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
        var_15 = (arr_9 [i_0] [i_0] [i_0]);
        var_16 = (min(var_16, ((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_1 : (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_17 ^= (~1);
        var_18 = ((~((var_9 ? (arr_11 [i_4]) : var_3))));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_19 = (max(8339, 3));
                    var_20 = (arr_11 [i_6 + 3]);
                    var_21 = ((var_6 ? 34190 : ((var_6 ? (arr_17 [i_4] [i_5] [i_6] [i_5 + 2]) : (arr_14 [i_4] [i_6 + 2])))));
                    var_22 = 17325;
                    var_23 = (min(var_23, (arr_18 [i_4] [i_5] [i_4])));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_24 = (~979459131);
        var_25 = ((((max((!1), var_8))) ? 7663493523679567511 : (((((arr_19 [i_7] [i_7]) != var_8))))));
        var_26 = (((max(var_2, (max(48211, (arr_19 [i_7] [i_7]))))) != ((((43466 >= ((min(1, 128)))))))));
    }
    var_27 = var_4;
    #pragma endscop
}
