/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (var_3 + var_10);
    var_19 &= ((((((var_7 ^ var_14) + -1071431661916843813))) ? (((!(!var_1)))) : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [0] [i_2] [i_3] [i_3] = ((((min(var_1, 110))) || ((((arr_8 [1] [i_1] [i_2 - 3] [i_2] [i_3] [i_4 + 2]) << (var_7 - 40460))))));
                                arr_12 [i_3] [i_1 + 1] = (67 - ((67 ? -6769567537291833726 : 110)));
                            }
                        }
                    }
                    var_20 = (arr_9 [i_1 + 1] [i_2 - 2] [i_2 - 4] [10] [i_2 - 2] [i_2 + 1] [i_2]);
                    var_21 *= (((((((arr_2 [i_0] [i_1 - 3] [i_2 + 1]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_2])))) ? ((2147483647 ? var_13 : (arr_1 [9]))) : ((var_15 - (arr_5 [9] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
