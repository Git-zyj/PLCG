/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (!(((48 ? ((378506388 ? 18323385255731384314 : 1241646136310720759)) : 18323385255731384315))));
                var_14 = (max(var_14, (((((((((3916460899 ? 4275154405 : 1326))) ? ((378506388 ? 13752727225561491056 : 378506388)) : (((4694016848148060570 ? 378506388 : var_9)))))) ? (((~((var_5 ? var_1 : var_8))))) : 1327021706)))));

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_15 = ((-((var_5 ? ((223 ? -50 : var_9)) : 223))));
                    arr_7 [6] [12] [4] = (((((var_8 ? ((var_5 ? 576460752303423487 : var_0)) : (((26773 ? var_6 : 5)))))) ? ((-96 ? ((var_1 ? var_8 : -11896)) : ((123358817978167301 ? -657218256 : 160)))) : ((46983 ? 56 : (!7086568215387711875)))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_16 = ((~((var_1 ? 147 : var_11))));

        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_17 = var_8;
            var_18 &= (((((var_8 ? 1 : 15699825288549747148))) ? 1 : ((var_9 ? var_10 : var_10))));
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_19 = (((var_1 ? 109 : 667513114568738011)));
            var_20 = var_5;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_22 [i_7] = 203;
                        var_21 = ((var_11 ? ((160 ? 1699685311 : var_11)) : var_0));
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_22 = (((((var_9 ? var_2 : var_2))) ? (!-15) : var_7));
            var_23 = 4294967295;
        }
    }
    for (int i_9 = 4; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_24 = ((160 ? ((((65535 ? 65535 : 1)))) : 20585));
        arr_29 [i_9 - 2] = (((((255 ? ((199 ? 13752727225561491056 : 163)) : ((var_7 ? var_2 : 32551))))) ? -140737488355327 : (((var_2 ? 2777226788 : -110)))));
        var_25 = ((((var_3 ? 265487552 : var_6))));
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 24;i_10 += 1) /* same iter space */
    {
        arr_33 [2] = ((!(((var_8 ? var_10 : var_10)))));

        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            var_26 = (131071 ? 3906704088 : -8);
            var_27 |= (((((9223372036854775807 ? var_1 : var_8))) ? -1 : ((var_4 ? 127 : var_0))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_47 [i_10] [i_11] [i_11] &= 275486590;
                            var_28 = (((((172 ? var_1 : 20))) ? ((378506388 ? 1073741823 : 2903464426)) : (((var_1 ? var_4 : var_10)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 4; i_15 < 24;i_15 += 1) /* same iter space */
    {
        var_29 = ((var_10 ? ((var_10 ? var_2 : ((131072 ? var_3 : 40778)))) : ((((var_6 ? var_4 : -8815758724544671850))))));

        for (int i_16 = 3; i_16 < 24;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 24;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 23;i_19 += 1)
                    {
                        {
                            var_30 = var_10;
                            var_31 = 67108863;
                        }
                    }
                }
            }
            arr_62 [i_16] = (((~var_4) ? -131070 : ((112 ? var_8 : -var_7))));
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 2; i_20 < 10;i_20 += 1)
    {
        for (int i_21 = 4; i_21 < 10;i_21 += 1)
        {
            {
                var_32 -= 6;
                var_33 *= ((-(((!(((16460822284434422111 ? 131071 : var_6))))))));
                arr_70 [i_20] [i_21] = ((((12448703046405958449 ? var_5 : 3))));
            }
        }
    }
    #pragma endscop
}
