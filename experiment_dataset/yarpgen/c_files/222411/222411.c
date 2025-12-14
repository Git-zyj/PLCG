/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 -= (arr_1 [i_0] [i_0]);
        var_17 = var_11;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_1] = ((-(arr_2 [i_2 + 3])));
            arr_9 [i_1] = ((((((arr_4 [i_1]) / (var_9 < var_15)))) ? (max(var_13, ((61 ? var_7 : (arr_5 [i_1] [i_1] [i_1]))))) : (max(var_12, 1))));
            var_18 = 26;
        }
        var_19 ^= -65534;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 = ((var_14 ? var_5 : ((((!((((arr_22 [i_7] [i_6] [i_5] [i_4] [i_3]) ? var_8 : var_13)))))))));
                                arr_23 [i_3] [i_3] [i_4] [i_3] [i_5] [i_4] = (((((-32766 ? (arr_15 [i_6 - 1] [i_5]) : 203))) ? 1751438714 : ((min(-32758, 0)))));
                            }
                        }
                    }
                }
                var_21 -= ((-((var_0 ? 4448223209463779620 : 128))));
            }
        }
    }
    var_22 = (max(((((min(1469819964771581889, 12462632407580976348))) ? (min(162, var_7)) : ((max(var_9, var_9))))), var_12));
    var_23 = ((((((((-2 ? 105 : 9))) ? 4611686001247518720 : (((max(64, 94))))))) ? (((max(var_0, var_10)) | var_13)) : ((max(548292757, var_7)))));
    #pragma endscop
}
