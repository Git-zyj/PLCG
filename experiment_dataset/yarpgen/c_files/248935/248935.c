/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max(-2624927093340845185, (~var_17))), ((((var_16 ? var_3 : var_15))))));
    var_19 = ((var_11 ? (min((!var_15), var_6)) : ((min(-73, 393959670)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_20 *= 1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 = (((-17543 * -1) ? var_0 : var_10));

                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_3] [i_4] = ((3225374261 << (((~205329216) - 4089638056))));
                            var_22 = -1;
                            arr_14 [i_0] [i_0] [i_0] [8] [i_0] &= var_12;
                        }
                        var_23 += ((var_6 ? var_15 : var_10));
                    }
                }
            }
        }
        var_24 = ((var_2 % ((((min(1, 63488))) ? var_12 : (max(-1, 2574447385))))));

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [4] = min(((min((1720519918 || var_1), ((var_11 ? var_13 : var_16))))), (3513259598 & var_10));
            var_25 |= (4089638079 | 705058548);
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_26 = ((~(min(1112154360, var_7))));
            arr_22 [i_0] [i_0] [i_0] = var_3;
            var_27 = (((((((min(var_4, var_4))) ? var_11 : (var_11 && 205329242)))) ? (min(var_6, var_6)) : var_6));
        }
        arr_23 [i_0] = ((!((max(var_14, -1)))));
    }
    var_28 = ((!((max(var_15, ((396318248 ? 2574447378 : var_15)))))));
    #pragma endscop
}
