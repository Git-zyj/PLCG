/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((-1045419393 ? var_12 : (((((-1045419383 ? 76 : 1045419375)) != -1669547924)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_10));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (arr_6 [i_1] [i_0 + 1] [i_1]);
                }
            }
        }
        arr_8 [i_0 + 2] = var_5;
        var_15 = (max(var_15, (((~(((~var_6) | (min(-1045419383, var_1)))))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_16 ^= 1045419382;
        var_17 = (min(var_17, (((!(((arr_6 [i_3] [i_3] [4]) || (arr_5 [i_3] [i_3]))))))));
        arr_11 [6] &= (arr_4 [i_3]);
    }
    var_18 ^= (((var_4 - var_1) % -var_2));
    var_19 = var_6;
    var_20 = (min(var_20, var_7));
    #pragma endscop
}
