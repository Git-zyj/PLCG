/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_12 = var_6;
                arr_8 [i_1] = ((max(2027289844, 32752)));
                var_13 = (max(var_13, (var_5 == var_0)));
                var_14 = ((1 ? (min(10, ((min(2027289844, var_2))))) : ((max(2027289844, 1654645920)))));
                var_15 = (max((max(78, var_10)), ((-((1 ? var_3 : var_5))))));
            }

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                var_16 |= max((!1), var_4);

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_17 += (((~((max(var_10, var_1))))));
                        arr_17 [i_5] [i_1] [i_1 + 1] [i_1] [i_0] = var_0;
                        var_18 = 56;
                        var_19 = -2147483646;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_20 = (max(2027289857, ((min(-8, -11128)))));
                        arr_22 [14] [i_1] [i_1] [i_6] = ((6632 * (!2027289842)));
                        arr_23 [i_6] [i_6] [i_3] [18] [12] [i_1] [i_3] |= min(var_8, 23);
                        var_21 = (((var_11 ? ((min(var_5, 0))) : 32767)));
                    }
                    arr_24 [21] [i_1] [i_1 - 2] [i_1] [0] = var_11;
                    var_22 = ((1 ? var_4 : 32766));
                }
            }
        }
        var_23 = ((((min((((var_3 ? var_11 : 3564156719))), (max(25490, var_7))))) ? (~1) : var_8));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((-(min(536608768, var_10)))))));
        arr_28 [i_7] = ((((max(589738524, var_1))) * ((var_0 ? 0 : var_1))));
    }
    var_25 = 108;
    #pragma endscop
}
