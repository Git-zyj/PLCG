/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 0))) ? 15437726089067210150 : ((((arr_2 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_11 -= ((((~(arr_7 [8] [i_2 + 1]))) != ((~(arr_7 [i_0] [i_2 + 1])))));
                        var_12 = (max(var_12, (!15437726089067210152)));
                        var_13 = (min(var_13, ((((((arr_4 [1] [i_2]) != (((32758 ? 693930204 : (arr_5 [i_0] [15])))))) ? ((((arr_0 [i_0]) >> (((((arr_3 [15] [15]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_3] [i_1] [i_1] [i_0]))) - 14637361774296563271))))) : -3745963482310533261)))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_1] [i_0] = ((((1570530147012879317 != (arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2])))));
                        var_14 = (min(var_14, (arr_13 [i_4] [i_4] [i_4] [i_0])));
                        var_15 += ((15437726089067210160 ? 1570530147012879315 : -1570530147012879317));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_17 [i_1] [i_5] [i_1] [12] &= -1570530147012879317;
                        arr_18 [i_2] [i_2] [i_2] = ((((((112 || 138) * (((!(arr_11 [i_0] [13]))))))) ^ -6105310320607360063));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        arr_22 [i_2] [i_1] [i_0] [0] [i_1] [i_2] = (arr_1 [i_0]);
                        arr_23 [i_0] [i_0] [i_0] [i_6] [i_1] [i_2] = (((arr_2 [18]) && (-1570530147012879317 & 3475886265449460747)));
                    }
                    var_16 -= (!142989288169013248);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_27 [i_7] [i_7] = ((143 ? 4146296119047821450 : (((-(arr_24 [i_7]))))));
        var_17 = (min(var_17, 15437726089067210150));
        arr_28 [i_7] = (arr_24 [i_7]);

        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            arr_31 [i_7] [i_7] [i_8] = (arr_24 [19]);
            var_18 = (min(var_18, ((-(arr_30 [i_7] [12] [i_8 - 2])))));
        }
    }
    var_19 |= ((((14345657966974155075 ? var_0 : var_0)) / var_9));
    #pragma endscop
}
