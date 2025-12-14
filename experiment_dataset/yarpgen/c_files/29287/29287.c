/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_1] = (max((max((max((arr_7 [i_1]), (arr_10 [i_0] [i_1] [i_0]))), ((max((arr_2 [i_2]), (arr_10 [i_0] [i_1] [i_0])))))), (((-(arr_8 [i_0] [i_1]))))));
                    var_16 *= (!1725697345);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = ((~((+(min((arr_3 [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_16 [i_1] = (arr_14 [i_3 - 1] [i_1] [i_3 - 2] [i_1] [i_3 + 1]);
                                arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] = (max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((arr_1 [i_3 - 1]) ? (((arr_6 [i_1] [i_3]) ? (arr_7 [i_0]) : (arr_3 [i_1] [i_2]))) : (arr_12 [i_4] [i_1] [i_1] [i_0])))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((((min((arr_2 [i_0]), (((!(arr_4 [i_0]))))))) ? (arr_4 [i_0]) : (min((arr_7 [i_3 + 1]), (arr_5 [i_2] [i_3])))));
                                var_18 = ((24043 ? 1725697345 : 0));
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [i_1] [i_1] = ((max(41484, ((28 ? 24045 : -3103651990319061969)))));
                }
            }
        }
    }
    var_19 ^= -var_3;
    var_20 = (!var_7);
    #pragma endscop
}
