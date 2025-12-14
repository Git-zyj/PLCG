/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 &= var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 ^= var_8;
        var_16 = (min(var_16, ((min(1125899898454016, 1492179445873328026)))));
        arr_2 [i_0] = ((((min(42, (((arr_1 [i_0]) ? -35 : -25))))) ? ((~(~25))) : 209));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_17 = (max(var_17, (arr_6 [i_1] [i_2 + 1])));
            var_18 = (max(var_18, (((((min((((-43 ? var_7 : var_6))), (min(3688355123945699054, 12212046208990942953))))) ? (!0) : (((!((!(arr_8 [1] [1] [i_1])))))))))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_1] = 36064;
            var_19 |= ((1 ? 1065151889408 : ((((((arr_10 [i_3] [i_1] [i_1]) ? (arr_3 [i_1]) : var_11)))))));
            var_20 ^= (((((var_10 ? (~-3688355123945699054) : 93))) ? 14 : 118));
        }
        var_21 = (max(var_21, ((((arr_3 [i_1]) ? (arr_8 [i_1] [i_1] [9]) : (((((var_8 ? 1273128113032248973 : 1))) ? (((min(-43, 6)))) : (((arr_9 [6]) ? 6263346233277827414 : 3688355123945699054)))))))));
        var_22 = (min(var_22, -96));
        var_23 = (min(var_23, ((max(28, ((max(((3224308999882278450 ? 0 : var_6)), var_0))))))));
        var_24 |= ((((arr_4 [0] [i_1]) <= (((!(arr_3 [i_1])))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_25 ^= -57;
        arr_16 [0] [0] &= (min(((max(((var_6 ? 63 : var_5)), -43))), (max((0 | 1545209855), (arr_15 [2] [2])))));
    }
    var_26 -= max((((var_6 ? var_11 : -3688355123945699054))), (((55139 ? var_12 : 90))));
    #pragma endscop
}
