/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((21203 + 14831209084652816733) ? var_2 : var_1)) + (((var_6 ? var_7 : 13263))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!(((-(18855 - var_3))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 |= ((var_10 ? ((15740674513784104254 ? (-32767 - 1) : 29160)) : (((!(!14))))));
                            arr_11 [i_1] [i_0] [3] [i_3] [i_1] [i_3] = (15187110955977118057 ? 11342286071486406427 : 3259633117732433559);
                            arr_12 [i_0] [i_1] [i_3] |= (((6144 >= 3259633117732433565) ? var_7 : (((!(arr_3 [i_0 - 3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
