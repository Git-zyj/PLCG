/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((min(var_10, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = (arr_5 [i_2] [i_2] [i_1]);
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = (((((arr_8 [i_0] [i_1] [i_0]) ? (arr_11 [i_0] [i_4]) : (arr_11 [i_2] [i_3]))) <= (arr_2 [i_3 + 4] [i_3 + 3])));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_2] = (~243);
                }
                var_13 -= var_0;
            }
        }
    }
    var_14 = (max(var_3, ((~((237 >> (233 - 211)))))));
    #pragma endscop
}
