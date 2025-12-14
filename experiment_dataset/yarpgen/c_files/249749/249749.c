/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (~29075);
    var_17 = (-2147483647 - 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = 200;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 -= (((140737488355327 ? 36066 : 247)));
                        var_19 = 97;

                        for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_4] [i_1] [i_1 - 1] [i_2] = ((36056 ? 1 : 56164));
                            var_20 ^= (min((((2147483619 ? 1 : 254))), 4294967292));
                        }
                        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_21 = 255;
                            var_22 &= 29464;
                            var_23 *= 65510;
                        }
                        for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_24 = 0;
                            var_25 = -9;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = ((4026531840 ? ((~(!81013363))) : ((1 ? 254 : -20738))));
                            var_27 = (min(var_27, ((max(11044203321319032789, 189)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            arr_28 [8] = (max(((18446744073709551615 ? 100 : ((93 ? 51 : 140737488355327)))), (min(13654, 18446744073709551610))));
            arr_29 [i_0] [i_0] = 1;
            var_28 = (max(var_28, ((29449 ? -1 : -8))));
            var_29 = ((~(max(((18446744073709551614 ? 1191864191444123614 : -1970941987)), ((1 ? 17254879882265427972 : 232))))));
            var_30 ^= ((((min(((36054 ? 1 : 79)), 127))) ? (min(-2116962512, ((5 ? 30961 : 0)))) : (max(-72, ((14941505868447102384 ? 41 : 4088))))));
        }
        var_31 = 1;
        var_32 = (max(var_32, ((max(183, 81013362)))));
        var_33 = (min((max(-2096878882, (max(-602700810, -5)))), (!1017609928)));
        var_34 -= (max(1, (~-12341)));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] = (max(((2260 ? 4351448559590508922 : 0)), (((-602700816 ? 1 : 59866)))));
        var_35 = 71;
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_36 &= -1763003803;
        arr_35 [i_10] &= -12354;
        var_37 = ((((max(-14694, 17834))) ? 1333850551 : ((18446744073709551614 ? 240 : -108))));
    }
    var_38 = max(var_13, -var_6);
    #pragma endscop
}
