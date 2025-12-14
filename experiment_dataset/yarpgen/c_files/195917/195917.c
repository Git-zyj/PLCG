/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((min((max(1, -125)), (126 || 125))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(var_5, (max(4541002260741233504, 126))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 = (min(var_13, (((-(max(var_5, (126 & 1353720557))))))));
                        arr_12 [i_1] = (((((arr_7 [i_0] [i_1] [i_0]) ? (arr_3 [i_2] [i_2] [i_2]) : (arr_3 [i_2] [i_1] [i_2])))) > (max(var_9, (arr_7 [i_0] [13] [i_0]))));
                        arr_13 [i_1] [3] [i_1] [i_1] = (((min((min((arr_7 [i_3] [i_1] [9]), 18666)), ((max(var_5, -32765))))) | ((min(((32314 ? -1353720557 : (arr_0 [i_2] [i_0]))), (min((arr_10 [i_0]), (arr_6 [i_1] [i_1] [i_1]))))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 = ((((((1676813767 ^ var_4) ? ((max(3561118185, var_6))) : ((-1925 ? var_0 : -108))))) ? 4079 : 2897779235));
                        var_15 = max(1353720557, -18650);
                        var_16 = (max(var_16, ((max(((((~-564089769) | -1845824949))), -1)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, ((((arr_6 [i_0] [i_1] [i_2]) > var_10)))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_1] = (((~-1090438282) ? (var_8 < var_8) : ((-(arr_8 [i_0] [i_0] [i_0])))));
                        arr_20 [0] [6] [i_2] [i_5] &= ((((((arr_9 [i_0] [i_0] [i_0] [1]) ? (arr_15 [8] [i_1] [i_1] [2] [i_0] [i_2]) : 1336867867671104409))) ? (arr_7 [i_2] [11] [i_0]) : (((var_9 ? var_9 : 2151)))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_14 [i_0] [i_1]);
                            arr_26 [i_7] [i_6] [i_1] [i_1] [i_0] = ((((((arr_22 [i_0] [3] [i_1] [i_0] [8] [i_0]) ? (((65529 ? 11 : 9878))) : ((19774 ? var_1 : (arr_14 [i_6] [i_0])))))) ? (arr_23 [i_1] [i_6] [i_2] [i_1] [i_1] [i_1]) : (((min(0, 0))))));
                        }
                        var_18 = (max((min(65525, (arr_14 [i_0] [i_1]))), (max((arr_14 [i_1] [i_6]), (arr_14 [i_0] [i_1])))));
                        var_19 = (max(var_19, ((((!((min(3189891795, 597116962)))))))));
                        arr_27 [i_0] [4] [i_2] [i_6] [i_6] [i_6] |= (min(((((var_1 ? var_5 : 1462033765)))), (((((var_10 ? 125 : -1))) ? (~1299035798) : (21 && 61)))));
                    }
                }
            }
        }
    }

    for (int i_8 = 3; i_8 < 15;i_8 += 1)
    {
        var_20 = (arr_29 [i_8] [i_8]);
        arr_32 [i_8] = (min((((65516 ? -1371708316 : 12181776843348637192))), (arr_28 [i_8 - 1] [i_8])));
        arr_33 [i_8] = (-2147483647 - 1);
        var_21 = var_10;
    }
    #pragma endscop
}
