/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = -32758;
        arr_2 [1] &= var_1;
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1] = ((!(((var_3 ? ((var_1 * (arr_4 [i_1 - 1]))) : (!-32758))))));
        arr_6 [i_1] = 52296;
        var_17 = (((max(-var_12, (11383047445913758529 == var_9))) / (max(1835008, (((var_3 < (arr_0 [i_1]))))))));
        arr_7 [i_1] [i_1] = var_7;
    }
    var_18 |= var_6;
    var_19 = -38;
    var_20 = ((((max(12750, 4009221059))) <= var_8));
    var_21 = (((((((max(-32758, var_1))) % (~32757)))) ? (((var_3 << (3069755350080492674 - 3069755350080492651)))) : -32758));
    #pragma endscop
}
