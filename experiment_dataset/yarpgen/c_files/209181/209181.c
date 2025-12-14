/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((((var_12 < (!120)))) == 65534)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_0] [i_0] [i_0] = (min(7, (((arr_6 [i_0] [i_0] [i_0]) ? (min(var_2, var_0)) : ((var_5 ? 255 : var_2))))));
                    var_15 = ((((1073709056 / 65519) * (((-(arr_1 [i_0] [i_0 - 3])))))));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = var_10;
                        arr_13 [i_0] [i_0] [2] [i_0] [i_0] [i_0] = ((((arr_6 [10] [i_0] [i_0 - 1]) & 65530)));
                    }
                }
            }
        }
    }
    var_16 &= (~var_8);
    var_17 = 0;
    var_18 += ((~(!var_11)));
    #pragma endscop
}
