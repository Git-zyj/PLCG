/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 1152921504606846976;
    var_21 = var_5;
    var_22 = (((var_18 ? 1152921504606846976 : (((var_4 ? 255 : 58279))))));
    var_23 = (min(var_23, var_18));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_24 = ((((arr_6 [i_3] [i_3 - 2] [i_2] [16]) ? var_0 : (arr_6 [i_3] [i_3 - 2] [i_2] [i_3]))));
                        var_25 = 1152921504606846976;
                    }
                }
            }
            var_26 = (arr_7 [10] [i_1] [i_1]);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_14 [10] [i_0] = ((30720 ? 32757 : ((-1152921504606846977 ? 139 : 56712))));
            arr_15 [i_0] [i_0] [i_0] = -50;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_27 = (min(var_27, ((((arr_19 [i_0] [i_5 - 1] [i_6] [i_6] [i_6] [i_6]) ? (arr_19 [i_0] [i_4] [i_4] [i_6] [i_6] [i_0]) : ((4260239459 ? var_13 : var_16)))))));
                        var_28 = ((((arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]) ? var_4 : (arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]))));
                        var_29 = 0;
                    }
                }
            }
            var_30 = (max(var_30, (arr_6 [i_0] [i_0] [i_0] [12])));
        }
        var_31 = var_6;
        var_32 = ((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : 1))) ? 551141377 : 34727824));
    }
    #pragma endscop
}
