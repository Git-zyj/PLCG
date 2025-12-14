/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(var_2, (min(644544954, var_4))))) ? (~3650422341) : ((var_4 + (max(var_7, var_5))))));
    var_11 ^= var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [14] = ((((~(arr_0 [i_0]))) >= (((arr_0 [i_0]) * (arr_0 [i_0])))));
        arr_3 [17] = (min(((min(1, (1 == 1)))), 15765002953834835592));
        arr_4 [i_0] = (arr_0 [i_0]);
        var_12 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 &= 9;
        arr_9 [i_1] [i_1] = var_6;
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_14 &= ((!((min(((((arr_0 [i_2]) == var_5))), var_9)))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_15 &= ((((((var_3 < (arr_0 [i_2]))))) * (min((arr_14 [i_3]), var_2))));
            arr_15 [9] [i_3] = (arr_0 [i_3]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_16 -= (min((((arr_14 [5]) ? (((arr_0 [i_2]) ? var_0 : var_6)) : var_1)), ((((arr_0 [1]) ? (arr_0 [i_6]) : var_4)))));
                            var_17 *= (min(((((arr_20 [i_2] [i_2] [i_2]) != var_2))), (min(((max(var_6, var_6))), (arr_10 [1] [1])))));
                        }
                    }
                }
            }
            var_18 -= max((max(var_8, (arr_11 [i_2]))), (max((arr_11 [i_2]), var_3)));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_19 = ((((238 ? var_7 : var_5)) ^ var_1));
            var_20 += (3650422355 != 1);
            var_21 = ((~((~(arr_14 [i_2])))));
        }
        var_22 = (min(((((arr_26 [i_2] [i_2]) ? (arr_12 [i_2]) : var_5))), (max(((min((arr_17 [i_2]), (arr_16 [i_2] [i_2] [1] [i_2])))), (max((arr_17 [i_2]), var_0))))));
        var_23 = (arr_21 [i_2] [i_2]);
    }
    #pragma endscop
}
