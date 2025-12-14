/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (((((var_5 | (((var_14 ? 21 : 235)))))) ? var_15 : var_3));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 ^= var_13;
        var_20 ^= ((((max((235 >> 0), var_2))) | (max(((((arr_1 [i_0] [i_0]) ? var_3 : 21))), 2617525499))));
        var_21 -= var_12;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_22 *= ((var_8 == (max(var_6, var_15))));
                        var_23 = (((((-((0 >> (var_13 - 112)))))) ? (var_3 != var_5) : 252));
                        var_24 = (min(var_24, var_13));
                        arr_12 [i_0] [i_0] [8] [5] |= ((var_16 ? (!var_2) : var_5));
                        var_25 ^= (((((var_6 ? (arr_1 [1] [i_1 + 2]) : var_10))) ? ((var_15 ? (arr_1 [i_0] [i_1 - 2]) : 94535337)) : 23005));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        arr_17 [i_4] [14] = (((((((10176521278926371769 ? 21 : (arr_13 [i_4])))) <= ((21 ? 2617525495 : 0)))) ? (var_16 % var_8) : (((~(-32767 - 1))))));
        var_26 ^= (((((38 >> (2675308690 - 2675308666)))) == (((arr_15 [i_4 - 1]) ^ (arr_16 [i_4])))));
    }
    #pragma endscop
}
