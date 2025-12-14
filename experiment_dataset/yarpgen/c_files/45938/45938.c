/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((max(var_2, var_2))) ? (((16854250009753403758 ? 8041 : 31))) : var_5)), ((max((max(var_9, 31)), ((min(var_9, var_7))))))));
    var_11 = ((!(((var_2 ? 1657784543 : var_0)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = ((~((var_0 ? (arr_0 [i_0 - 2]) : (arr_1 [i_0])))));
        var_13 = ((var_5 ? (arr_1 [i_0]) : (arr_0 [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = ((31 ? (arr_6 [i_2] [i_2] [i_1] [i_3]) : (((!(arr_6 [i_0] [i_1] [i_1] [13]))))));
                        var_15 = (min(var_15, (((~(arr_6 [i_0 - 2] [i_1 + 1] [i_2] [i_0 - 1]))))));

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1 + 2] = -3173;
                            var_16 = (arr_11 [i_4 - 1] [i_1 + 1] [i_0] [i_0] [i_1 + 1] [i_0]);
                            var_17 = (min(var_17, var_3));
                            var_18 = (arr_2 [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
