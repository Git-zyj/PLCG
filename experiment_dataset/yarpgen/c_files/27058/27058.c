/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2] = (((min((!-13), (arr_1 [i_1]))) || ((min(-26, ((var_5 ? var_4 : (arr_6 [i_1] [i_1] [i_1]))))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_10 = var_3;
                        var_11 = (min(var_11, (((((min(var_4, (arr_0 [i_0])))) ? ((((arr_0 [i_0]) / (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_0 [i_2]) : 3059613807738165491)))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_12 ^= var_1;

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = ((min(29994, 5402073801457691392)));
                            var_13 = -29994;
                            var_14 = (((-5077944100281786945 - -4324) < ((min(75, (arr_4 [i_2] [i_1] [i_0]))))));
                        }
                        var_15 = ((var_1 ? (((((var_1 ? var_3 : var_7))) ? var_4 : 178)) : ((~((3059613807738165476 ? -1017045310 : (arr_6 [6] [6] [i_1])))))));
                        var_16 = (max(((+((((arr_17 [3] [i_2] [i_2] [i_1] [i_0]) <= (arr_6 [i_1] [i_2] [i_1])))))), (max(-4339, 965061814))));
                        var_17 = (-75 || 1);
                    }
                    var_18 = (max(var_18, (((!((max((min(12, var_1)), -4324))))))));
                    var_19 = (((var_4 ? (!15) : (arr_1 [i_0]))) >= var_9);
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_20 = var_7;
                    var_21 = (max(var_21, ((((((((var_3 ? var_2 : (arr_20 [6] [6] [i_6] [6])))) && (!566326206))) ? (((max((!2560373467), (arr_5 [i_6] [8] [i_0]))))) : (min(-4339, (arr_3 [i_6]))))))));
                }
                var_22 = (((!3740680037166869301) < (((arr_2 [i_1] [i_0]) ? 4324 : var_3))));
                var_23 = var_0;
            }
        }
    }
    var_24 = ((var_3 ? ((((max(1, -1))) ? (((var_8 + 2147483647) >> (var_0 - 222))) : (~var_9))) : (17 == var_0)));
    #pragma endscop
}
