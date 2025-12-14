/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_5, ((((min(2147483647, var_8))) ? -8328966923790734744 : (((-2147483631 ? var_5 : var_12)))))));
    var_15 = ((((var_13 ? 258107354 : (((var_6 ? var_1 : var_6))))) >> (min(((var_7 ? var_8 : 18446744073709551603)), ((min(31, var_4)))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((((16 ? ((1 ? var_6 : (arr_1 [i_0]))) : ((((var_9 || (arr_2 [i_0])))))))) ? 11862237163336505751 : var_13));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 = (min(((((var_12 ? (arr_0 [i_0] [14]) : var_12)) + (4294967285 ^ var_13))), (max((arr_2 [i_0]), var_6))));
            arr_7 [i_0] [i_1] [i_0] = (((-2147483647 - 1) ? ((((1 & var_10) > var_6))) : ((((arr_3 [i_0]) >= ((var_7 >> (((arr_5 [i_0]) - 7715966658453944594)))))))));
            arr_8 [i_0] = (((arr_1 [i_1]) ? ((((((arr_0 [i_0] [i_0]) / (arr_3 [i_0])))) ? (((((arr_2 [i_0]) || var_4)))) : (min(127, 9)))) : (1 - -36)));
        }
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_17 += arr_10 [i_2];
        arr_11 [i_2] &= (((((((arr_10 [i_2]) * 1683121880)))) ? ((((((arr_9 [i_2]) ? 4294967295 : (arr_10 [i_2])))))) : ((((18446744073709551589 * (-2147483647 - 1))) / ((min(var_4, var_13)))))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_18 = (max(((((arr_12 [i_3 + 1]) == (((arr_9 [i_3]) ? var_8 : (arr_12 [i_3])))))), (arr_9 [i_3])));
        arr_14 [16] = (arr_13 [i_3]);
    }
    #pragma endscop
}
