/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max((((!((min(var_4, var_8)))))), (min((min((arr_0 [1]), var_10)), var_8))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_12 = (max(1, -400239868));
                    arr_8 [i_0] [i_1] [i_1] = ((((((min((arr_5 [i_1] [i_1] [i_2] [i_0]), var_10))) ? ((((!(arr_4 [i_1] [i_2]))))) : (min(var_7, var_0)))) >> ((((~(!var_4))) + 7))));
                    arr_9 [i_1] [i_1] [i_2] [i_2 - 2] = (((((((!(arr_5 [i_1] [6] [i_1] [i_2]))))) != (arr_2 [i_2 - 1] [i_2 - 1]))) ? (min((arr_2 [i_2 - 1] [i_2 - 1]), (((var_8 >> (((arr_2 [i_1] [i_0]) - 7677280442254647585))))))) : ((((var_3 > (!var_0))))));
                    var_13 = (arr_0 [i_2]);
                }
                arr_10 [i_1] [i_1] = (((min(var_6, var_8)) / (((max((arr_7 [i_0] [i_0] [i_1]), (arr_6 [i_0] [i_1] [i_0])))))));

                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_14 ^= (14878309319214886613 && 3722892052);
                    arr_15 [4] [i_1] = var_10;

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_1] = (((((var_6 >> (var_5 - var_5)))) ? ((min(var_2, (((var_1 >= (arr_4 [i_3] [1]))))))) : (min(((var_6 >> (((arr_12 [i_0] [i_3]) + 2079508635)))), (arr_14 [i_0] [i_1] [9])))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_23 [6] [i_3] [i_3 + 1] [i_4] [i_1] [9] = ((~(min(((var_9 * (arr_21 [i_1] [i_1] [i_1] [i_4] [i_5]))), (arr_14 [i_3 + 1] [i_1] [i_3 + 1])))));
                            arr_24 [1] [i_1] [i_3] [i_3] [i_3] = (arr_14 [i_0] [i_1] [i_3 - 1]);
                            var_15 = (min(((var_2 ? (!var_6) : (min(var_5, (arr_16 [1] [1] [i_3 + 1] [i_4]))))), ((min(((var_4 >= (arr_11 [1] [i_1] [i_1]))), ((!(arr_16 [i_1] [i_1] [i_1] [i_1]))))))));
                        }
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            arr_28 [i_4] [i_1] [i_4] [i_4] [i_4] = (min((min((min((arr_17 [i_0] [2] [2] [2] [1] [i_0]), var_6)), (arr_11 [i_1] [i_3 - 1] [i_1]))), (((!(arr_14 [i_3 - 1] [i_1] [i_6 + 1]))))));
                            arr_29 [i_0] [i_1] [i_1] [i_3] [1] [i_6 - 2] = (((!var_2) ? (max(var_5, var_9)) : (((((arr_25 [i_0] [1] [i_0] [5] [i_6 + 2] [i_3 + 1] [i_1]) || (arr_25 [i_0] [i_1] [i_4] [i_0] [i_6 + 1] [i_3 + 1] [i_1])))))));
                            var_16 = (max(var_16, var_4));
                            var_17 = (((max((arr_14 [i_6 + 1] [i_1] [i_3 + 1]), (arr_5 [i_1] [i_3 - 1] [i_0] [i_1]))) >= ((((min(var_7, var_10))) ? (arr_22 [i_3] [i_3] [i_3 + 1] [i_6 - 2] [i_3] [i_1]) : (min(var_8, (arr_22 [i_0] [i_1] [i_6] [i_4] [i_6] [i_1])))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_34 [i_1] [i_1] [i_3] [i_4] [i_1] [i_7] = (arr_2 [i_0] [i_0]);
                            var_18 = (max(((((!var_3) ? ((min((arr_16 [3] [i_4] [i_1] [i_0]), (arr_6 [i_0] [i_1] [i_3 - 1])))) : (arr_25 [i_0] [i_1] [i_1] [i_3] [i_4] [3] [i_1])))), (((min(3568434754494665003, 36956)) / ((((-32767 - 1) ? 122 : -8852219538711194682)))))));
                            arr_35 [i_0] [8] [i_1] [i_4] [i_7] = (min((0 || 402653184), var_9));
                        }
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_19 ^= (arr_22 [i_0] [i_3] [i_3] [4] [i_0] [i_0]);
                        var_20 = ((~(max((arr_13 [i_3 + 1]), (arr_13 [i_3 - 1])))));
                        arr_39 [i_1] [i_1] [i_8] = (min(18446744073709551615, 65527));
                    }
                    var_21 = (((((~(arr_5 [i_1] [3] [5] [i_3])))) && ((((arr_13 [i_3]) ? (arr_26 [8] [i_3] [i_3] [i_3]) : (arr_13 [i_3 + 1]))))));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    var_22 = ((var_0 ? (arr_21 [i_1] [i_1] [i_9 - 2] [i_9] [i_9 + 2]) : (arr_18 [i_0] [i_9 - 2] [i_9 - 2] [i_9])));
                    var_23 = arr_36 [i_0] [i_0] [i_0] [i_0] [i_0];
                    var_24 = var_9;
                    arr_44 [i_1] [i_1] [i_1] = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_1] [i_9]) : (arr_2 [i_0] [i_1])));
                }
            }
        }
    }
    var_25 = (max(var_25, ((max(((min((min(var_2, var_8)), (var_0 && var_3)))), (min(((max(1825272856, 9223372036854775800))), (min(var_3, var_9)))))))));
    #pragma endscop
}
