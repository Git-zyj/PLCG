/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_20 = (min(var_20, (var_5 || var_12)));

                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    arr_10 [i_0] [i_0 + 1] [6] [i_2] [i_3] [i_3 + 1] &= (var_11 || var_17);
                    var_21 *= var_8;
                }
                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] [i_4] = (((var_6 + var_13) > var_3));
                    arr_16 [i_0] [i_0] [i_1] [i_4] = (var_18 < var_16);
                }
                arr_17 [i_0] [i_1] [i_2] [i_1] = (var_16 % var_10);

                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    arr_21 [i_0 + 1] [i_0] [i_2] [i_5] = var_14;
                    var_22 = (max(var_22, var_1));
                    arr_22 [i_5] [i_0] [i_0] [i_0] = (((var_13 + 2147483647) << (((((var_7 | var_16) + 4457)) - 23))));
                    var_23 &= var_10;
                    var_24 = (min(var_24, (var_15 % var_4)));
                }
                var_25 = var_4;
            }
            var_26 *= (((var_5 && var_5) % var_5));
        }
        arr_23 [i_0] = var_13;
    }
    var_27 = var_15;
    #pragma endscop
}
