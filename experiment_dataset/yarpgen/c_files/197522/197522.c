/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_11 > var_13) + ((6 ? 1777763764191396909 : var_4))))) ? var_2 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = 127;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_4] [i_4] = ((-(arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 4])));
                                var_16 = (min(var_16, var_3));
                                var_17 = ((!((((min(8282857504737364883, (arr_8 [i_2] [i_3]))) - 120)))));
                            }
                        }
                    }
                }
                var_18 -= 11545281798700331645;
                var_19 = var_13;
            }
        }
    }
    #pragma endscop
}
