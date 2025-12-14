/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (-(~63556));
        arr_3 [14] = (((arr_1 [i_0]) ? 14259 : (arr_1 [i_0])));
        arr_4 [i_0] = ((var_10 ? 4294967287 : (arr_1 [i_0])));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [8] [i_1] = var_7;
        var_15 = (arr_0 [i_1]);
        arr_8 [12] = (~var_10);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    var_16 = var_2;
                    arr_15 [i_3 + 1] = (!var_6);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {

                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_17 = (min(var_17, ((min((((~(arr_19 [i_6 + 1] [i_4 + 1])))), (((arr_19 [i_6 + 2] [i_4 + 1]) ? (arr_19 [i_6 + 2] [i_4 - 1]) : -1124936166748018922)))))));
                    var_18 = (max(((max(var_1, (arr_24 [i_4] [i_5] [i_5])))), (((!14250) | var_1))));
                    var_19 = (min((((((max((arr_16 [i_4 - 1]), (arr_22 [i_5] [i_5] [i_4]))))) - 1778820920)), (((!(arr_1 [i_5]))))));
                    var_20 = (min(var_20, 14233));
                }
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_21 &= (arr_27 [i_9 - 2] [i_9 - 2]);
                                var_22 = (~-14253);
                            }
                        }
                    }
                }
                arr_32 [i_4] [i_5] = (((((59620 ^ var_12) >> ((((-(arr_6 [11]))) + 80)))) ^ var_10));
            }
        }
    }
    #pragma endscop
}
