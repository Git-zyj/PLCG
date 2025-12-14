/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((((var_10 > 2025839834) ? (var_6 % var_3) : (4624459340908078336 >= -1363069001))), (max((((0 ? var_2 : 0))), (var_7 % var_0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_2 + 3] [i_4] = (((((arr_7 [i_1] [i_2 + 2]) >= 18446744073709551601))) ^ ((((arr_10 [i_2 - 1] [i_1] [0] [i_0 - 1]) && (arr_10 [i_2 - 2] [4] [8] [i_0 + 1])))));
                                arr_12 [3] [i_1] [i_2] [i_1] [i_4] [i_2] [i_2] = (((1677067579 ? 18446744073709551601 : 15)) << ((-2 ^ (arr_3 [i_0 - 1]))));
                                var_12 = ((((var_4 | (min(32640, var_5)))) * ((((198 ^ 0) ? (((arr_4 [i_0] [11] [i_3] [i_4]) ? 1677067579 : 5)) : (4177920 | 18487))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] &= (((max(3141414052057056775, 688009502)) / ((((arr_4 [i_0] [0] [i_1] [i_2]) + 127)))));
                }
            }
        }
    }
    var_13 = (((((max(918671250442247507, -1190893898)) >> (121 - 109))) >> (((((var_7 << (((-1894209827 + 1894209845) - 5)))) <= (-2 <= var_7))))));
    #pragma endscop
}
