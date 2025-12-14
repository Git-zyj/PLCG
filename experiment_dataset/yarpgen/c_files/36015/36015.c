/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_1] [i_1 + 3] [i_2] [i_2] [9] = (((((-((30562 >> (((arr_10 [2] [i_3] [i_2] [i_0 - 2] [9] [i_0 - 2] [i_0 - 2]) + 1181953954846371007))))))) ? (min((((arr_7 [i_4] [1] [1] [i_1 + 3] [i_0 - 2]) ? (arr_1 [1]) : (arr_9 [i_2] [i_3 - 2]))), (arr_2 [i_2]))) : (((~(arr_1 [i_0 - 1]))))));
                                var_11 = (min((arr_1 [1]), (((12 == 1) + (1791472564 != var_6)))));
                            }
                        }
                    }
                    var_12 -= (((((865152522 ? ((max(var_7, (arr_4 [i_0 - 1] [5] [i_2])))) : var_9))) ? ((865152521 ? (((var_1 | (arr_4 [1] [i_1] [1])))) : var_6)) : -865152522));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_2] [i_2] [i_2] [i_0] = (((max((arr_6 [i_1] [i_1 + 1]), (arr_12 [i_2] [10] [1] [1]))) & var_5));
                                var_13 = (max(var_13, 1));
                                var_14 = (max((3378765080 - 2147483647), (((!(((arr_0 [i_0 - 2] [i_6]) > (arr_9 [8] [10]))))))));
                                var_15 = ((!((!((min(var_6, var_5)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 -= ((((min((var_2 % var_6), var_0))) ? var_10 : (((var_6 <= ((min(var_6, var_2))))))));
    var_17 -= var_10;
    var_18 = (max(((((~865152516) ? (-21664 == 865152521) : ((var_0 ? var_4 : 1))))), ((((max(var_4, 4028769927))) ? (((max(1, -14238)))) : var_6))));
    #pragma endscop
}
