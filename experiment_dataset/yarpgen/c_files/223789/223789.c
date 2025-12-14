/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((12364854201955992551 ? var_12 : var_2)));
        var_14 *= (((var_8 >= 1) << (((~var_12) - 2963503440175473841))));
        var_15 = ((-901974638653208985 ? -556896205 : 1));
        arr_2 [i_0] = (0 % 12043845496951995164);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (1 / var_4);
                        var_17 = (max(var_17, ((((0 + var_10) ? var_0 : (-5923 - 15964))))));
                        var_18 = var_0;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        arr_13 [11] [4] = (((1 || 1) ? (!79) : ((45648 ? var_7 : var_11))));
        arr_14 [i_4] = (((var_12 && 1853604837) < ((9009118745608965558 ? 10 : 945164656))));
        arr_15 [i_4] = ((((1 ? 1 : var_9)) >= var_11));
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_19 |= (((((0 | var_0) % var_1)) & (1 * 17)));
        arr_20 [12] = var_3;
        arr_21 [i_5] = 0;
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        var_20 = (max(var_20, (((!(((var_5 ? 1264659538 : var_8))))))));
        arr_24 [i_6] [i_6] |= ((-(4294967295 * -12)));
    }
    var_21 = (var_7 ^ var_12);
    #pragma endscop
}
