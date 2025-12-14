/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= (!var_6);
                var_13 = (~((~(~152))));
                var_14 += ((~(arr_3 [i_0 - 4])));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_15 = (max(var_15, (arr_1 [i_0 - 2] [i_0 - 2])));
                        arr_11 [i_0 - 2] [i_0] [i_0 - 3] [i_2] = (max((min((arr_6 [i_0 - 2] [i_1 - 3] [i_0 - 2]), (arr_9 [i_2]))), (((-(min(var_0, (arr_10 [i_2] [i_1 - 2] [i_1 - 2] [i_3]))))))));
                        arr_12 [i_0 - 4] [i_2] [i_2] [i_3] = ((((((var_12 ? var_3 : 1)) - (((arr_3 [i_0]) ? var_9 : 442642401))))));
                        arr_13 [i_2] [i_2] = (((((-(arr_6 [i_0] [i_1 - 1] [i_2 + 2])))) ? (((((var_8 <= (arr_9 [i_2]))) ? 47060 : (arr_7 [i_3] [i_2] [i_1 - 1])))) : (max((~7171907503724109851), 47060))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_2] [i_2] = ((min(18482, ((~(arr_18 [1] [i_4] [i_2]))))));
                            arr_20 [i_0] [12] [i_1] [2] [7] [i_4] [i_2] = (arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_4] [i_5]);
                        }
                        var_16 ^= ((((((min((arr_3 [i_0]), (arr_3 [i_0])))) >= (arr_7 [i_0] [i_0] [2])))) * (min(((-(arr_5 [2] [i_2 + 2] [1]))), var_7)));
                        arr_21 [i_2] = (((((~(var_10 > var_6)))) ? ((((((~(arr_14 [i_0] [i_1] [i_1] [i_4] [5])))) ? (var_10 / -19329) : (arr_6 [i_1] [i_2 + 3] [i_1])))) : (max(-1926097560, (arr_2 [i_0] [i_0] [8])))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_1] [i_6] [i_6] [i_6] [i_2] = (max(-9212, (arr_17 [i_0] [i_0] [i_1] [i_2 + 3] [i_0] [i_0] [12])));
                        arr_25 [i_6] [9] [i_2] [i_2] [i_0] [i_0] = (arr_7 [1] [i_1] [i_1]);
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_2] [i_1] [1] [i_7] = (((max((((arr_2 [i_0] [i_0 - 4] [i_0 - 3]) / (arr_9 [i_2]))), -19315)) << ((((min((!var_7), (arr_17 [i_0] [3] [3] [i_7] [i_1 - 2] [12] [6])))) + 15395))));
                        arr_31 [i_2] [i_2] = (arr_2 [i_0] [i_2] [i_7]);
                    }

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_17 ^= (!5898497101318655424);
                        arr_35 [i_0] [i_0] [8] [i_2] = (arr_18 [i_2] [i_2 - 1] [i_2]);
                    }
                }
            }
        }
    }
    var_18 = 18478;
    var_19 ^= var_9;
    var_20 = -2147483647;
    #pragma endscop
}
