/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((~240), (var_8 | 16));
    var_21 *= (max((max((~-920034207), 76)), (~var_1)));
    var_22 |= ((240 ? (max(((max(16383, 0))), (var_18 | -472583772175210968))) : (max(((min(var_6, var_7))), -3071454615070009021))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_23 = (((min((((arr_1 [i_0]) ? (arr_0 [9]) : (arr_1 [4]))), (arr_0 [i_0]))) * (var_17 % var_1)));
        arr_2 [7] = ((arr_0 [i_0]) % -920034207);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [6] = ((+(min((arr_0 [i_1]), (arr_0 [i_1])))));
        var_24 = (((arr_4 [1]) | (min(1, 268369920))));
        var_25 -= (arr_0 [1]);
        var_26 |= (((((1 | -1) ? (var_9 | var_8) : ((var_5 / (arr_0 [8]))))) % 4294950912));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_27 &= 7;
                    var_28 &= (max((arr_4 [1]), (((~0) / ((min((arr_11 [6] [1] [i_1]), 23)))))));
                    var_29 = ((((((!(((~(arr_3 [6])))))))) | (max(16, ((min(var_3, 0)))))));
                }
            }
        }
    }
    #pragma endscop
}
