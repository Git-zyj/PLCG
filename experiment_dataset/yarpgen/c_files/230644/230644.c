/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_4 ? var_13 : 1465654310))) ? (var_8 && 84) : (var_17 && var_6)))) ? (((-84 + 2147483647) >> (-var_10 + 7550766066591228108))) : (~-95)));
    var_20 = (max(var_20, (((((((160 ? var_9 : var_1)) <= ((16867 ? -27007 : var_6)))) ? ((((var_2 ? var_8 : 32659)))) : ((((var_5 ? var_16 : var_16)) * -0)))))));
    var_21 = (((((((-59 ? 21730 : 1707933305))) ? (!95) : var_6))) ? (((((-1898868582 ? 21733 : var_5))) ? (!10941) : ((var_8 ? var_2 : var_15)))) : (((var_15 ^ var_18) ? ((var_13 ? 127 : var_1)) : ((4361405665304845134 ? var_8 : var_15)))));
    var_22 += ((-((9 ? (117 || var_18) : ((var_6 ? var_17 : -760900739))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] = ((-(arr_0 [i_1])));
                    var_23 = ((+((((var_8 ? (arr_0 [9]) : (arr_5 [i_0] [i_1]))) | (((117 - (arr_2 [i_0] [i_1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
