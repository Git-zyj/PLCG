/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_13;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_0 [1] [1]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 += 18234792416681483800;
            arr_5 [i_1] [i_1] [i_0] = (18234792416681483780 * (3518408554 * 0));
            var_22 = (max(var_22, var_7));
            var_23 = var_15;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_2] = ((0 ? (((((var_13 ? (arr_7 [i_0] [4]) : (arr_1 [i_0])))) ? -8863799862223360009 : var_10)) : (((-((((arr_2 [i_0] [4]) != var_8))))))));
            var_24 ^= var_13;
        }
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_25 = ((((max((arr_11 [i_3 - 2]), 26394))) ? ((((arr_11 [i_3]) >> (-8863799862223360016 + 8863799862223360038)))) : var_12));
                        arr_20 [20] [i_4] = (arr_18 [i_4] [i_6]);
                        var_26 = (max((((arr_13 [i_4 + 1] [i_4]) + var_9)), ((var_10 ? var_9 : (arr_13 [i_4 + 1] [i_4])))));
                        arr_21 [i_4] [i_4] = -3;
                    }
                }
            }
        }
        var_27 = ((6562346166323969950 ? 1113780552 : 1133952981));
        arr_22 [i_3] = (((~112) ? 28388 : (((12 ? 601579316 : 8444249301319680)))));
        var_28 = 23698;
    }
    var_29 = var_17;
    #pragma endscop
}
