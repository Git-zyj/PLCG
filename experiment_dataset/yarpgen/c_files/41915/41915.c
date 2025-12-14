/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((((~6250) ? ((0 ? var_3 : -25745)) : (~134216704)))) ? (min((((-1520127308828679863 ? 18 : 114))), -1)) : 6250)))));
    var_19 = (~-116);
    var_20 &= ((max(1, (((17427340640059652577 ? 6250 : -25753))))));
    var_21 = (max(var_21, 115));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] = var_1;
            arr_5 [i_0 - 1] [i_0] = (min((((2074 ? 1 : (~var_14)))), ((~((2074 ? -9138226841533777587 : 63484))))));

            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                arr_10 [11] [7] [i_0] [1] = 127;
                var_22 |= var_12;
                arr_11 [i_1] [i_1] |= -var_1;
            }
            var_23 = (((~((var_4 ? -114 : -122)))));
        }
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            var_24 = (min(var_24, 1));
            var_25 = (max((((~1) ? 126 : (~var_6))), ((min(var_8, var_8)))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_0] [i_0] = max((~var_3), 1);
            arr_17 [i_0] [9] = (!27);
            var_26 *= ((~((((max(2099, 7734480380732314452))) ? var_12 : (~var_10)))));
            var_27 = (min(var_27, 235092064));
            var_28 = var_1;
        }
        for (int i_5 = 4; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                var_29 = -7;
                arr_25 [i_0 - 1] [i_0] = var_12;
            }
            var_30 = 125;
        }
        arr_26 [i_0] = (~(~var_1));
        var_31 = 2069;
        var_32 = (((~1) ? (~var_16) : ((((7451 ? 12347 : 47))))));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_33 *= (!2051);
        arr_29 [6] &= 2291954914;
    }
    #pragma endscop
}
