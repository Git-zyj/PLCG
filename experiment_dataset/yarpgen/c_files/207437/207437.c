/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_16 &= max((((var_4 >> ((((-2147483644 ? 92 : 525952051175066326)) - 75))))), (min((min(144114913197948928, var_8)), (144 ^ 168))));
        var_17 -= (((116 && (((9223372036854775807 | (arr_0 [i_0])))))));
        var_18 |= (min((((~(max(var_5, 827806865))))), ((((((arr_1 [22] [8]) % (arr_1 [20] [i_0])))) * (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_14 [i_3] [i_0] [i_0] [i_0] = ((!(arr_4 [i_2 - 1] [i_0] [i_2 + 2])));
                        arr_15 [i_0] [i_2] [i_1] [i_1] [i_0] = (var_3 || var_8);
                    }
                    var_19 = ((((arr_5 [i_0] [i_0 + 1] [i_2 - 2]) == var_0)));
                    var_20 = ((-61841963145739529 || (((((min((arr_1 [i_0] [i_1]), var_2))) ? (max(-5315216149898930435, -827806878)) : ((max(var_0, (arr_13 [i_0] [i_0] [i_0])))))))));
                    var_21 &= ((((min((arr_8 [i_1]), ((min(var_0, 140)))))) ? (max((var_13 <= -827806894), 827806868)) : (((max(var_12, var_2))))));
                    var_22 = (((-9223372036854775807 - 1) != 51));
                }
            }
        }
        var_23 = (max(var_23, (~133)));
    }
    var_24 &= ((!((max(var_10, (var_12 != var_2))))));
    #pragma endscop
}
