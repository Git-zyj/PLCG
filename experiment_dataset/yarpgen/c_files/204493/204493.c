/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_5);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_11 = (!10186495143966598961);
            arr_6 [i_1] = (~10186495143966598961);
        }
        arr_7 [i_0] = (max((max(8260248929742952654, (!12202955759194031723))), ((~(min(12202955759194031700, 1))))));
        arr_8 [i_0] = 1;

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_12 = (((~-8) << ((((max(1, 10186495143966598961)) <= (((max(-122, 1)))))))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_13 = (((~1) ? ((12202955759194031723 ? 1 : 1)) : (1 | -24)));
                    arr_19 [i_4 + 2] [i_2] = (!((!(~1))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    arr_24 [i_2] = 18446744073709551601;
                    var_14 += ((1 ? -1 : 123));
                    var_15 |= (!-31);

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_27 [i_0] [i_2] [i_6] = (!1);
                        var_16 = (max(var_16, (!10186495143966598963)));
                    }
                }
                var_17 = ((12202955759194031703 % 4496476591373411594) >> (((-124 | -127) + 182)));
                var_18 = (!(~17639959065332372699));
                arr_28 [i_0] [i_2] [i_3] [i_2] = (max(-100, 0));
            }
        }
        var_19 = 13;
    }
    #pragma endscop
}
