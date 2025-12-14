/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_12);
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((~((1 ? 229 : 1))));
                arr_5 [i_0] [i_0] [i_1] = (arr_2 [i_0]);

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_9 [6] [i_1 + 2] [i_0] = (+(max(var_12, (max((arr_8 [i_0] [i_0] [11] [i_0]), (arr_0 [i_2]))))));
                    var_18 = (max(var_18, ((((((((((arr_3 [i_2] [i_1]) ? (arr_0 [i_0]) : (arr_6 [i_1 + 1] [i_2 - 1])))) ? ((var_3 ? (arr_7 [i_0] [i_1 - 1] [i_2]) : var_1)) : (arr_3 [i_1 - 1] [i_1 - 1])))) ? ((max((((arr_6 [i_0] [i_2 - 1]) != var_2)), ((!(arr_3 [i_0] [i_0])))))) : (min(1, (((arr_1 [i_0]) ? var_12 : var_9)))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_19 = (((((-338340929 ? 1 : -1268441409))) ? (arr_14 [i_0] [i_0] [i_3] [i_0]) : (arr_2 [i_4])));
                        var_20 = (min(var_20, ((((((arr_11 [i_0] [i_0]) ? var_8 : var_2)) == var_6)))));
                        var_21 = var_3;

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            arr_18 [i_4] [i_4] [i_3] [1] [0] [i_3] [i_3] |= (((((144 ? 5413104557544031392 : var_12))) ? (arr_7 [i_0] [i_1 - 1] [i_5 + 1]) : (arr_17 [i_0] [i_3] [i_3] [i_4])));
                            var_22 = (arr_14 [i_0] [i_0] [i_0] [1]);
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_0]);
                            arr_22 [12] [12] |= (~(arr_16 [i_6 + 1] [i_6 - 1]));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 = ((((((arr_7 [i_3] [i_4] [14]) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1])))) ? (((arr_24 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0]) ? var_10 : var_15)) : (arr_7 [i_0] [i_0] [i_0])));
                            var_24 = (((var_11 ? (arr_6 [1] [i_1 - 1]) : (arr_8 [i_0] [i_1] [i_0] [i_1]))));
                            var_25 = (max(var_25, (((!(((arr_6 [9] [9]) && (arr_24 [1] [i_1] [4] [i_1] [1] [i_7]))))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_28 [4] [i_0] [i_0] [i_0] [i_0] = (((((-(arr_6 [i_0] [i_0])))) ? var_11 : (arr_20 [i_0])));
                        var_26 -= arr_20 [2];
                        arr_29 [i_0] [i_3] [10] [i_0] = (var_4 % var_2);
                    }
                    var_27 = (max(var_27, (arr_19 [4])));
                    var_28 *= (!0);
                }

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_29 = ((!(min(var_0, var_3))));
                        var_30 = (max(var_30, (((min((((!(arr_26 [i_0] [i_0] [i_0] [i_0]))), (min(0, 112)))))))));
                        var_31 = ((-(arr_0 [i_0])));
                    }
                    var_32 -= -var_4;
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_33 = (max(0, 1));
                    var_34 |= (max(var_3, (min((arr_27 [i_1 - 1] [i_1 + 2] [1] [i_1 + 2] [1]), (arr_1 [12])))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_35 = (((arr_13 [0] [i_1 + 2] [i_1] [3] [3]) ? (~var_0) : (arr_33 [i_12] [i_0] [i_1 - 1] [i_0])));
                    var_36 = ((~(arr_30 [i_1 + 2] [i_1] [12] [i_12])));
                }
            }
        }
    }
    #pragma endscop
}
