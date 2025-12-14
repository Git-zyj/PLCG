/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((2938268111 ? var_5 : var_3)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = ((-(min((1356699207 || 3919970573), (min(var_14, (arr_1 [i_0] [i_0])))))));
        var_18 = -23;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_11 [i_1] = ((((((((arr_7 [i_1] [i_1]) ? 3919970577 : (arr_5 [i_1] [i_1])))) ? ((min(var_12, (arr_3 [i_1] [i_1])))) : (arr_3 [i_2 - 1] [i_2 + 1])))) ? (((((((arr_10 [i_1] [i_1] [i_1]) <= 1))) / ((-(arr_4 [i_1])))))) : (((arr_7 [i_2 - 2] [i_2 + 1]) | (arr_9 [i_2 + 1] [i_2 - 2]))));
                    var_19 = (max(var_19, (min(67092480, var_4))));
                    arr_12 [i_1] = ((((1534940834 ? 2760026480 : (arr_7 [i_2 - 2] [i_2 - 2]))) <= -var_6));
                }
            }
        }
    }
    #pragma endscop
}
