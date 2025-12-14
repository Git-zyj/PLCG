/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!var_10) ? ((~((0 ? 18446744073709551615 : 240)))) : var_1));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 -= 252;

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_17 += (!2147483647);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_18 = ((((0 ? (!var_10) : (10 <= var_6))) | (((!(!260))))));
                            var_19 += 2147483647;
                            arr_10 [i_0] [i_1] [i_0] [i_0] [i_4] = (96 != 5777119109921075374);
                            arr_11 [i_3] = ((((((-2147483647 - 1) / var_10))) ? -1 : (!240)));
                            var_20 = var_5;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, (!1023)));
                            var_22 = ((-(max(3440423373, 255))));
                            var_23 -= ((167 ? 74 : -77));
                            var_24 = (min(var_24, ((((-2147483647 - 1) > (var_0 - var_10))))));
                            var_25 = (max(((~(!1))), ((var_5 ? 64607 : 392182254))));
                        }
                    }
                }
            }
            var_26 -= (12669624963788476241 | (((((2147483647 ? 44419 : var_5))))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        arr_24 [i_9 + 1] = ((var_11 ? 1362860705 : 5777119109921075374));
        arr_25 [i_9 + 1] = (var_10 + 15550907069539537496);
        var_27 = (((-859905192 ? -1 : -392182254)));
    }
    var_28 = ((!((!(((15550907069539537489 ? 27179 : 32752)))))));
    #pragma endscop
}
