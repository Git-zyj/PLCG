/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = ((~(((((0 ? (arr_7 [i_0] [i_1] [i_1] [i_1 + 1]) : (arr_4 [i_1] [i_1])))) | (~-8305549886399446657)))));
                                arr_13 [i_0] [3] [i_1] [i_1] [7] = (var_2 <= 8305549886399446640);
                                arr_14 [i_4] [i_1] = (min(var_3, (arr_9 [i_1] [1] [i_2] [7])));
                            }
                        }
                    }
                    var_20 = (min(var_20, ((min(1, ((!(((2147483647 ? -7891489216246692261 : (arr_10 [3] [i_0])))))))))));
                    var_21 = ((~((min(35581, var_10)))));
                }
            }
        }
    }
    var_22 = var_4;
    var_23 = var_17;
    #pragma endscop
}
