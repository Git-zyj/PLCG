/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (min((((((-9223372036854775807 - 1) != var_14)))), (max(12698704553446434227, (-9223372036854775807 - 1)))));
                    var_16 = var_3;
                }
            }
        }
    }
    var_17 = (-30272 * 43795);
    var_18 = ((-9223372036854775807 - 1) ? 5748039520263117377 : 183);

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_19 = ((((2804496004620829236 > (37426 && 235))) || ((max(-1676556941798026260, 8382026172037687311)))));
        var_20 = (min(((((min(var_10, var_9))) ? ((-109 ? var_4 : var_6)) : (((18446744073709551615 ? var_13 : -3734005245142282791))))), ((-((2270556462198874602 ? var_3 : 2804496004620829236))))));
        var_21 = ((var_4 ? ((((183 > (-9223372036854775807 - 1))) ? var_4 : var_13)) : (((5784795258609696797 + (44695 || var_11))))));
        var_22 -= var_7;
    }
    #pragma endscop
}
