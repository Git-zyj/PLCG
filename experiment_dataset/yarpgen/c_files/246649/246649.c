/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((201 > (~28139)));
        arr_5 [i_0] [i_0] = -1;

        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            var_13 = (min((arr_8 [i_1 + 1] [i_1] [i_1 - 1]), ((((arr_3 [i_0]) * 0)))));
            arr_9 [i_0] [i_0] [i_0] = ((61 ? ((min((((!(arr_0 [i_0])))), (arr_3 [i_1 + 4])))) : (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 4])));
        }
        arr_10 [i_0] = arr_7 [5];
        var_14 = (max(((((arr_1 [i_0] [i_0]) | (((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [9])))))), 5429793650515433490));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_15 = 65535;
        var_16 = (max(var_16, (arr_12 [i_2] [i_2])));
        arr_13 [i_2] = (arr_6 [i_2] [i_2]);
        arr_14 [i_2] = (arr_1 [i_2] [i_2]);
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_17 = ((((max(((12579574893375682343 * (arr_16 [i_3]))), (28139 * -1)))) ? (max(5003929608728163327, 40513)) : var_12));
        var_18 = arr_16 [i_3];
        arr_17 [i_3] = (arr_16 [i_3]);

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_19 = (min(var_19, (((-(min((arr_21 [i_3]), (arr_20 [i_4]))))))));
            var_20 = (((((((((arr_18 [i_3] [i_4]) ? 4095 : 1))) ? (arr_19 [i_3] [i_3] [i_4]) : 19794))) ? (min((((arr_21 [i_3]) ? -18278 : -542788465251215236)), (((40687 ? (arr_20 [i_3]) : (arr_21 [i_4])))))) : var_11));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_21 = ((((max(48299, 12360892677172079943))) ? ((min(((max(var_8, 149))), (min(var_11, (arr_25 [i_3] [i_5])))))) : 43627));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_32 [i_5] [i_6 - 1] = 4294967295;
                        var_22 = 10655;
                        var_23 += ((((((arr_22 [i_3] [i_5] [i_6 - 1]) ? (arr_22 [i_3] [i_5] [i_6 - 1]) : (arr_22 [i_3] [i_5] [i_6 - 1])))) ? (min((!7988250092091225431), ((0 ? 16238 : (arr_18 [i_6] [i_3]))))) : (((((arr_29 [i_3] [i_5] [i_7] [i_7] [i_5]) != 2199023255551))))));
                    }
                }
            }
            arr_33 [12] [i_5] [i_5] = -3;
            arr_34 [i_3] = arr_22 [i_3] [i_3] [i_3];
        }
    }
    var_24 = ((var_6 << ((((((var_3 ? var_4 : 8191))) > (min(2199023255551, 0)))))));
    #pragma endscop
}
