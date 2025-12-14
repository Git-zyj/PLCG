/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (max((((((1 ? 1 : (-32767 - 1)))) ? ((18446744073709551615 ? 1 : -32)) : ((((arr_2 [i_0]) > 1))))), ((((((arr_7 [i_0] [i_0] [i_2] [i_1]) % 1)) < (1 ^ 1))))));
                    arr_9 [i_0] = ((((1 ? 0 : 1)) - ((((((arr_1 [i_0 - 1] [12]) ? var_8 : -30245))) ? (!0) : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, -var_3));
                                arr_14 [i_0] [i_1] [i_1] [18] [i_3 - 1] [i_4 + 1] = ((((-735337401 ? (arr_6 [i_0] [i_1] [i_0]) : 30881)) == (((~var_2) / -30882))));
                                arr_15 [i_0] [i_0] [i_1 - 1] [i_2 + 1] [i_0] [i_4] = (((arr_5 [i_1] [i_0] [i_2 + 1]) ? ((79 ? 1118 : (arr_5 [7] [i_0] [i_2 - 1]))) : (((((arr_5 [i_2] [i_0] [i_2 - 2]) >= 1))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_12 *= 1789418892;
                                arr_22 [i_0] [i_1] [i_0] [i_5] [i_0] = (0 ? (1 ^ 18446744073709551605) : ((((1 || ((max(-80, var_9))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (max((var_0 && -var_3), var_5));
    #pragma endscop
}
