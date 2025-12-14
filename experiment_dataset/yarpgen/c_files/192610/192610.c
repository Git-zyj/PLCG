/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_12 = (arr_5 [i_2] [i_0]);
                    arr_7 [i_0] [i_0] [12] [i_2] = (~20710);
                    var_13 = ((((((2221090816684632023 >> (9396251521649030461 - 9396251521649030428)))) ? (2309741934 & var_1) : (((min(var_4, (arr_0 [i_2]))))))));
                    var_14 = var_11;
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        arr_10 [i_3 - 3] = (((((+(((arr_4 [i_3] [i_3]) / (arr_5 [i_3] [i_3])))))) * 6594489946656717452));
        arr_11 [i_3 - 1] = var_9;
        var_15 = ((((max(var_11, (arr_3 [i_3] [i_3 - 3] [i_3 + 3])))) ? (min(((var_6 + (arr_6 [8]))), (arr_3 [i_3 + 3] [i_3] [i_3 + 2]))) : (((((min(var_5, (arr_6 [1]))) > (!var_11)))))));
        arr_12 [i_3] [i_3] = var_11;
        arr_13 [8] = (min(((var_9 - (arr_0 [i_3 + 3]))), (arr_4 [13] [i_3 + 3])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_16 = (var_3 < var_10);
        var_17 = (146 & 6594489946656717452);
        var_18 ^= (arr_2 [i_4]);
        arr_16 [i_4] = ((~(arr_14 [i_4])));
        var_19 -= (((arr_5 [i_4] [i_4 + 1]) > (arr_2 [i_4 + 1])));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_20 = (max(var_20, (min(var_1, (arr_3 [i_5] [i_6] [i_7])))));
                    var_21 += 0;
                    var_22 |= (arr_19 [i_5] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
