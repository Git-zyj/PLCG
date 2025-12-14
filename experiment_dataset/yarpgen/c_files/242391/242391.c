/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_12 = ((((min((arr_1 [i_0 + 2]), 144))) ? ((30 / ((1 ? 4267456148 : 1)))) : ((((arr_1 [17]) ? (max(514843312, (arr_1 [i_0]))) : (arr_1 [i_0 + 4]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((1 ? (arr_3 [i_2 + 3] [i_2 - 3] [i_0]) : (arr_7 [i_2 - 1] [i_0] [i_2 - 2])));
                    var_13 = ((!((((((-748442152662280606 ? 19488409 : (arr_3 [i_0] [i_1] [i_0])))) ? 1581925986 : ((max((arr_4 [i_2]), (arr_7 [i_1] [i_0] [i_2])))))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_3] [i_0] [i_0] [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0 - 1]) || ((((arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_3]) ? (arr_4 [i_0 + 4]) : 1)))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 = (min(1, (0 / -982119424)));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = 1;
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = (arr_0 [i_0]);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = (((((-5023303362919208708 | (((max(0, (arr_0 [i_0])))))))) ? ((max(245, (arr_11 [i_0 - 1] [i_1] [i_2] [i_4])))) : ((193618985 ? ((((-127 - 1) ? 1 : -97316344))) : 4267456148))));
                        }
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_15 += (125 || -916853548);
                        arr_20 [i_0] [i_0] [2] = 1;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] = (arr_1 [i_0 - 1]);
                        var_16 = ((((max(18446744073709551594, 1899290555))) ? (max(((218 ? 184 : 193618985)), (arr_5 [i_0]))) : (arr_7 [i_2 + 2] [i_0] [i_0 - 1])));
                        var_17 = 1;
                        var_18 = (arr_4 [i_0]);
                        var_19 = (min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 1])));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_20 = (arr_5 [1]);
        var_21 = (((1 < ((247 ? (arr_22 [i_7]) : 12586)))));
    }
    var_22 = ((4832048640284583646 * (((((min(193618985, 1))) ? (!1) : var_3)))));
    var_23 = (~78);
    #pragma endscop
}
