/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((-(!-1273167929359846669))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((~(((arr_0 [i_0]) & 18446744073709551615))));
        arr_3 [i_0] = (((((((max(var_1, 1810898330))) ? (~var_0) : 1736922530327210122))) ? ((min(var_7, var_2))) : (max((arr_0 [i_0]), var_3))));
        var_13 = (((124 ? -1121885196 : 1048448)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = 1220361141;
        var_15 = ((-512 ? (((((-94 ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (var_1 | 1) : 1)) : (((max((1179431332 < 12134273558940939565), 15))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_16 = (max((min(0, (max(15878, 8008770886962264775)))), (((((min(var_1, -15892))) ? (arr_0 [i_2]) : (~0))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [i_5] [i_4] [i_5 + 1] = (max((max((-6725741976368832992 - 19), -55)), ((((arr_16 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5]) ? 1588594232 : (arr_16 [i_5 + 2] [i_5 - 1] [i_5] [i_5] [i_5 - 2] [i_5 + 2]))))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_17 -= ((3623309442797683798 ? 1928158371 : ((38 ? 3 : (arr_5 [i_4])))));
                            var_18 = ((504403158265495552 < (~var_5)));
                            var_19 = 53;
                            var_20 = ((0 ? 4142326134 : 524529337));
                            var_21 = (!9223372036854775807);
                        }
                    }
                }
            }
        }
        arr_20 [i_2] [i_2] = ((18 & (!0)));
    }
    var_22 -= (!0);
    #pragma endscop
}
