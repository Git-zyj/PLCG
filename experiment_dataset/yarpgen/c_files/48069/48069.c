/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_12 ? (min(2033191107378035970, 3204784782)) : var_2));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((-(arr_1 [i_0] [i_0]))) / (max(3891871508, 140))));
        var_16 = (max(var_16, ((min(((-(arr_0 [i_0]))), var_1)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((!((min((var_4 - 78), (~1269322396841409269))))));
                        arr_11 [i_1] [i_0] [i_1] [i_3] [i_2] [i_3] = var_9;
                        var_17 &= (-(((arr_4 [i_1 - 2] [i_2 + 2]) ? (arr_4 [i_0] [i_0]) : 1455884837)));
                        arr_12 [i_0] [i_1] [i_1] = (-1921349974 - 40756);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = ((((max(145, (min(79, (arr_13 [i_4])))))) ? (((~(arr_13 [i_4])))) : (max((((var_11 ? (arr_14 [i_4] [i_4]) : (arr_13 [i_4])))), (~2148549146)))));
        arr_16 [i_4] = (arr_14 [i_4] [3]);
        arr_17 [i_4] [0] = var_1;
    }

    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_22 [i_5] [i_5] &= ((~(((6381 + 0) - (max(18446744073709551615, 8129922883898777699))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    var_18 = 187;
                    arr_27 [i_7] [i_6] [i_6] = 140737488355327;
                    var_19 = (max(var_19, (((var_13 ? (((((arr_25 [i_7 + 4] [i_5 - 1] [i_5]) == (arr_25 [i_7 - 1] [i_5 + 4] [i_7 - 1]))))) : ((2146418150 ? 2148549149 : 183)))))));
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_20 = ((226 <= ((14272080863928395792 ? var_10 : 4293))));
            var_21 = (arr_21 [i_5]);
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            arr_33 [i_9] [i_5] [i_9] = ((6381 ? -6365 : (arr_25 [i_5 - 2] [i_5 + 3] [i_5 + 4])));
            var_22 = (((11980301062406693576 != var_8) == ((164 ? var_13 : -8439218704737126398))));
        }
        var_23 = ((((((7301 ? var_12 : -32749))) ? ((((arr_32 [i_5]) << (((arr_20 [i_5]) - 126))))) : (arr_28 [14]))) ^ var_2);
        var_24 = (min(var_24, (30957 <= 7)));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_37 [i_10] [i_10] = (arr_30 [i_10] [i_10]);
        arr_38 [i_10] [i_10] = (((arr_14 [i_10] [i_10]) ? 15133840604102832791 : (arr_14 [i_10] [i_10])));
        var_25 = 10;
    }
    var_26 = var_5;
    var_27 = (((!var_2) && ((min(var_13, var_5)))));
    #pragma endscop
}
