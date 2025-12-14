/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, ((((arr_4 [i_3] [i_2] [i_1]) ? (arr_1 [i_0]) : (((((-120 + 2147483647) << (253 - 253))) & (arr_6 [0]))))))));
                                var_13 = (arr_9 [i_0] [i_2] [i_3]);
                                var_14 = (((min((((arr_0 [i_1] [i_1]) ? (arr_7 [2] [i_0] [2] [i_0]) : var_0)), (((113 << (((arr_4 [i_2] [i_3] [i_2]) + 24957))))))) == 65520));
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_0] |= 1405943229602646492;
            }
        }
    }
    #pragma endscop
}
