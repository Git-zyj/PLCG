/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (-(var_10 + var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (max(var_17, ((((max((arr_6 [i_3 + 1]), (arr_6 [i_3 + 3])))) ? ((~(arr_6 [i_3 - 1]))) : (max(var_15, (arr_6 [i_3 + 2])))))));
                        var_18 = (arr_9 [i_1] [i_2] [i_3]);
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_19 = ((-(arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_5])));
                            var_20 = (arr_9 [i_0] [i_0] [i_0]);
                        }
                        var_21 = (((var_2 ? var_15 : (arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4]))));
                        var_22 = ((((-97 ? 15058 : -116))) ? 3484174620 : ((810792669 ? 3484174638 : 810792676)));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_23 = ((((((arr_7 [i_0] [i_2] [i_2 + 1] [i_6]) / 3484174627))) ? 101 : ((((min((arr_12 [i_0] [i_1] [i_2] [i_6]), (arr_10 [i_0])))) ? (max((arr_1 [i_0] [i_0]), (arr_12 [i_6] [i_6] [i_6] [i_6]))) : var_14))));
                        arr_19 [i_6] [i_2] [i_1] [i_0] = (~233);
                        var_24 = (((((arr_7 [i_2 + 2] [i_2] [i_2 + 3] [i_1]) ? (arr_7 [i_2 + 2] [i_2 + 4] [i_2 + 3] [i_2]) : (arr_7 [i_2 + 2] [i_2 + 3] [i_2 + 3] [i_2 + 4]))) * (((arr_7 [i_2 + 2] [i_2] [i_2 + 3] [i_2]) ^ (arr_7 [i_2 + 2] [i_2] [i_2 + 3] [i_1])))));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_7] |= (((((3484174648 ? (((119 ? (arr_7 [i_0] [i_1] [i_2 - 1] [i_7]) : var_0))) : (max(var_8, var_15))))) ? (arr_21 [i_0] [i_2 + 2] [i_2 + 2] [i_7]) : ((((((arr_0 [i_1]) + var_4))) ? (arr_15 [i_0] [i_0] [i_1] [i_2] [i_2 + 4] [i_7]) : ((3484174647 ? (arr_17 [i_7] [i_0]) : (arr_9 [i_0] [i_0] [i_0])))))));
                        var_25 = (((((-(((arr_12 [i_0] [i_0] [i_0] [i_0]) ? var_12 : (arr_13 [i_0] [i_2 + 4])))))) ? (arr_18 [i_0] [i_1] [i_0]) : (arr_17 [i_2] [i_7])));
                        arr_23 [i_7] [i_2] [i_1] [i_0] [i_0] = (((((((((arr_4 [i_0] [i_1] [i_1]) ? (arr_16 [i_0] [i_1] [i_1] [i_2 + 3] [i_2 - 2] [i_2]) : var_8))) ? (max(-64, var_14)) : 11423886358048879253))) ? ((((arr_8 [i_0]) && ((((arr_18 [i_1] [i_2 + 1] [i_7]) ? var_1 : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : ((min(155, (arr_21 [i_7] [i_7] [i_2 - 1] [i_0]))))));
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (max(-1919114587, (min(((((arr_6 [i_0]) - (arr_6 [i_0])))), (max(10057041447806339353, var_6))))));
                    arr_25 [i_2 - 1] [i_1] [i_0] = 810792685;
                    arr_26 [i_2 + 3] [i_2 + 1] [i_1] [i_0] = 65535;
                }
            }
        }
    }
    #pragma endscop
}
