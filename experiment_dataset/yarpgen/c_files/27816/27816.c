/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((-1977461993706914550 / (7 & 1103592084142553429)));
        var_12 = (((((2213662703 << (18446744073709551609 - 18446744073709551590)))) ? ((3824198583 ? (arr_0 [i_0] [i_0]) : 18446744073709551609)) : (((~(arr_1 [i_0]))))));
        arr_4 [i_0] = 25;
        var_13 = (-(!6));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = (!1);

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_14 = var_2;
            arr_14 [i_1] = (((arr_13 [i_1 - 1] [i_1 + 1]) ? ((11112271941286346205 ? -2173 : 1)) : 24615));
            var_15 -= ((1508615159 ? ((10696 ? var_10 : var_6)) : (arr_10 [i_1 - 1] [i_1 - 1])));
            arr_15 [i_1] = (arr_7 [i_2 + 2]);
            var_16 = ((2786352136 ? (arr_12 [i_1 - 1] [i_1 - 1]) : 1508615159));
        }
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_18 [i_3] [i_3 + 1] = (((51 || 0) || (arr_17 [i_3 + 1])));
        var_17 -= -8642;
        arr_19 [i_3] = arr_16 [i_3];
    }
    var_18 = -7404088101371014867;

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_23 [i_4] = 7597934721033489037;
        var_19 = 15762772674758692017;
    }
    var_20 -= ((((max(((var_11 ? var_4 : 0)), 18446744073709551609))) ? var_6 : ((((!(((7 ? 3710015090 : var_1)))))))));
    #pragma endscop
}
