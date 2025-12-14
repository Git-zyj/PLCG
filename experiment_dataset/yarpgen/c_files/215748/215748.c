/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = ((((max(109, (arr_0 [i_0])))) <= (((!var_7) ? (arr_0 [i_0]) : ((max((arr_0 [i_0]), var_2)))))));
        var_12 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (((var_7 ? (((arr_9 [i_3] [i_3 - 1] [i_3] [i_3]) + (arr_3 [i_1 + 2] [i_3]))) : 146)))));
                        var_14 = (max(var_14, ((min((1 + 4294967295), ((((arr_8 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2]) ? var_6 : ((-21238 + (arr_5 [i_0] [i_1] [i_2] [i_0])))))))))));
                        var_15 = (min(var_15, ((min(((((min(1643619258, var_7))) ? 1 : (arr_8 [i_1 + 2] [i_1] [i_3] [i_3 - 2]))), (((~((~(arr_5 [i_0] [i_1] [i_0] [i_2])))))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 += (((min((arr_12 [i_5 + 1] [i_4]), (((var_0 ? (arr_13 [i_0] [i_1]) : (arr_2 [i_0] [i_1] [i_4])))))) << ((max(var_9, 21238)))));
                        var_17 = (min(var_17, (((var_7 ? (arr_15 [1] [1] [i_4] [i_4 - 1] [i_4] [1]) : (arr_10 [i_5 - 2] [i_0] [i_0]))))));
                        var_18 |= 3844194113095483583;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_19 = ((arr_19 [i_6]) | ((~(arr_17 [i_6] [i_6]))));
        arr_20 [i_6] = ((((min((arr_19 [i_6]), (max((arr_17 [i_6] [12]), (arr_18 [i_6])))))) ? (arr_18 [9]) : ((min(((((arr_19 [i_6]) <= (arr_17 [i_6] [i_6])))), (-32767 - 1))))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_28 [i_7 - 2] [i_7] = (((arr_6 [i_7 - 2] [i_7 - 2] [i_7]) ? (arr_3 [i_8] [i_7]) : (arr_17 [i_7 - 2] [i_7 - 1])));
            var_20 = (arr_19 [i_7 - 1]);
            arr_29 [i_7] = (arr_6 [i_8] [i_7 - 1] [i_7 - 1]);
            var_21 = (((arr_10 [i_8] [i_7] [i_7]) >= ((((var_9 >= (arr_17 [i_8] [i_7])))))));
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_22 = (~1);
            var_23 = (arr_27 [i_7]);
        }
        var_24 += (((arr_26 [12]) >= (arr_26 [8])));
        var_25 = (((arr_25 [i_7] [i_7 - 1] [i_7 - 1]) + (arr_31 [i_7] [i_7 - 1])));
    }
    #pragma endscop
}
