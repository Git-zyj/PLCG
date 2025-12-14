/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((-5355865541844344254 ? 32767 : 32760))) ? ((min(0, (min(13008, 32767))))) : (arr_0 [6])));

        for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_12 *= -32767;
            arr_6 [i_0] &= (!180);
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2 + 2] [i_0] [i_0] = ((!((((arr_0 [i_2 - 2]) ? (arr_5 [i_0] [i_2 - 2] [0]) : (1 && 15609))))));
            var_13 += ((((min(16, 0))) ? (!1) : (max((((arr_4 [5]) + -6884)), 598574359))));
            var_14 = ((((-0 ? 30 : var_7))) <= ((1 ? (arr_4 [i_2 - 2]) : (arr_3 [i_2] [i_0]))));
        }
    }
    var_15 = ((var_5 >= ((var_3 ? (min(var_8, 9223372036854775807)) : (((30 ? -1252 : -21)))))));
    var_16 = (min(var_2, 9223372036854775807));
    #pragma endscop
}
