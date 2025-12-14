/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (2019986390554420756 || 4294967293);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = (((3 > var_10) % var_3));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (arr_0 [i_0]);
                        arr_10 [i_0] [1] [i_0] [i_3] [i_0] = (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 2]);
                    }
                    var_21 += (((arr_2 [i_0] [0]) ? ((0 ? (arr_6 [i_0] [i_0] [9]) : var_7)) : (arr_9 [i_0] [i_1 - 2] [i_2] [i_1] [i_1])));
                }
            }
        }
        var_22 = ((11030873077357585704 != (arr_3 [i_0] [i_0])));
        var_23 = (((51935 ? 7415870996351965912 : 1)));
        var_24 = (((arr_4 [i_0] [i_0] [i_0]) == (arr_4 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
