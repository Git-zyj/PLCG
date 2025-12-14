/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 &= var_11;

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_19 = (max(var_19, (((min(19262, 63))))));
                    var_20 *= ((33554431 ^ (-4803184006573072919 * var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] |= ((((var_7 + 29554) ^ (((arr_3 [i_0] [i_1] [i_1]) >> (((arr_11 [i_1]) + 1057521366)))))));
                                var_21 = 4261412885;
                                var_22 = (min(var_22, 153058114));
                                arr_14 [i_2] = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_1));
                                var_24 -= 4141909182;
                            }
                        }
                    }
                }
                var_25 |= -var_14;
            }
        }
    }
    var_26 = ((var_5 ? 182 : var_3));
    var_27 = var_0;
    #pragma endscop
}
