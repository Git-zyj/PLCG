/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_2, (0 - 18014398509481856))) + (var_5 && var_4)));
    var_12 = (min(var_12, ((max(var_1, 14792146318522888362)))));
    var_13 = (max(var_5, var_5));
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 = max(var_1, ((((arr_4 [i_0] [17] [i_2]) ? -923148894 : 0))));
                        arr_11 [1] [i_1] [i_1] [i_1] [i_2] [i_3] = (max((((max(131, (arr_1 [i_3]))))), (max(-5473319970957267853, (arr_3 [i_0] [i_0])))));
                        var_16 ^= (max((max((arr_1 [10]), (arr_1 [i_0]))), (arr_1 [i_0])));
                        var_17 = (((max((arr_6 [i_0] [i_0] [i_0]), ((var_0 ? 144241689 : (arr_8 [i_0] [i_1] [i_0] [i_3]))))) + (-68 - var_3)));
                        var_18 = 17;
                    }
                }
            }
        }
        var_19 |= ((((-(((arr_2 [i_0] [i_0] [i_0]) | var_4))))) && var_9);
        arr_12 [i_0] = 9661;
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_20 = (68 / 255);
                    var_21 = ((((max((arr_1 [i_4]), (((arr_13 [i_4]) ? (arr_16 [i_4] [i_5] [i_4]) : var_9))))) ? ((((arr_1 [14]) <= var_9))) : (4874 <= -66)));
                    var_22 = (max(var_22, 2047));
                }
            }
        }
        var_23 = (min(var_23, (((103 ? ((((((-(arr_7 [i_4] [i_4])))) && var_0))) : (arr_19 [i_4] [3] [i_4] [i_4]))))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = (max((((-1386799802 <= (((var_3 && (arr_10 [i_7] [i_7] [i_7]))))))), (((((4446797 | (arr_7 [i_7] [i_7])))) ? var_7 : (max(var_7, var_10))))));
        arr_25 [i_7] = ((+(max((arr_2 [i_7] [i_7] [i_7]), var_5))));
        arr_26 [5] = ((max(((61529 ? -1 : -206359514)), ((((arr_23 [i_7] [i_7]) < (arr_2 [i_7] [0] [0])))))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_24 = var_7;
        arr_30 [i_8] [i_8] = (((-((1840285764 + (arr_22 [i_8] [i_8]))))));
        var_25 = ((0 ? 1 : 1));
        arr_31 [i_8] = (max(((((arr_27 [i_8]) && (arr_29 [i_8])))), (max(var_10, (max(var_4, var_9))))));
        var_26 = (((((((-127 - 1) && 83)) ? (max(-465627817, -2048)) : ((max(327065244, 19)))))) ? ((((53 | var_7) | -var_2))) : ((-2248517976061296064 / (arr_8 [i_8] [i_8] [i_8] [i_8]))));
    }
    #pragma endscop
}
