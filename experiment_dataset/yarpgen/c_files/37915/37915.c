/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(!var_5)));
    var_21 = ((((max(var_1, var_6))) ? var_11 : ((-(max(var_4, 1))))));
    var_22 = -var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((((((arr_2 [i_1] [i_2]) ? 12 : (arr_1 [i_0])))) ? ((19161 << (arr_1 [i_0]))) : ((~(arr_0 [i_1])))));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_12 [1] [i_1] [i_2] [i_3] [i_1] = (arr_4 [i_1] [i_2]);
                        arr_13 [i_2] |= ((19144 ? 25082 : 571917969));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (((-19162 ? ((3070613963 ? ((var_4 ? 571917979 : (arr_14 [i_0] [i_0] [i_2] [i_4]))) : (~var_11))) : -19183)))));
                        arr_16 [i_0] [i_4] [i_2] [i_2] [0] = (max((arr_0 [i_1]), var_8));
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, ((((((var_3 ? ((var_12 ? var_4 : (arr_19 [i_0] [i_1]))) : (arr_6 [i_1] [i_2] [i_1] [i_0])))) * ((19153 ? var_10 : (arr_15 [i_0] [i_0] [i_2] [i_5] [i_5]))))))));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] = (max(var_17, (arr_9 [i_0] [i_0] [i_0])));
                    }
                    for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_2] = (arr_4 [2] [i_6]);
                        var_25 |= ((((!((max(1224353332, (arr_7 [i_1] [i_2])))))) ? (arr_15 [i_1] [i_0] [i_0] [i_1] [i_1]) : (arr_9 [i_6 - 1] [i_6] [i_6 + 1])));
                        var_26 = (max(var_26, (((-(((arr_10 [i_0] [i_1] [i_2] [i_6]) ? var_15 : (!19161))))))));
                    }
                    arr_24 [i_1] [i_1] = ((~((var_19 ? ((min(19161, var_9))) : (min((-2147483647 - 1), 1))))));
                }
            }
        }
    }
    #pragma endscop
}
