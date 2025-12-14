/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) && (((-(arr_0 [i_0] [i_0 - 3]))))));
        arr_2 [i_0] = (arr_1 [i_0]);
        var_14 = ((-((~((max(var_3, (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                {
                    var_15 = ((arr_7 [i_2] [i_1]) <= (arr_7 [i_2] [i_2]));
                    arr_11 [i_3] [i_3] [i_3] [i_2] = arr_3 [i_3];
                    arr_12 [i_3] [i_3 + 2] = ((+((((arr_8 [i_2] [i_2] [i_1]) || 7)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_16 = 49705;
                                var_17 += (((arr_15 [i_4] [i_6] [i_6]) ? (arr_10 [i_7] [i_5] [i_4]) : (arr_1 [i_5 - 1])));
                                var_18 = (~110);
                            }
                        }
                    }
                    var_19 = (((!205) ? ((((arr_5 [i_4] [i_5]) == 95))) : (arr_4 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
