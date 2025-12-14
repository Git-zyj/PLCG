/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 = ((var_13 ? ((((~var_8) <= -1170801300))) : 1918427681));
                        var_17 = (((max((arr_8 [i_0 - 1] [i_2 - 1] [i_0] [i_0]), (arr_0 [i_0]))) >> ((((((max(0, -1918427688))) ? (((arr_2 [i_0]) ? var_5 : -848531106)) : ((1918427681 ? 1918427681 : 1541805259)))) - 1918427651))));
                    }
                }
            }
        }
        var_18 = (max(var_18, ((((((0 ? (arr_5 [10] [i_0 - 1] [10]) : (arr_5 [4] [i_0 + 1] [4])))) ? (!var_7) : (arr_5 [10] [i_0 + 1] [10]))))));
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_19 |= ((-(((arr_3 [i_4 + 2] [i_4]) ? (((!(arr_2 [i_4])))) : (~var_9)))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                {
                    var_20 = (((var_0 / ((-1918427697 ? 1081108858 : 1918427681)))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_21 = var_15;
                                var_22 = -1918427681;
                            }
                        }
                    }
                    var_23 = (max(var_23, (arr_16 [i_6])));
                    var_24 = (min(var_24, ((max((((arr_3 [i_6 - 3] [i_5]) ? (arr_3 [i_6 - 3] [0]) : (arr_3 [i_6 - 3] [i_4]))), (((arr_3 [i_6 - 3] [i_5]) ? (arr_3 [i_6 - 3] [i_4]) : (arr_3 [i_6 - 3] [i_5]))))))));
                }
            }
        }
        arr_23 [0] |= arr_17 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4];
        var_25 = (max(var_25, (arr_8 [i_4] [i_4] [i_4] [i_4])));
    }
    var_26 = var_2;
    var_27 = var_14;
    var_28 = var_6;
    #pragma endscop
}
