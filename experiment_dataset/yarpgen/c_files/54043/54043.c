/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((3300930557996943207 != (((-(min(2525484317, (arr_0 [i_1]))))))));
                arr_4 [i_0] |= ((((3149451117 > (arr_1 [i_0 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 |= (~var_4);

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_21 = (min(var_21, (arr_6 [i_4] [i_4] [i_4 - 1])));
                                var_22 = (max(var_22, ((min((((!((((arr_11 [i_1] [8] [i_2] [8] [i_0]) | 204)))))), (arr_3 [10] [i_2] [i_4 - 1]))))));
                                arr_12 [i_2] [i_1] = var_4;
                                arr_13 [i_0 + 1] [i_1 + 1] [4] [i_2] [i_4] = ((-(-1977641714 ^ 0)));
                                var_23 = (max(((~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4 + 1] [i_4]))), (arr_9 [i_4] [i_2] [i_1 - 1] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_9;
    var_25 = var_9;
    #pragma endscop
}
