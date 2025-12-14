/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min((var_10 >= var_9), -11738)));
    var_15 = 0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((max(31302, ((31302 ? var_9 : 1)))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_17 = -1083039538;
            var_18 = var_2;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_2] = ((5161 - -31302) + (31298 + 41345));
                arr_8 [i_0] [i_1 - 1] = var_0;
                arr_9 [i_2] [i_2] [i_1 - 2] [i_0] = 31322;
                arr_10 [i_0] [i_1] [i_2] = (~var_5);
                arr_11 [i_2] [i_1] [i_0] [i_0] = ((43310 ? (12002353852253548771 >> var_0) : (!var_9)));
            }
            for (int i_3 = 4; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_1 + 2] [i_1] [i_3] = ((((var_7 ? 198 : var_3)) ^ 14));
                arr_16 [i_0] [i_1] [i_3] = ((var_3 ? -var_9 : 0));
                var_19 = ((~(~-92)));
            }
            for (int i_4 = 4; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_20 = -92;
                arr_20 [i_0] [i_1] = var_2;
            }
            var_21 = (((-25111 * var_8) | -31302));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_22 = ((0 ? var_9 : (86 * var_0)));
                var_23 = (-31271 < -1343750263);
                arr_25 [i_5] [i_1 + 2] [i_1] [i_0] = (262143 * var_3);
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_24 = var_13;

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_30 [i_0] [i_1] [i_6] [i_7] [i_7] = ((-(31 != 84)));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_6] = (var_8 - 3019529140);
                        arr_35 [i_0] [i_1] [i_6] [i_6] [i_7] [i_8] = ((1 ? 1136643600 : (72 * -6512)));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_39 [i_9] = 3019529113;
                        arr_40 [i_0] = (!1025745519);
                        var_25 = 3444743407;
                        var_26 = ((115 ? var_4 : 80));
                        var_27 = 15;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = (-6 >= var_2);
                        var_28 = ((-3 ? -3075 : 42));
                        var_29 = var_10;
                        arr_46 [i_1 - 2] [i_1] [i_1] [i_1] [i_1] = (((19 ? 21053 : 2097120)));
                        arr_47 [i_10] [i_7] [i_1 + 2] = var_4;
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_30 = 10779715889775027419;
                        var_31 = var_0;
                    }
                    var_32 = ((-2147483647 - (13 - 4294967279)));
                }
            }
        }
        arr_50 [i_0] = -423850114;
        var_33 = (-42 + 1);
    }
    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        var_34 = ((min(124, -12)));
        var_35 = max((31298 ^ var_6), 20027);
        var_36 = var_6;
        var_37 = ((((max(1, ((-3 ? 38103 : var_0))))) ? ((-(-92 && 1704867575))) : (~var_1)));
    }
    #pragma endscop
}
