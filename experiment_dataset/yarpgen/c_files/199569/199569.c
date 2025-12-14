/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((65535 && var_8) % (-2147483647 - 1)))) && (((~126) < var_2))));
    var_19 -= var_9;
    var_20 = (((((var_0 && 9117964924344303604) && (var_7 || var_14))) || (-9117964924344303605 || var_11)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((-((-(arr_1 [i_0])))));
        var_21 = var_2;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_22 ^= 15498;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_11 [i_1] = ((((arr_10 [i_1 - 1] [4] [i_1 + 3] [i_1]) >> (((arr_8 [i_1 + 3] [i_2]) + 15080)))));
                var_23 = -1;
                var_24 = ((-(arr_10 [i_1 + 4] [i_1] [i_1] [i_1 + 2])));
                var_25 += var_2;
            }
            arr_12 [i_1] = (var_4 % 3782058956779111380);
            arr_13 [3] [i_1] [0] = (var_8 / ((var_6 % (arr_5 [i_1]))));
            arr_14 [i_1] = (((arr_9 [i_1 + 4] [i_1 + 2] [i_1 - 1]) & -var_8));
        }
        var_26 ^= (15672819562643586650 > -1);
        var_27 = (min(var_27, (9117964924344303590 / 2955157134)));
    }
    #pragma endscop
}
