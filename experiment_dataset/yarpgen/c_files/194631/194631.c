/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((((1 >> (var_14 - 16037)))) ? (((min(32281, 1)))) : (~-7116343851921810500))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] [13] [i_1] [i_1] = 38892;
                    arr_9 [i_0] [i_1] [i_1] = var_16;
                }
            }
        }
        var_20 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_21 = ((!(arr_12 [i_3] [i_3] [i_3])));
            var_22 -= ((var_9 - (arr_10 [6] [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_23 ^= (((arr_15 [0]) >= (~324343196)));
                        arr_19 [i_3] [i_6] [i_5] [i_5] [i_5] = (~324343210);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {

            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                var_24 = (arr_12 [i_3] [i_8 + 3] [i_8 + 2]);
                var_25 = var_18;
            }
            var_26 = (min(var_26, (((((((arr_24 [i_7] [i_7]) ? 32327 : var_15))) ? 38892 : 28035)))));
            var_27 = ((-(arr_11 [i_3])));
        }

        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            arr_27 [i_3] = ((~(((-28035 <= (arr_23 [i_3] [1] [1]))))));
            arr_28 [6] [i_9] [i_9] = (((arr_14 [i_9 - 1] [i_9 - 1]) ? (arr_10 [i_9] [i_3]) : ((var_10 ? var_5 : var_2))));
            var_28 += ((~(var_4 < var_16)));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_29 = ((((-28036 ? 324343212 : (arr_25 [i_3]))) != (arr_29 [i_3] [i_10] [i_3])));
            var_30 = ((!(((-29141 ? (arr_17 [i_3] [i_3] [i_3] [i_10] [i_10] [i_10]) : var_9)))));
            var_31 = (min(var_31, (arr_25 [i_3])));
            var_32 = (var_1 ? (((arr_10 [i_10] [i_10]) ^ var_4)) : (arr_10 [i_3] [i_10]));
            arr_31 [i_3] [i_10] [i_10] = (~((3970624086 ? var_7 : 3375055907)));
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_33 = ((!((((arr_29 [i_3] [15] [15]) ? var_6 : var_12)))));

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_40 [i_11] [i_3] = arr_17 [14] [i_13] [1] [i_11] [i_11] [i_3];
                        var_34 = (((arr_35 [i_11]) ? (((arr_18 [i_3] [i_11] [i_12] [i_12] [i_13] [i_13]) - var_16)) : 65513));
                        arr_41 [8] |= (((((1 ? 1 : 62386))) ? (arr_34 [i_3] [i_12] [0]) : var_3));
                    }
                    var_35 = (max(var_35, 0));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        arr_45 [i_14] = ((((((arr_18 [i_14] [i_14] [i_14] [i_14] [11] [i_14]) ? 3970624086 : var_14)) % ((((arr_37 [i_14] [i_14] [i_14] [i_14]) ? var_5 : -8))))) + 54646);
        var_36 = ((!((max(4380146792179726644, 3970624100)))));
        var_37 = (arr_30 [i_14] [i_14]);
        var_38 = (((min((arr_4 [i_14]), ((var_15 ? var_15 : var_0)))) < (((((~(arr_22 [i_14] [14] [i_14])))) ? var_14 : -54646))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_39 = (((arr_47 [i_15]) ? 10879 : (((!((((arr_47 [i_15]) ? (arr_46 [i_15]) : (arr_46 [i_15])))))))));
        var_40 = max(((((((arr_47 [i_15]) ? 65535 : var_3))) ? ((min(77, 248))) : ((var_16 ? var_15 : 187)))), (arr_47 [i_15]));
    }
    #pragma endscop
}
