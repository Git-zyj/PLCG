/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((16116203765785227612 ? 133 : 32));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 404273569248731593;
        arr_4 [10] [i_0] = ((!(~2250048985)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_21 &= (((var_13 - var_16) && ((((2250049006 | 2044918320) ? (var_14 & var_10) : (arr_2 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_13 [14] [14] [i_2] = 5113590357765753973;
                        arr_14 [i_2] [i_2] [i_3] [10] [10] = var_18;
                        var_22 = ((var_10 ? (~13333153715943797637) : (-8998907261529108921 < 65535)));
                        arr_15 [i_1] [i_2 - 3] [i_3] [0] [i_2] = ((var_9 ? 4294967295 : (min((var_5 / 2250048985), (-29004 / 4911544206546043724)))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = var_7;
                        var_23 = (min(((((((arr_18 [i_5] [i_5]) ? (arr_12 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6]) : 1))) ? (arr_25 [i_8 + 1] [i_5] [i_5] [i_8 + 1]) : (2714922532 && var_2))), (((!((((arr_5 [i_6]) % (arr_0 [i_6])))))))));
                        var_24 = (min(((-(arr_1 [i_8 - 1]))), (-5761171293703715001 || 2228023445)));
                    }
                }
            }
        }
        var_25 = (min(var_25, ((((!0) || (((arr_26 [i_5] [i_5] [4] [i_5] [i_5] [i_5]) <= (2066943850 % 12521))))))));
        arr_28 [16] &= 0;
        var_26 = ((14022 ? 65532 : 2199023255552));
    }
    #pragma endscop
}
