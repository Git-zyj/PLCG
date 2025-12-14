/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(5840508683388006248, ((min(var_14, 5055351337650339797))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((!(arr_1 [i_0 + 2] [i_0 + 2])));
        var_20 = 18014398509481983;
        arr_5 [i_0 - 1] [i_0] = 4;
        var_21 = (max(var_21, var_18));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 = (arr_2 [i_1]);
        arr_8 [i_1] [i_1] = var_12;
        arr_9 [i_1] = (arr_2 [i_1]);
        var_23 = (((arr_3 [2]) ? ((((4 && var_1) << (((min((arr_0 [15] [i_1]), 3833701249693040620)) + 5362951154253909074))))) : 5197299955271375678));
        arr_10 [i_1] [i_1] = (-(((arr_1 [i_1] [i_1]) ? -4 : (arr_1 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = (((arr_13 [3] [7]) < ((((5610381692007217732 << (-3371932369088422439 + 3371932369088422484)))))));
        var_24 ^= (min((max(((min(var_0, -1))), (((arr_6 [i_2]) ? var_0 : 18302257018995438578)))), ((((arr_2 [i_2]) << (((((arr_3 [4]) + 825318774)) - 31)))))));
        var_25 = ((!(((arr_11 [i_2]) && var_0))));
        var_26 = (min(var_17, (!13)));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_17 [1] [i_3] = (!-3833701249693040631);
        var_27 = min(-var_9, (((-1918192374 ? (arr_7 [i_3]) : 8804803054023367346))));
    }
    var_28 = var_2;
    #pragma endscop
}
