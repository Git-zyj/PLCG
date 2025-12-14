/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, var_0));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 -= ((-30 ^ (min(var_6, 21757))));

            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    var_15 ^= ((!(!21756)));
                    arr_10 [i_2] [i_2 - 1] [18] [i_2] [i_3] [i_2] = 19221;
                }
                var_16 = ((min((35 & -21757), -30)));
                arr_11 [i_0] [i_0] = ((-(9 / var_6)));
                var_17 = (max(var_17, (((1024589805 / (min(var_3, 21767)))))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_14 [i_0] [i_1] [i_4] = ((-((3136909160559598417 ? 255 : -2397752830104019764))));
                var_18 = (max(var_18, 9223372036854775807));
                arr_15 [i_1] &= 3684554709672718614;
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_19 |= var_5;
            var_20 ^= 1594367257;
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] |= -28;
        var_21 ^= (!3684554709672718593);
    }
    var_22 = (86 <= var_9);
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                var_23 = ((1594367261 != (--2700600039)));
                var_24 = ((((4294967282 ? (120 >= -1) : var_1))) ? (!168) : ((((var_10 + 9223372036854775807) >> (2700600039 - 2700600011)))));
                var_25 = var_4;
                var_26 = (max(var_26, var_8));
            }
        }
    }
    #pragma endscop
}
