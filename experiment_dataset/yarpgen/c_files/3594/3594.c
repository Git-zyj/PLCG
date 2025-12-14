/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((2267926787964632779 != (1982195374 % var_3))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 ^= -100;
        var_14 = (~2267926787964632785);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = var_0;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_3] |= -2971303972075233724;
                    var_16 = -8841126254626646981;
                    var_17 = (max(var_17, -2000658486572183041));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_18 = ((((min(2267926787964632806, var_1)))) <= (min((min(1, (arr_4 [20] [i_4] [i_4]))), 65535)));
        var_19 -= 3955;
        var_20 = ((-2000658486572183043 + (((-(((var_1 == (arr_5 [i_4] [i_4] [0])))))))));
    }
    var_21 = var_1;
    #pragma endscop
}
