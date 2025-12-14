/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 *= ((1917386683 ? -1092726509367702838 : -96));
        var_20 |= 13;
        var_21 = (((1092726509367702838 ? -6583 : 125)));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [22] = 2147483647;
            var_22 &= 1092726509367702837;
            var_23 = (min(var_23, 106));
            arr_5 [i_0] [i_1] = ((0 & ((-106 ? 64 : 122))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_24 = var_4;
                var_25 = -9130615326511046868;
            }
            arr_12 [i_2] [i_2] [i_2] = 110;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_26 = (!74);
            var_27 = (!-449976118904725829);
            var_28 = (max(var_28, 73));
        }

        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_29 = (min(var_29, 0));
            var_30 ^= -62;
            var_31 = 255;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_32 = 2147483647;
        var_33 = (~32767);
        arr_23 [i_6] = -112;
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_34 = 2147483647;
        arr_27 [i_7] = 13;
        var_35 = (!97);
    }
    var_36 = (-1 & 14588);
    #pragma endscop
}
