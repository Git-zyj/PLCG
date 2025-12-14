/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 ^= ((!((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_14 = (max(var_14, ((((65520 - 124) ? (((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : ((~((var_9 & (arr_1 [i_0] [10]))))))))));
        var_15 += (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = ((((-5816133143834090729 ? 0 : 26492)) - (arr_1 [i_1] [i_1])));
        var_17 = ((!(arr_0 [i_1] [i_1])));
        arr_4 [11] = 100;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_18 = -1632612152;
        arr_7 [i_2] = (~1);
        arr_8 [i_2] = (2147467264 + -var_4);
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_19 = ((1 <= (arr_1 [i_5] [i_4])));
                    var_20 = (((((39043 ? 213 : -1599286380))) < 26489));
                }
            }
        }
    }
    #pragma endscop
}
