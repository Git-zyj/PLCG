/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((~18446744073709551615) <= 18446744073709551615))), (min(((min(-6121, var_17))), ((var_7 ? var_1 : var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] [i_2] &= ((-(min(-var_17, (((arr_3 [5]) >> (92 - 92)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_16 [4] [i_1] = (arr_12 [i_0] [i_0] [0] [0]);
                                arr_17 [0] = ((((((arr_0 [4]) >> (var_5 - 79)))) ? (((var_0 >> (30810 - 30794)))) : (arr_0 [0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
