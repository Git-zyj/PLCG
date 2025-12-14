/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 15913;
    var_19 = ((var_14 && ((min((min(var_15, var_9)), (130368339301243323 == 130368339301243323))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 |= ((((626682611 >> ((((var_0 & (arr_0 [i_0 - 1] [i_0]))) - 194)))) << (var_4 - 17418876845323315655)));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [6] = var_12;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_9 [i_2] [i_2] [i_2] = 15913;
                arr_10 [i_0] [i_1] [i_2] [i_2] = (((arr_7 [i_1 + 1] [i_2]) ^ (arr_7 [i_1 - 2] [i_2])));
            }
        }
        var_21 |= (min(((((((arr_1 [i_0] [i_0]) < (arr_4 [i_0] [i_0] [i_0])))) * (arr_0 [i_0] [i_0]))), (arr_1 [i_0] [i_0 + 1])));
    }
    var_22 = (max(var_22, var_17));
    var_23 = (max(var_23, 51503));
    #pragma endscop
}
