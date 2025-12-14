/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-212271876 | 1) ? var_14 : (min(var_4, (min(var_5, -1230284900)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = (var_12 / 2147483647);

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [8] [i_2] [0] = (arr_1 [i_2]);
                    arr_10 [i_1] [i_2] [i_2] [6] = ((29258 || (((32746 ? (arr_8 [i_2] [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = (-((-(7299 * 1))));
                                arr_16 [i_2] [i_1] = (min(((((arr_12 [i_4] [9] [i_0] [i_3]) ? (1 || 1) : ((849324965 % (arr_0 [i_1] [11])))))), (arr_7 [i_0] [2] [i_3] [i_4])));
                                arr_17 [i_0] [i_0] [i_2] [i_4 + 2] [i_1] = arr_1 [3];
                                arr_18 [i_0] [i_1] [0] [i_2] [i_3] [0] [i_4] = (max((0 - 1), (arr_13 [i_4] [i_4] [0] [i_4] [0] [i_4] [i_4 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
