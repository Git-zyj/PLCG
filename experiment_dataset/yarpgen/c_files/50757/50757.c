/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_21 &= ((~(min((arr_1 [i_0] [i_0]), 3113486328940548584))));
        var_22 = ((-(max(((var_1 ? 16227647011796542557 : 222)), (min(-4017367644681543662, 4294950912))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_23 = var_8;
        var_24 = var_18;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_7 [i_2] = (min((((var_10 ? (arr_1 [i_2] [i_2]) : (min((arr_2 [i_2]), var_0))))), (max((arr_6 [i_2] [i_2]), ((13995286883339511842 ? 9315324121126431970 : -36))))));
        arr_8 [i_2] = (arr_0 [18]);
        var_25 -= (max(var_7, (max(var_10, ((13995286883339511842 ? 36 : 0))))));
        arr_9 [i_2] = ((((16383 ? (((~(arr_5 [i_2])))) : (min((-9223372036854775807 - 1), var_4)))) >= (-9223372036854775807 - 1)));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] = ((15724810284625514971 ? (((min((!13995286883339511842), (min(17457, var_10)))))) : (min(-var_8, 9223372036854775795))));
        arr_13 [i_3] = 645863664;
        var_26 = (min(var_26, ((var_6 == (((((min((arr_2 [i_3]), (arr_2 [i_3])))) <= ((min(1, -36))))))))));
    }
    #pragma endscop
}
