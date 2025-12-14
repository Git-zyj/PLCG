/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] = (((var_9 + var_1) ? ((-32754 ? -701771875129857811 : (arr_3 [i_0] [i_1] [i_2]))) : (((var_9 ? (arr_6 [i_0] [i_1] [i_2]) : (arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (701771875129857811 * -1);
                                var_16 = ((!(arr_9 [i_0] [i_3 + 1] [i_2] [i_0] [i_4])));
                                var_17 = (--3889);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (max(var_18, ((((arr_2 [i_5]) < 0)))));
                        arr_18 [i_5] [i_0] [i_1] [i_0] [i_0] = (arr_5 [i_5] [i_2] [i_1] [i_0]);
                    }
                    var_19 |= 10044;
                }
                var_20 = 6189460214272348801;

                /* vectorizable */
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    var_21 = ((arr_3 [i_0] [i_6 - 1] [i_6]) & (arr_3 [i_0] [i_6 - 1] [i_6]));
                    var_22 = ((1 ? -701771875129857811 : ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < var_8)))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = (max(var_23, -124));
                    arr_24 [i_0] = var_14;
                }
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    var_24 = ((-((((((arr_9 [i_0] [i_0] [i_1] [i_0] [i_8]) ? 24322 : (arr_6 [i_0] [i_1] [i_8])))) ? (((arr_12 [i_8] [i_0] [i_1] [i_0] [i_0]) ? -2147735946923067742 : 1695408892)) : 1146423798))));
                    var_25 = (min((((arr_14 [i_0] [i_8 - 2] [i_8 + 1]) & (arr_19 [i_0] [i_1] [i_8]))), ((-0 & (var_11 > 64512)))));
                }
                var_26 = (min((-94 & 12005), var_13));

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_30 [i_0] [i_1] [i_9] [i_9] = (min((arr_14 [i_0] [i_1] [i_9]), ((((arr_2 [i_0]) ^ ((~(arr_21 [i_0] [i_0]))))))));
                    arr_31 [i_0] [i_0] = (min((((((min(1, (arr_23 [i_1])))) ? (((min(-32742, -1)))) : 13))), (min((((arr_10 [i_0] [i_0] [i_1] [i_9]) ^ var_5)), 1))));
                    var_27 |= (arr_28 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_28 = (min((((((min(243, 1))) ? ((min(1, 3890))) : -57))), ((-5222038703097707780 ? 1 : -3582903129413478309))));
    #pragma endscop
}
