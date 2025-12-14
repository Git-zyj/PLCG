/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 0));
    var_11 |= (((--17516) ? ((var_5 ^ (var_3 | var_6))) : (((!(!12887))))));
    var_12 = ((var_1 - ((var_5 ? var_2 : var_9))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 48;
        var_13 = ((((((min(var_1, var_3)))) % (arr_1 [i_0]))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_14 = 0;
            var_15 = (min(14270895484583406311, ((min(var_2, -16843)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 = (min(1, (~2147483644)));
            var_17 -= var_5;
            var_18 = (min(var_18, ((min(((!(arr_4 [i_0] [i_2] [i_2]))), (((arr_9 [i_0]) && (((7432628611756713338 ? 16360054754105153009 : 0))))))))));
        }
    }
    #pragma endscop
}
