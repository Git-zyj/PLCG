/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 -= (!var_5);
        var_21 = ((2669090023 ? 1536 : 1));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = ((!((min((arr_2 [i_1]), (arr_2 [i_1]))))));
        arr_5 [14] [i_1] = var_18;
        var_23 -= ((-((((max(2669090023, -3915054136376085439)) == (((var_11 ? 2669090023 : (-2147483647 - 1)))))))));
        var_24 = ((-((-(arr_2 [i_1])))));

        for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_25 ^= (((max(3241920001, -2147483628)) - var_1));
            var_26 &= (-2147483647 - 1);
            var_27 = (((((((max((arr_7 [i_1] [i_1] [i_1]), 5747012333844866314))) ? var_8 : 7))) ? ((((arr_7 [i_2] [i_2] [i_1]) ? var_8 : var_10))) : ((2293508148 ? 10 : 4294967289))));
        }
        for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_28 -= (4294967295 || var_17);
            var_29 = var_1;
        }
    }
    var_30 = var_17;
    var_31 = ((((((((min(var_16, var_0))) || -var_13)))) <= 18446597016183342795));
    #pragma endscop
}
