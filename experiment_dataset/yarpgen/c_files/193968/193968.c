/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_1;
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 ^= (((((min((arr_5 [i_0] [i_1] [i_2]), var_11)))) % (((-(arr_0 [i_0]))))));
                    arr_6 [i_0] [i_1] [i_1] = -47145;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_1] [i_3] = (((arr_2 [i_1] [i_1]) ? (max(1211710751958239040, 0)) : (arr_2 [i_0] [i_1])));
                        arr_10 [i_0] [4] [i_1] [i_3] [4] &= ((-var_7 > (max((arr_5 [i_0] [i_3] [i_2]), ((449150185 ? var_0 : var_4))))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_22 += 1;
                        arr_13 [i_0] [i_1] [i_1] [i_4] = 65535;
                        var_23 = (min(((!(((-(arr_7 [i_1] [i_4] [9] [i_1] [i_1] [i_1])))))), ((14151510629210819197 != (arr_12 [i_1] [i_2] [i_4])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
