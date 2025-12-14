/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, -142));
    var_21 = var_15;
    var_22 -= ((-(((var_8 ^ var_14) ? 18303903283049485439 : var_11))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = -var_4;
        var_24 = (((-(-17658 < 5458622450763002960))));
        var_25 -= (306857086 ? var_14 : var_12);
        var_26 = (max(var_26, var_8));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_4 [i_1] = (min(145, ((67076096 * (min(var_12, var_18))))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_27 &= (-2147483647 - 1);
                        var_28 = (max(var_28, (((!(((max((-2147483647 - 1), (arr_8 [i_4]))) < var_11)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_29 = (max(var_29, ((((((65535 + (109 & var_19)))) ? -2147483633 : 145)))));
                    var_30 -= (!145);
                }
            }
        }
        var_31 = var_18;
    }
    #pragma endscop
}
