/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(248, (var_5 - 6896616388003264884));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = (((arr_1 [i_0] [i_0]) * ((((!(arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = (((((max((!-3703751732882054967), (arr_0 [i_0] [i_0]))))) <= ((6896616388003264884 % (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = -7;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_17 = (((arr_6 [i_2 + 1]) / ((((3703751732882054967 ? 7 : 14677))))));
                    arr_12 [i_2] [i_3] = (-(((11482 || 3720) ? var_4 : -1014120019065628345)));
                    var_18 = (max(var_18, -5055));
                    var_19 = (((6896616388003264870 ? 7507361282618936116 : -7405541824214590720)) * ((((9386 != (((-3799443728735792244 == (arr_9 [i_3] [i_2] [i_1])))))))));
                    var_20 = (max(var_20, -var_3));
                }
            }
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_21 *= 0;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_22 = ((~(((!((max((arr_14 [i_1] [i_5]), var_2))))))));
                        var_23 = (max(var_23, (((-((((max(3799443728735792246, -9160419680436376557))) ? (arr_18 [i_1] [i_4] [i_5] [i_5] [i_6]) : var_12)))))));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_23 [i_1] [i_4] [i_5] [i_6] [i_4] = max(((1125899839733760 / (arr_5 [i_5] [i_7]))), ((9 - (min(-1, var_6)))));
                            arr_24 [i_7] [i_4] [i_5] [i_4] [i_1] = (arr_1 [i_5] [i_6]);
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = var_12;
                        }
                        var_24 = (min(var_24, (max(31342, (min((arr_13 [i_5]), 18072))))));
                        arr_26 [i_1] [i_6] [i_1] [i_1] |= (arr_22 [i_6]);
                    }
                }
            }
        }
    }
    var_25 = ((var_13 - ((-3688029931970627244 ? var_12 : 1014120019065628339))));
    #pragma endscop
}
