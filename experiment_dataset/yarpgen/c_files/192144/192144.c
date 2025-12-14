/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (min(var_1, (var_9 - var_4)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [11] = ((((((var_1 ? var_6 : 6388905239113760571)))) ? ((((1 >> (var_7 - 3218))) % (((1 >= (arr_2 [i_0] [i_0])))))) : (((((1 ? var_8 : 1))) ? (arr_2 [i_0] [i_0]) : ((var_1 ? 1 : 65535))))));
        var_11 = (max(var_11, (!96)));
    }
    var_12 = ((((((((64951 ? var_7 : var_7))) ? (var_6 % var_9) : (~var_6)))) ? ((var_9 ? ((1 ? var_4 : 1)) : var_5)) : (((var_6 != -64) ? ((var_0 ? var_2 : var_9)) : (((0 ? 1 : -89)))))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_13 += (((((1 ? (~var_5) : (1 - var_5)))) ? (((17456282785071056848 ^ var_3) ? (arr_7 [i_1] [0]) : (((arr_10 [i_1] [i_2 - 1] [6]) ^ (arr_10 [i_1] [i_2] [i_3]))))) : (((128 != 1) * 0))));
                    arr_12 [i_3] [i_2] [i_1 + 1] = ((~(((arr_0 [i_2 - 1] [i_2 - 1]) ? 1 : (arr_2 [i_2] [i_2 - 1])))));
                    arr_13 [i_3] [i_1] [i_1] = (((!var_2) >> ((((97 + (((arr_1 [15]) ? var_1 : (arr_6 [1]))))) - 140))));
                }
            }
        }
    }
    #pragma endscop
}
