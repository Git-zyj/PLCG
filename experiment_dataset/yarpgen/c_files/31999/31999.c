/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 1500803448;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((!((var_4 || (arr_2 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_2] [i_2] [i_0] [6] = (max(var_8, (max((arr_4 [1] [i_1] [i_3]), (max(var_1, var_8))))));
                                arr_15 [i_0] = (!25788);
                                var_14 ^= ((min((max(var_11, var_3)), 39746)));
                            }
                        }
                    }
                }
                var_15 ^= (arr_11 [12] [i_1] [i_1] [12]);
            }
        }
    }
    var_16 = (min(var_16, (((~((min((39746 <= 25788), var_8))))))));
    var_17 = var_8;
    #pragma endscop
}
