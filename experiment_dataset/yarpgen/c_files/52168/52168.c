/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = -65510;
                var_17 = (((+(((arr_3 [i_0] [i_0] [i_0]) ? var_1 : 0)))) << (var_0 + 17220));
                arr_7 [i_0] [i_0] [i_0] = ((~(((arr_4 [i_0] [i_0 + 3]) ? (arr_3 [i_0] [i_0] [i_0]) : (max((arr_3 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0])))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = 242;
                    var_18 = ((~(arr_4 [i_0 + 2] [i_0 + 2])));
                }
                for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_19 = 46605;
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_5] [i_0] &= ((((((arr_3 [i_1] [i_4 - 2] [i_5 - 2]) ? -3200 : (arr_3 [i_1] [i_4 - 1] [i_1])))) || ((min(((max(65498, (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((arr_13 [i_5] [i_5] [i_5]) ? var_11 : 43)))))));
                                var_20 = (max(var_20, 29290));
                            }
                        }
                    }
                    var_21 = (((arr_18 [i_3] [i_0] [i_3]) ? (arr_11 [i_0] [i_0] [i_0]) : (arr_3 [i_3] [i_3] [i_3])));
                    arr_20 [i_3] [i_3] [i_3] = (((((arr_2 [i_3 - 2] [i_0 + 4] [i_3 - 2]) ? (arr_5 [i_3 + 3] [i_0 + 3] [i_3 + 3]) : (arr_2 [i_3 - 1] [i_0 + 4] [i_3 - 1]))) / ((((((-15265 ? var_9 : (arr_11 [i_0] [i_0] [i_0]))) != 6240))))));
                }
            }
        }
    }
    var_22 = 65511;
    #pragma endscop
}
