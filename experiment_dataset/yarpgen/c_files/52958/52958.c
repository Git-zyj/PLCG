/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 &= var_11;
                    arr_8 [i_0] [i_1] [i_2] [8] = (((((!(0 <= 0)))) <= (min(var_7, 73))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = var_6;
                                arr_16 [i_3] [i_1] [i_2] [2] [i_3] = var_10;
                                var_17 = (max(var_17, ((((var_2 ? -9223372036854775798 : var_11))))));
                                var_18 = ((((~3777766963) ? (~var_6) : ((~(-32767 - 1))))));
                                var_19 = var_0;
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = (min((-52 & 698829517), (min(1, 1380421496))));
                    arr_18 [i_2] [i_0] [i_0] [i_0] = (!240);
                }
            }
        }
    }
    #pragma endscop
}
