/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_4, var_8));
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((var_7 != (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] &= min(0, var_0);
                        var_14 = (min(var_14, (arr_7 [i_3] [i_2] [i_1] [i_0])));
                        var_15 = (min(var_15, (~var_4)));
                        arr_12 [i_0] [i_1] [i_2] [11] = (arr_2 [i_0] [i_3]);
                        var_16 = var_10;
                    }
                }
            }
            var_17 = (min(var_17, var_7));
        }
        var_18 = (max(var_18, 13));
        arr_13 [i_0] = var_6;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_19 = 13;
            arr_19 [i_4] [i_4] [i_5] = (((arr_18 [i_5] [i_4]) ? (arr_17 [i_4] [i_4] [i_4]) : (arr_18 [i_4] [i_4])));
            arr_20 [i_4] [i_4] = (((arr_16 [i_5] [i_4]) / (arr_14 [i_4])));
        }
        arr_21 [i_4] = 17;
        var_20 = (min(var_20, (((((var_4 ? 934566931 : (arr_17 [i_4] [i_4] [1]))) * 0)))));
        arr_22 [i_4] = var_8;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_21 = (max(var_21, ((((min(((var_10 ? var_1 : var_2)), (arr_16 [i_6] [i_6])))) ? (max(var_9, 1310625087)) : (!var_1)))));
        var_22 = (arr_15 [i_6]);
        var_23 = (~934566931);

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_24 = (arr_14 [i_8 - 2]);
                        var_25 = ((~(arr_17 [i_7] [i_8 - 3] [i_9])));
                        var_26 = ((666 ? 1473775513 : (min(-1107793978880068157, -23))));
                        arr_31 [i_6] [i_7] [i_7] [i_9] = (min((arr_25 [6] [i_8 + 2] [i_8]), -7936));
                        var_27 = (((arr_27 [i_8 - 3]) ? (0 > 1) : (((arr_27 [i_8 + 3]) ? (arr_27 [i_8 - 1]) : var_0))));
                    }
                }
            }
            var_28 = (arr_27 [i_7]);
            var_29 = (max(var_29, var_5));
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_30 = (max(var_30, (((((((arr_16 [i_10] [i_10]) ? 8 : 31))) ? (((!((((arr_16 [i_10] [i_10]) ? -934566930 : (arr_32 [i_10]))))))) : var_6)))));
        arr_35 [i_10] = (~var_9);
    }
    var_31 = ((((max(var_9, ((min(var_1, var_0)))))) ? (min((max(3556457909647039203, -1517350549554945861)), (((var_4 ? var_0 : var_1))))) : var_3));
    #pragma endscop
}
