/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 54;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = (max(var_11, 1));
            var_12 = var_4;
            arr_6 [i_1] [i_1] [i_0] = (var_8 <= var_9);
            arr_7 [i_0] = -2613218225860703913;
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_0] [i_2] [i_3] &= (((var_2 ? var_2 : (max(var_7, -2613218225860703897)))));
                arr_14 [i_0] [i_2] = var_6;
            }
            arr_15 [i_2] = (max(var_9, (((var_7 > (var_2 % var_3))))));
            var_13 = var_0;
            var_14 = ((((max(var_1, var_5))) <= (var_7 ^ var_5)));
            arr_16 [i_2] = ((+((max((-2613218225860703897 <= var_2), var_5)))));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_15 = (max(var_15, ((max((min((~var_0), ((min(-32, var_5))))), ((max(-27052, (max(2613218225860703897, var_5))))))))));
            var_16 = (((min(var_0, var_9))));
        }
        var_17 ^= (max((min(var_4, ((max(var_1, -62))))), 1));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_25 [i_5] = (29 << (var_3 - 2806683447));
        arr_26 [i_5] = var_4;
    }
    #pragma endscop
}
