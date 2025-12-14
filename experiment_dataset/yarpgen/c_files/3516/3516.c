/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = 28;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 = (max(0, -30367));
                            var_12 = (min(var_12, -var_7));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        var_13 = (((!(!65535))));
        var_14 &= ((((((max((arr_0 [i_4]), var_9))) & (((!(arr_14 [i_4] [i_4])))))) ^ ((((55 || var_4) || ((((arr_3 [i_4]) ? 65515 : (arr_9 [i_4] [i_4] [i_4])))))))));
    }
    var_15 = (((var_3 % ((55 ? 213 : 28)))));
    var_16 = (max(var_16, var_4));
    #pragma endscop
}
