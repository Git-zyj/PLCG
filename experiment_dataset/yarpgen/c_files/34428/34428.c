/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (var_2 ? 0 : 1);
        var_21 = (min(var_21, (((-(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = (((((var_18 % ((11907 % (arr_2 [i_1])))))) > ((var_5 ? var_9 : (arr_3 [i_1])))));
        arr_5 [i_1] [i_1] = (var_16 % 1);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((((-39 ? (arr_2 [i_2]) : ((6336326867821705786 ? (arr_6 [i_2]) : (arr_7 [i_2]))))) & (arr_3 [i_2])));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_12 [i_3] [i_2] [i_2] = ((~(arr_10 [i_2] [i_3])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [1] = ((((max(((var_4 ? (arr_13 [i_4] [i_3]) : var_7)), var_1))) ? 1 : (max((arr_2 [i_4]), -var_18))));
                            arr_22 [i_6] [i_6] [i_5] [i_4] [8] [i_2] = (min(var_9, ((var_4 ? var_19 : var_11))));
                            var_22 = (min(var_22, ((max(((33554428 ? (((var_16 ? (arr_18 [i_6]) : var_0))) : ((-8879651270521890905 ? (arr_7 [i_5]) : var_14)))), (((4026531840 ? var_11 : (arr_19 [i_2] [i_2] [i_2] [i_4] [i_5] [i_5] [i_2])))))))));
                        }
                        var_23 ^= (-904675223 == 26953);
                        arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] = ((((max(((18083261774054621242 ? 1152921504598458368 : var_1)), (var_13 / var_17)))) ? (~var_15) : ((var_5 ? (((var_13 ? var_15 : 2576009416))) : (max(363482299654930374, (arr_3 [i_3])))))));
                        var_24 = (min(var_24, (((~(((((904675223 || (arr_14 [i_5] [i_4] [i_3] [i_2])))) * ((var_18 ? (arr_2 [i_3]) : var_18)))))))));
                    }
                }
            }
            var_25 = (max((((arr_2 [i_3]) % (arr_3 [i_2]))), (max(-0, (!var_1)))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = (((((~(arr_11 [i_7] [i_7] [1])))) ? -var_13 : (((max((arr_20 [14] [14]), 6336326867821705778)) & (var_14 % var_1)))));
            arr_26 [i_7] [5] [5] = (max(((((var_1 ? var_15 : 1)) & ((min(38603, 7168))))), var_6));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_29 [9] = ((((min((arr_24 [i_2] [i_8] [i_8]), 2777806205520921985))) ? (((min(-24109, 61792)))) : (arr_19 [i_2] [i_8] [i_8] [6] [i_2] [i_2] [16])));
            arr_30 [i_8] [i_2] [i_2] = ((24108 & (((arr_16 [i_8] [i_8] [i_2] [i_2] [i_2]) ? (arr_3 [i_2]) : 1))));
        }
        arr_31 [i_2] [6] = (((var_0 ? var_16 : var_15)));
        var_27 = ((-(arr_25 [i_2] [1] [i_2])));
    }
    var_28 = (min((min((var_0 * var_12), var_7)), ((max(var_13, 1)))));
    var_29 = (!((((((4294967281 ? 4261412852 : 4026531840))) ? var_1 : (var_2 & var_1)))));
    var_30 = ((max(1, 46177)));
    var_31 = (((3318404737574174258 % var_16) > var_6));
    #pragma endscop
}
