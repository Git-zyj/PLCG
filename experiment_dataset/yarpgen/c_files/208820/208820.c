/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = (((166 ? 67 : 4294967294)));
        var_21 *= 67;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = -68;
                    var_23 += ((35 ? 67 : 4200651727));
                    arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 2] = (52 / 18831);
                    var_24 = ((var_13 * ((221 ? (arr_1 [i_0]) : -100))));
                }
            }
        }
        arr_7 [12] |= ((!(arr_1 [16])));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_25 = (-5687329418260813730 / 5687329418260813713);
        var_26 = (min(var_26, 53269));
        var_27 = (max(var_27, ((min((((arr_2 [16] [i_3] [16]) ? 221 : 52)), (((153 % -5687329418260813713) ? 33 : var_6)))))));
    }
    var_28 = ((-26516 * ((var_12 ? var_17 : (min(0, -1757880266648754777))))));
    var_29 |= ((((((((94315562 ? var_14 : var_16))) ? var_16 : var_10))) ? -var_11 : ((var_2 ? (((var_4 ? var_10 : 4200651733))) : ((-21703 ? 4253382037428444028 : 250))))));
    var_30 = ((254912844 ? (1545130122 / 4200651733) : var_3));
    #pragma endscop
}
