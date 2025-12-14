/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_6 / var_6) ? var_4 : var_2));
    var_21 = (((((!(!var_8)))) + var_8));
    var_22 = var_3;
    var_23 ^= (~var_19);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_24 = var_6;
            var_25 = (arr_4 [i_1 + 4]);
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_26 = var_11;
            var_27 ^= (((arr_2 [22]) * (arr_2 [12])));
            var_28 = (var_6 ? var_13 : (arr_1 [i_0 - 1] [i_2 + 4]));
        }
        arr_7 [i_0] = (var_16 + var_17);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_29 = min(((+((((arr_5 [i_3]) || (arr_0 [i_3] [i_3])))))), ((((var_1 || (arr_3 [i_3]))) ? (min(1242, 2147483647)) : (min(var_11, 65535)))));
        var_30 = (((min((min(var_6, 1559893800)), (((arr_3 [i_3]) ? var_2 : var_2))))) && ((!(((~(arr_8 [i_3])))))));
        var_31 &= (((((((min((-32767 - 1), -16430))) ? (var_5 * var_3) : (arr_5 [i_3])))) == (((((var_3 & (arr_4 [i_3])))) | (((arr_1 [i_3] [i_3]) ? var_3 : 6609997094923562706))))));
        var_32 = (min(((var_13 ? (((arr_5 [i_3]) / 20230)) : (arr_2 [i_3]))), (((min((arr_6 [i_3]), var_0))))));
        var_33 = (max(((((0 && -101) && (!var_13)))), (max(var_10, (arr_3 [i_3])))));
    }
    #pragma endscop
}
