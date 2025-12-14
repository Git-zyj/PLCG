/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = ((min(-1164445574, 140)));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_2] [6] [i_4 + 3] = (max((((((-(arr_1 [i_0])))) ? ((((arr_12 [4] [4] [i_2] [i_3] [4] [i_3] [i_4]) && (arr_4 [i_1])))) : var_10)), ((9642 ? ((min(55898, (arr_12 [5] [i_4 + 2] [1] [i_4] [1] [1] [10])))) : (((1 && (arr_5 [i_0] [3] [10] [3]))))))));
                            var_18 = ((((~((var_16 ? 1 : 119)))) > ((~(max((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_4 - 2]), (arr_1 [i_2])))))));
                        }
                        for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_19 |= (arr_5 [i_2 + 1] [i_2 + 1] [i_2] [i_3]);
                            arr_16 [i_5 - 1] [i_5 - 1] [8] [8] [1] [i_0] = ((1364599502046671803 ? 58448 : (arr_1 [i_5])));
                            var_20 = (~var_16);
                            var_21 = ((((min((((arr_1 [i_3]) ? 136 : var_3)), ((((arr_11 [1] [i_1] [i_2] [0] [6]) < 127)))))) ? ((((0 % var_1) ? 1674042701 : ((((arr_1 [1]) < 0)))))) : (((arr_4 [i_3]) ? ((31422 ? 10938317493206853545 : 1)) : (arr_5 [i_2] [i_2] [i_2] [i_2 + 1])))));
                        }
                        var_22 = 45;
                        arr_17 [i_0] [i_1] [i_2] [11] = var_12;
                    }
                }
            }
        }
    }
    var_23 = ((min(var_7, ((var_15 ? var_1 : var_1)))));
    #pragma endscop
}
