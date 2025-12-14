/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, ((max(1, (((arr_0 [i_0]) - 60)))))));
        var_15 -= min((((110 ? var_7 : (arr_0 [i_0])))), (!-var_1));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_16 = (max((min(var_0, (arr_7 [i_1] [i_2] [i_3]))), -48));
                    var_17 = ((-(min((((var_8 ? (arr_9 [i_1] [i_1] [i_3] [i_1]) : 404802750))), (~16809311738640348198)))));
                    var_18 = ((min((min(1015808, 39)), var_0)));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_19 = (((arr_2 [i_3] [i_2]) == (arr_11 [i_1] [i_1] [i_1] [i_1] [7])));
                        var_20 = ((-40 ? var_1 : (arr_11 [0] [15] [13] [i_4 + 1] [i_4 - 1])));
                        var_21 = ((~(~-4194304)));
                    }
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_22 = (arr_8 [i_1] [i_2] [i_3] [i_5]);
                        var_23 = (max((min(var_7, var_9)), ((min((arr_9 [i_1] [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_2] [i_1] [i_5 + 2]))))));
                        var_24 = max((max((arr_12 [0] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2]), (arr_1 [i_3]))), var_9);

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_25 = ((-var_4 ? (((max((arr_2 [i_1] [i_1]), (arr_2 [i_6] [i_6]))))) : (min(((-70 ? -1 : -2047379075753773198)), var_9))));
                            var_26 += ((-48 ? (max(var_3, 2478241893)) : var_11));
                            var_27 = (((max((max((arr_13 [i_1] [i_2] [i_2] [i_3] [i_5 + 2] [8]), var_8)), (arr_6 [i_6]))) >= ((((((((arr_16 [5] [i_5 + 2] [i_3] [i_2] [i_1]) ? (arr_16 [12] [1] [i_3] [i_5] [1]) : var_13))) || (arr_2 [i_3] [i_3])))))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_28 = ((((max((min((arr_14 [i_5 + 1] [i_1] [i_1] [i_1]), -14)), (((3264973168 ? var_9 : (arr_7 [i_7] [i_2] [i_3]))))))) ? (((((max((arr_5 [i_1]), -122))) ? ((var_6 ? (arr_2 [i_7] [10]) : var_5)) : (!var_11)))) : ((var_3 ? var_11 : (arr_7 [i_1] [i_2] [i_3])))));
                            var_29 = (min(var_4, 9109999572181738534));
                            var_30 += (arr_14 [3] [0] [i_3] [i_5 + 1]);
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_31 = (6633532624873150784 - 121);
                            var_32 = (max(-1782876073, 6633532624873150780));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_33 = (min((max(-40, (max(0, (arr_8 [9] [4] [i_3] [i_5]))))), (min((arr_17 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (arr_22 [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 + 2])))));
                            var_34 = ((((min(var_10, ((((arr_1 [i_2]) ? 1976305201 : 48)))))) ? (!16) : ((max((((!(arr_4 [i_5 - 1])))), -110)))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_35 = ((((-(252 + -1)))) ? (arr_5 [i_3]) : (max(var_3, (min(var_2, var_8)))));
                        var_36 = (((((var_10 ? ((0 ? var_11 : (arr_16 [15] [i_2] [i_3] [i_10] [i_10]))) : (!36)))) || ((min(((min(-21, var_11))), (arr_23 [i_1] [8] [0] [0]))))));
                        var_37 *= (min(((((arr_2 [i_1] [i_1]) >= 0))), (arr_25 [i_3] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_38 = (arr_12 [i_1] [i_1] [i_2] [i_3] [i_11]);
                        var_39 = 6633532624873150799;
                    }
                }
            }
        }
    }
    #pragma endscop
}
