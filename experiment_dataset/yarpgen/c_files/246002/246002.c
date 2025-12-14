/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_3;
    var_12 = (!var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (((((-var_9 - (((226 ? 28709 : 77)))))) ? ((min(var_2, 226))) : (max(var_0, -261888))));
                    var_14 = -36826;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_1] [i_0] [i_1] [i_0] &= var_7;
                        var_15 = (((29 + 28709) - (arr_6 [i_0] [i_0] [i_2] [i_3])));
                        arr_11 [i_0] [i_1] [i_1] [i_1] = (!38223);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_0, (max(39, -29647))));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = (2024118366 + 4226648639);
                        arr_15 [6] [i_0] [i_1] = ((((max(((~(arr_3 [i_4]))), ((((arr_7 [1] [i_1] [i_1]) ? var_5 : var_7)))))) ? (((((arr_0 [i_0] [i_0]) || (arr_12 [i_0] [i_1] [i_0] [i_4]))) ? (((!(arr_3 [i_0])))) : (!112))) : ((((36818 ? 8191 : 713601164))))));
                        var_17 = (max(-14017180710681116407, (((((52697455 ? 13 : 68318656)) / (((var_10 ? var_0 : (arr_0 [i_0] [i_0])))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
