/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (-25 ? ((4294967295 ? 71 : 33554431)) : (!42278));
        arr_3 [i_0] [i_0] = (~96);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_1] = 1;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_16 = (max(var_16, (((-((9756517718155979857 ? -97 : 1)))))));
                            var_17 ^= -116;
                            var_18 = (!96);
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_19 ^= 0;
                            var_20 = -1;
                        }
                        arr_18 [i_3 + 1] [i_3 + 1] [7] [i_2 - 1] [i_0] [i_0] = (((!1) ? 2147467264 : 65535));
                        var_21 ^= 4294967295;
                        arr_19 [13] [11] [i_2] [13] [i_3] = 26;
                    }
                }
            }
            var_22 = ((4294967288 ? ((17384 ? 96 : -30622)) : 255));
            arr_20 [i_1] [i_0] = 4294967295;
        }
        var_23 = 49799;

        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_24 [3] [i_6] [i_0] = 1;
            var_24 = (max(var_24, 7599144377090694346));
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_25 *= -7599144377090694343;
            var_26 *= (((1513714260581087464 ? -2019002230270496097 : -108)));
        }
        for (int i_8 = 4; i_8 < 17;i_8 += 1)
        {
            var_27 = (max(var_27, (((9539 ? 9527 : (~5))))));
            arr_31 [1] = (--23734);
            var_28 = 1;
            var_29 = (min(var_29, (((4294967285 ? -96 : -8934231166505956149)))));
        }
    }
    var_30 ^= (((((-78 ? 55999 : 7))) ? -8934231166505956129 : 0));
    #pragma endscop
}
