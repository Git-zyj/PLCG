/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = ((var_5 | (var_9 < 0)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 += (((((arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_2]) || ((((arr_2 [i_2]) ? -7 : (arr_2 [i_0])))))) ? (min((min((arr_0 [i_2]), (arr_0 [13]))), -89)) : ((max((arr_2 [i_0]), -2147483645)))));
                    var_14 *= (((((min(88, 155)))) == (min(35612, (arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1 + 2])))));
                    arr_7 [i_2] [i_1] [16] [i_2] = ((-((-(arr_6 [i_1 + 2] [11] [11] [i_1])))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (arr_2 [i_0]);
    }
    var_15 = (var_10 ? var_0 : ((((86 / 1076630484) < (~var_9)))));
    #pragma endscop
}
