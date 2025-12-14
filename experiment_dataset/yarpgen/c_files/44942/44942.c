/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_16;
    var_19 ^= ((-23522 * ((var_11 ? 52383 : var_17))));
    var_20 = (~var_17);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_21 ^= 18;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_0] = (arr_1 [5] [i_0]);
            var_22 = (max(var_22, ((min((((52387 ? 723966778 : 0))), (((~var_3) >> (((~var_1) - 983559726)))))))));
            arr_5 [i_1 - 1] = (max((((((13149 ? 18 : -112111259))) ? ((max(var_3, 52387))) : (((arr_1 [i_0] [i_1]) ^ -7)))), (arr_1 [i_0] [i_0])));
            var_23 = ((-(52391 || -88)));
        }
        arr_6 [i_0] = (~((-((var_1 / (arr_0 [i_0]))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                {
                    var_24 = (max(var_24, ((((arr_3 [i_4 - 1] [i_3 + 1]) * (!52411))))));
                    arr_17 [7] [i_2] [i_3] = (min(((220 ? (min(var_7, 7470679190556006611)) : ((var_12 ? (arr_12 [i_3]) : var_4)))), 65535));
                    var_25 = 1953058443;
                }
            }
        }
        var_26 = (((((~(min(var_6, (arr_0 [i_2])))))) ? (arr_16 [i_2]) : (arr_12 [i_2])));
        var_27 ^= arr_8 [i_2];
        arr_18 [i_2] = ((-(((!(arr_0 [i_2]))))));
        arr_19 [i_2] = var_11;
    }
    #pragma endscop
}
