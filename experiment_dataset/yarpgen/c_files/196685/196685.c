/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_6 >= var_2) ? (~646176837) : var_14)) != ((((var_2 && (18446744073709551604 % var_4)))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] &= 1;
                    var_18 *= ((((((min((arr_1 [i_0 + 3] [i_1]), -21972))) / (arr_2 [i_0]))) * (max(-54162, 79))));
                }
            }
        }
        var_19 += (min((arr_0 [i_0 + 3]), ((-21972 ? var_1 : (arr_0 [i_0 - 1])))));
        var_20 = (min(var_20, (((((((!(((11362 / (arr_0 [1])))))))) ^ (max((arr_0 [i_0]), (((-2333070747989013905 ? (arr_4 [4]) : 88))))))))));
        var_21 = (min(var_21, ((max(((var_6 ? ((var_13 ? 17566581287102762038 : var_14)) : (((var_16 ? (arr_4 [1]) : var_11))))), var_7)))));
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_22 &= (((((-20940 ? 131040 : (arr_7 [i_5] [i_3])))) ? ((((var_0 ? var_11 : (arr_16 [i_5] [i_6]))))) : (((!(arr_16 [i_5] [i_5]))))));
                        var_23 = var_15;
                        arr_18 [i_3] [i_4 + 1] [i_4] [i_5] [i_4] = ((+((-(((arr_11 [10] [i_4] [i_5] [i_6]) / 1))))));
                    }
                }
            }
            arr_19 [i_4] = -79;
            var_24 &= (min(((((min(var_1, 4879449928749604915))) ? (min(102, (arr_2 [i_3]))) : (~-1204510757))), var_3));
            var_25 = (arr_15 [i_4]);
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            var_26 += var_4;
            var_27 = 3892814069112792390;
            var_28 = (((((var_2 ? 0 : (arr_10 [i_7] [i_3] [i_7])))) ? (76 + var_8) : (var_11 < 17566581287102762034)));
            arr_22 [i_7] = -var_2;
        }
        var_29 = ((~(arr_9 [12])));
    }
    #pragma endscop
}
