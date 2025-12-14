/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(min((!var_12), (var_12 * var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (((arr_5 [i_1] [0] [0] [i_0]) ? (arr_6 [i_0]) : (arr_5 [i_0] [i_1 + 2] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = ((-(arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_3] [i_0] [i_3 + 1])));
                                var_15 = ((((((-1078655408 ? -1078655399 : 66)))) && (((+(((arr_9 [i_0] [i_1] [6] [i_2] [i_0] [i_4]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_2]))))))));
                                arr_13 [9] [i_0] [i_0] [i_0] = ((((178553418 ? ((((arr_12 [i_0] [i_2] [i_2] [i_2] [i_2]) <= 9223372036854775807))) : (arr_2 [14]))) << ((((1078655390 >> (-2894039517945025388 + 2894039517945025394))) % (arr_5 [i_0] [i_1] [i_0] [i_1])))));
                                var_16 = ((9223372036854775807 + ((8128 & (((var_0 ? (arr_2 [i_3 + 2]) : (arr_9 [i_4] [i_0] [4] [i_1] [i_0] [i_0]))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = (((~224) - ((((arr_2 [i_1 + 2]) < (arr_4 [i_0] [4] [i_1 + 1] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
