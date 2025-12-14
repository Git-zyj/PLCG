/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((!((max(0, var_13)))))), var_9));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 *= (min(((~((13080093936135330230 | (arr_1 [i_0]))))), (((~(var_2 & var_14))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [12] [i_2 + 1] [6] [12] |= var_15;
                        var_18 = (min(var_18, (((~(((!((max(28236, (arr_0 [i_0]))))))))))));
                        arr_10 [i_0] [i_1 + 1] [i_3] [i_3] = 29799;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_19 *= (!-29038);
                        var_20 = (min(524287, (((var_4 >= (((0 ? 4094 : var_3))))))));
                        arr_18 [i_6] [i_5] [i_5] [14] [i_5] [i_0 + 1] = (max((arr_11 [i_0] [i_4 + 1]), 0));
                    }
                }
            }
        }
        var_21 = (max(var_21, (((-((((!(arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]))) ? var_13 : (arr_13 [6] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))));
        var_22 |= ((+((((arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0]) && (arr_0 [i_0]))))));
    }
    #pragma endscop
}
