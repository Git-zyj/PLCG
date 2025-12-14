/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_10 = var_8;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = (((arr_0 [i_0 + 1]) ? (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))) : (((arr_2 [i_0 + 1] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1])))));
            var_12 = (((((((((arr_5 [i_0]) ? var_5 : 18420))) ? (max(1726048355107264471, var_6)) : ((min((arr_1 [i_0] [i_0 + 1]), (arr_5 [i_0]))))))) ? (arr_5 [i_0 - 1]) : ((47115 ? var_6 : -18071508978452417814))));
        }
        arr_6 [i_0 - 1] = (min((max(var_1, (((arr_2 [10] [3]) ? (arr_3 [i_0]) : (arr_0 [i_0]))))), (((((arr_1 [i_0] [i_0 + 1]) ? 18071508978452417814 : (arr_4 [i_0] [i_0] [i_0]))) & (arr_5 [i_0])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_3] = (max(((((arr_5 [i_0 + 1]) || (arr_5 [i_0 - 1])))), (((arr_5 [i_0 + 1]) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 + 1])))));
                    var_13 = (arr_10 [i_0] [i_0] [i_0] [6]);
                    var_14 = (18420 ? (((-(arr_4 [i_0] [i_0] [i_0])))) : (arr_1 [i_0 + 1] [i_0 - 1]));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_15 = var_0;
                                var_16 = (((!var_4) & (max(((33806 * (arr_4 [i_0] [13] [16]))), var_6))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0 + 1] [i_0] = ((var_3 ? (max(((max(47116, 0))), ((var_7 ? 31729 : -1430374052)))) : -var_1));
    }
    var_17 = var_8;
    var_18 = (max(((((max(112527976355549952, 1726048355107264471))) ? var_7 : (!var_5))), var_6));
    var_19 = ((((((((2126474237432733181 ? 62914560 : 18334216097354001663))) ? var_9 : var_3))) ? ((((((-(-32767 - 1)))) ? (!var_5) : ((min(var_1, 56264)))))) : (((!var_3) ? (var_7 - var_0) : var_5))));
    var_20 = var_9;
    #pragma endscop
}
