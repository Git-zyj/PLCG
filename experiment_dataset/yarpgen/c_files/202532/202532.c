/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((max((min(14368762730737944156, var_5)), ((-114 ? var_2 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_16 -= ((123 ? 2383632052 : (((min(1, 12396))))));
                var_17 = (max(var_17, ((((-114 + 2147483647) << ((((((~(12404 >= var_3))) + 19)) - 18)))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_18 = (((~16) << (-112 && -8)));
                        arr_9 [i_1 + 3] [i_1] [4] |= ((((-124 ? 1 : 16)) % 1));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_0] [i_2] [i_1 + 1] [i_0] [i_0] = 8;
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((0 ? 1 : (1629972754 / -103)));
                        var_19 = (((23334 + -126) ? 924955219 : ((0 ? var_0 : -23057))));
                        var_20 = (-32767 - 1);
                    }

                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_5] [i_0] [i_1] [i_0] [i_0] = (((75 ? var_5 : (arr_12 [i_5] [i_0]))));
                        var_21 = ((-((98 ? -23085 : (arr_8 [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        var_22 ^= (((~1) ? 8403305874240041513 : (arr_16 [i_0] [i_0 - 1] [i_0 - 3] [i_1 + 1])));
                        var_23 = (((17608597850054340450 > -6) >> (var_0 - 74)));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_25 [10] [i_0] [i_0 - 3] [1] = -9866533091182305901;
                        var_24 = (arr_0 [i_0 - 3]);
                        var_25 = (min(var_25, (((!(arr_5 [i_0] [i_0] [i_0 - 1] [i_2]))))));
                    }
                    var_26 *= var_3;
                    arr_26 [i_0] [1] [i_0] = (((((559375221 ? var_11 : var_12))) ? var_13 : ((248 ? 1 : 10329544727243891225))));
                }
            }
        }
    }
    #pragma endscop
}
