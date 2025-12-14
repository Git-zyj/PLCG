/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 ^= (min((!var_11), ((max((arr_2 [i_0]), (arr_0 [15]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 += (((((!(((-1577961367 ? var_11 : var_13)))))) < (((arr_15 [i_4 - 1] [14] [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2]) ? var_6 : var_15))));
                                arr_17 [24] [23] [22] [i_3] [19] [i_4] = ((1729382256910270464 ? ((((arr_14 [i_4] [i_4] [i_4 + 3] [i_1 + 1]) ? 54995 : 1416597569))) : 9211952786129796168));
                                var_21 = ((1 >> (15713 - 15695)));
                            }
                        }
                    }
                    var_22 = (((((var_7 ? 546966780 : (((arr_16 [i_2] [i_2]) ? (arr_14 [i_0] [i_0] [i_2] [i_0 - 1]) : (arr_12 [i_0] [10] [i_0 - 1] [i_0] [i_0])))))) ? (((~(arr_5 [i_0 - 1] [i_0 + 1] [i_1 - 2])))) : ((var_2 ? ((min(-13, 546966780))) : (min(-60, 6004997886373503408))))));
                    arr_18 [i_1] = (arr_13 [i_0] [i_0] [i_2] [i_2] [i_1] [i_2]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                {
                    var_23 = (min(var_23, ((((arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_16 [i_5] [8]) : ((((min(var_2, (arr_10 [i_6])))))))))));
                    arr_24 [i_5] [i_5] [i_5] = -9635;
                    arr_25 [i_0] [i_0 + 1] [i_5] [11] = ((-((((1 ? 12017 : var_3)) | ((116 ? 49814 : var_17))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_24 = (~23);
                                arr_32 [i_6 - 4] [i_5] [i_6] [i_5] [i_8] [i_5] = ((!(arr_23 [i_5] [i_5] [i_5])));
                                var_25 = (((arr_7 [i_0]) ? (((+(min((arr_1 [i_6]), -60))))) : ((-(min((arr_11 [5] [i_7] [i_0]), (arr_16 [20] [i_8])))))));
                            }
                        }
                    }
                    arr_33 [i_5] = (arr_5 [i_0] [i_6] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
