/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((2451737627 % 1843229684) << (1 != 1843229664)));
        var_13 |= (-0 && 1);
        var_14 = ((0 << (0 && 9223372036854775807)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = ((-(-38 / 786432)));
        var_16 = (--15);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_17 ^= (-1 * 7387570784154045397);
        var_18 = (min((6 > -1599934073), (max(288195191779622912, 1576187155532999033))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_14 [i_3] [i_4] = -248;
            var_19 = (min(var_19, ((((17788 + 47743) != -9223372036854775805)))));
            var_20 *= ((-43 ^ (-23000 >= 30743)));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_21 = ((~(2199023255551 & 1843229664)));
            var_22 = 31845;
            var_23 = -1;
            var_24 = (max(var_24, 14343));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_25 = (255 * 0);
            var_26 *= (16 != 255);
            var_27 = ((1 - 11) & (~270582939648));

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                arr_24 [i_3] [i_6] [6] = (391569767779950024 != (255 != 4669760287295439159));
                var_28 = 125;
                arr_25 [i_7] |= (63830 && 60931);
            }
            var_29 = (min(var_29, (47747 / 1327700753)));
        }
        var_30 = (3142267327 / 19);
    }
    var_31 = (max(((var_5 & (632346918 & 33554431))), (min(var_4, (13901 & -1)))));
    #pragma endscop
}
