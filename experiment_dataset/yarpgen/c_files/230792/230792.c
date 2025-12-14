/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = 37;
                    var_19 *= (arr_6 [i_0] [i_0] [i_2]);
                    var_20 = (min(81, 223));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                var_21 = ((-19268 ? var_8 : -7));
                var_22 = (min((max((arr_4 [i_3 - 1] [i_3] [i_3 - 1]), (arr_6 [i_3] [i_3 + 4] [i_3]))), (arr_15 [i_3])));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, 1022));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_24 = (arr_9 [i_4 - 2] [i_3 - 1]);
                                var_25 = (arr_6 [i_3 + 1] [i_4 - 2] [i_6]);
                            }
                        }
                    }
                    var_26 = 7164716444721174155;
                    var_27 -= ((-(arr_18 [i_5] [i_4 + 1] [i_3 + 1])));

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_27 [i_3] [i_4] [i_4] [i_4] [i_3] = (arr_3 [i_3 + 4]);
                        var_28 = (max(var_28, ((((arr_10 [i_3 + 4] [i_4]) ? (arr_10 [i_3] [i_4 - 2]) : (arr_10 [i_3] [i_4 - 3]))))));
                        var_29 = ((47 ? 3417033551 : (arr_7 [i_3] [i_5])));
                    }
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    var_30 = 15;
                    var_31 = ((((((6332285784116521159 ? -16146 : 239)))) ? (arr_10 [i_3 + 3] [i_3 + 3]) : (min((arr_21 [i_9] [i_9] [i_4 + 3] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3]), (arr_8 [i_3] [i_4] [i_3 + 2])))));
                }
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    var_32 = ((arr_29 [i_3] [i_4 + 4] [i_4 + 4]) ? ((5119943738999299134 ? ((877933730 ? (arr_33 [i_4] [i_3] [i_3] [i_4 - 3]) : 48)) : 4033402771)) : (((max((arr_20 [i_3 + 1] [i_3 + 1] [i_4 - 1] [i_10 + 1]), (arr_20 [i_3] [i_3 + 1] [i_4 - 1] [i_10 + 1]))))));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_39 [i_3] = ((((243 >= (max(-1078353835, (arr_25 [i_10] [i_4])))))));
                        var_33 *= (arr_24 [i_3] [i_3] [i_3 + 3] [i_10 + 1] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_34 -= ((9768327555951846327 / (104 | 252)));
                        var_35 = (min(var_35, (-89 > 57)));
                        var_36 &= (((arr_6 [i_3 + 2] [i_3 + 4] [i_3 + 3]) ? (arr_22 [i_10 + 1] [i_10 - 1] [i_12] [i_12] [i_3] [i_3]) : ((2994601092900946616 ? 2229734113 : 28))));
                        var_37 = ((-((16278542189568056437 ? (arr_11 [i_3]) : (arr_0 [i_4])))));
                    }
                }
                var_38 = ((~(arr_13 [i_4 + 3])));
            }
        }
    }
    #pragma endscop
}
