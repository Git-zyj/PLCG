/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_4 ? var_3 : ((((var_5 ? 15410115454346393295 : var_16)) & (min(var_8, var_12)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((((min(460559556, var_11)) / (max(-30665, -460559578))))) ? (arr_3 [i_1]) : ((-(4 + 13570)))));
                var_20 = (max(((((min(8190, 244))) ? 127 : (var_0 ^ 0))), var_13));
                var_21 ^= ((!((max(var_7, 23)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_7 [i_2] = ((min((((20 ? 10 : 511))), (max(84, 14350334180067424869)))));
        var_22 *= min(var_13, 73);
        var_23 = 73;
        var_24 = ((!((max(((max(233, 16))), (max(-21119, 73)))))));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_25 = (((arr_4 [i_3 + 1]) > -16923182887496153567));
        var_26 = 12960;
        var_27 = (max(var_27, (~936886898)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_28 = (((-21119 > -2661) > -28730));
                    var_29 = var_8;
                    arr_16 [8] [8] = (((((-1745075325 < (arr_14 [i_5] [4] [i_3])))) > 20128));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = (!(((((max(7, 1192217184))) ^ (max(8796093022207, 80))))));
        var_30 = (max((((18446744073709551615 / 131) / 1745075304)), (((418995399 / (min(-11791, (arr_19 [i_6] [i_6]))))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_31 = var_12;
        var_32 = 239;
    }
    var_33 = (max(((min(var_17, ((var_15 ? -2661 : var_2))))), ((((min(-23657, 32767))) ? 9 : (max(2199023255520, var_7))))));
    #pragma endscop
}
