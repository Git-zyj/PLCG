/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_17 = ((((((((-(arr_2 [i_0 - 1] [i_0])))) ? (!-28) : 9223372036854775778))) ? (((((arr_0 [i_0 + 2]) > 1)))) : (((arr_2 [i_0] [i_0]) % (((arr_0 [i_0]) >> (((arr_3 [i_0] [i_0]) - 12543))))))));
        var_18 = ((-(((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 + 3] [i_0 - 2]) : -805410082))));
    }
    var_19 -= ((((max((~-9223372036854775770), var_14))) ? ((max(((min(4, 199))), (max(10688, 1))))) : (((1 < 512) & 164))));
    var_20 = ((var_6 ? (var_5 != var_0) : 1));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_10 [i_1] = (16320 >= 1);
                arr_11 [i_1] [i_1] [i_2] = ((-25 ^ ((((min((-127 - 1), var_15))) ? ((4667496218964466230 ? 1058094683 : var_8)) : -65535))));
                var_21 &= ((((((arr_8 [i_2] [1] [i_1]) & (arr_4 [i_1] [18])))) ? (((0 ? 36 : (arr_7 [i_1] [i_2] [16])))) : (~0)));
                var_22 += (((((-var_9 ? (18446744073709551612 | 1) : 15229))) ? ((-((7 ? 28095 : -4186361724024926717)))) : ((max((((arr_9 [8]) % var_7)), (((arr_8 [i_1] [4] [i_2]) % -2)))))));
                arr_12 [8] |= ((((((var_3 << (1901659109786185846 - 1901659109786185845))))) ? ((((((((arr_4 [i_1] [1]) >> (-910 + 915)))) > (arr_4 [16] [16]))))) : (((13 ? 7 : 5)))));
            }
        }
    }
    #pragma endscop
}
