/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, ((((!128) & ((((1763123263 - var_3) && (((96 ? var_4 : 88)))))))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((((((max(4397912293376, var_6))) ? ((((arr_2 [i_0] [i_0] [i_0]) ? var_9 : var_8))) : (min(2531844032, 67))))) || ((min(-28652, ((76 | (arr_0 [i_0]))))))));
            arr_5 [i_0] [i_0] [i_0] = (max(((18446744073709551593 - (((189 * (arr_1 [i_0])))))), -765064170));
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                var_16 = (~-67108863);
                var_17 = (max(var_17, 11832735047164802030));
                arr_10 [i_2] = ((-((((max(168, 45951))) << 1))));

                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    var_18 = ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_4] [i_3 + 1] [i_2] [i_2] [i_0]) : var_12)) > ((((!(arr_11 [i_0] [i_0] [i_3] [i_4] [i_4]))))));
                    var_19 = ((((min((arr_0 [i_3 - 2]), -3584680560896192231))) || -7993287708753051449));
                    arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 56;
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 = var_11;
                            arr_22 [i_7] [i_2] [i_5] [i_2] [i_0] = (((((9223372036854775806 ? (~2530309531) : (16820 < 1323703172)))) | (max(((var_3 - (arr_11 [i_0] [i_2] [i_0] [i_6] [i_7]))), (((255 ? (arr_1 [i_0]) : var_2)))))));
                            var_21 = (min(var_21, ((((max((((arr_8 [i_5] [i_5] [i_0]) ? var_3 : (arr_3 [i_0] [i_0] [i_0]))), ((((arr_12 [i_0] [i_5] [i_5] [i_5]) ? (arr_1 [i_0]) : (arr_9 [i_0] [i_5] [i_5] [i_6])))))) - (!2530309531))))));
                            var_22 = ((~(~6)));
                            arr_23 [i_2] [i_2] = (((arr_18 [i_0] [i_0] [i_2] [i_0]) & 4294967295));
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_27 [i_0] [i_0] |= 0;
            var_23 = arr_17 [i_8] [i_0] [i_8] [i_8] [i_8] [i_0];
            var_24 = (77 | 1);
            var_25 = (min(var_25, (((var_13 - 46) ? (!1048575) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_26 = (max(var_26, ((((((arr_8 [i_0] [0] [i_8 - 1]) + 10484486277571806032)) * ((4294967287 ? (((arr_2 [i_0] [i_0] [i_0]) - 114)) : (1735254382860724289 / 58875))))))));
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                arr_34 [i_9] [i_10] = ((-16840 ? 32434 : 0));
                var_27 = ((var_4 ? 5551429 : ((~(!142)))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        {
                            var_28 -= (max(((!(~var_1))), (!93)));
                            arr_40 [i_9] = ((((-((var_11 ? var_4 : -94)))) <= ((-(46696 + var_6)))));
                            var_29 -= (max(var_14, 13757786814175822060));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
