/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));
    var_11 |= ((!((var_5 && (((var_3 ? var_8 : var_6)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((arr_2 [i_0]) ? (arr_2 [i_0]) : -16625);
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (min((((arr_6 [i_1]) & (arr_6 [i_1]))), -2097152));
        arr_9 [i_1] [i_1] = ((!(~-2097152)));
        var_12 = (max(var_12, -115));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = 2097152;

        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            var_13 -= (((var_0 ? 4870857190555203228 : (arr_14 [i_2] [i_2] [i_2]))));
            arr_15 [i_2] = (arr_10 [i_3 + 2] [i_2]);
            arr_16 [i_3] = (var_4 * 0);
            var_14 = ((((((arr_14 [i_2] [i_3] [i_3 - 1]) >= var_3))) << (((((arr_14 [i_2] [12] [i_3]) / 118)) + 197))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_15 -= (((((((arr_10 [i_2] [i_2]) && (arr_17 [i_2]))))) & (((arr_19 [8]) & (arr_19 [12])))));
            arr_21 [i_4] [i_4] = 9223372036854775807;
            arr_22 [i_4] [18] |= ((var_7 - ((((arr_18 [8] [18]) ? (arr_20 [i_4] [1] [i_2]) : (arr_14 [i_2] [8] [i_2]))))));
            var_16 = ((-(((arr_20 [9] [i_2] [i_2]) ? (arr_17 [i_2]) : 2097129))));
            var_17 = (arr_10 [i_4] [i_2]);
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_18 ^= var_9;
            arr_25 [i_5] = (((((-164493864 ? var_9 : -6124553444351770470))) ? -var_9 : ((61927895575029617 ? 23163 : (-127 - 1)))));
            arr_26 [8] = (arr_19 [12]);
            arr_27 [i_5] = ((-164493864 ? 9223372036854775807 : -7330839163380431149));
            arr_28 [i_2] [1] [1] = -281742515;
        }
        var_19 = (max(var_19, -164493887));
    }
    #pragma endscop
}
