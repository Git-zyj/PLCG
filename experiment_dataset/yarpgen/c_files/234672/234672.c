/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (min(var_13, 9223372036854775786));
        var_14 |= 0;
        var_15 = (max(var_15, ((((255 > 1) ? var_0 : ((+(((-2147483647 - 1) / 1)))))))));
        var_16 += 1;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = ((((max((max(-9133316945815000773, (arr_3 [18] [i_1 + 1]))), 254))) ? (((~((1073741824 ? var_1 : var_7))))) : (max(-var_11, 242))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_14 [15] [i_2] [i_3] [i_4 + 2] [i_4 + 2] [i_1] = (arr_9 [i_1 - 1] [i_4 - 1] [i_1 + 1] [i_1 - 1]);
                                var_18 = (max(var_18, var_6));
                                var_19 = ((1 ? (arr_8 [i_1] [i_2] [i_2]) : (((3221225472 % var_0) ^ 1))));
                                var_20 = (((((-1 + 2147483647) << (var_2 - 136))) % (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_2] [i_3] = ((!(((((0 ? 0 : -10719))) && ((((arr_4 [i_1]) ? 0 : var_10)))))));
                    var_21 = var_11;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_22 = (max(var_22, 252));
                    var_23 = (max(var_23, (((~((var_6 ? var_1 : ((1 * (arr_2 [i_6]))))))))));
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_24 += 10719;
        var_25 = (max(var_4, var_4));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            {
                var_26 = (((arr_16 [i_10]) + var_4));
                var_27 = (max((((((var_6 ? -20867 : 255)) == ((((arr_4 [i_10]) >= (arr_23 [i_9] [i_10]))))))), 242));
                var_28 -= var_10;
            }
        }
    }
    var_29 = ((((var_0 | (max(var_10, var_12))))) ? var_6 : var_12);
    var_30 = (var_3 < var_12);
    var_31 = (((((var_2 ? var_5 : 188))) ? var_8 : (((var_1 / var_0) / var_8))));
    #pragma endscop
}
