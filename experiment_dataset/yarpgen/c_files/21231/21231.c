/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((-9223372036854775807 - 1) ? var_4 : (max(((var_13 ? (-9223372036854775807 - 1) : var_11)), (((var_13 ? var_8 : var_11)))))));
    var_18 -= 19200;
    var_19 = ((!(((var_12 ? 1 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [1] [i_0] = ((var_15 || ((((arr_2 [i_0]) ? var_3 : (arr_2 [i_0]))))));
                arr_7 [i_0] [i_1] [i_0] &= (arr_2 [i_1]);

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_20 |= -552;
                        arr_13 [i_0] [6] [i_0] [i_1] |= ((((-(((arr_0 [i_2]) ? var_4 : (arr_5 [6] [6]))))) != (((max((!var_10), -19205))))));
                        arr_14 [i_1] [i_3] &= ((~(min((((arr_1 [i_0]) ? 1 : var_5)), (max(32767, 11053517774906549269))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_21 = (-9223372036854775807 - 1);
                                var_22 = -90;
                                var_23 = (min(var_23, -100));
                            }
                        }
                    }
                    arr_20 [i_1] [2] [0] [i_1] &= ((63 ^ (((0 && (arr_16 [i_0] [9] [i_0] [1] [0] [i_2]))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] = (((arr_9 [i_6]) + 1172465337));
                    arr_24 [i_0] [5] [i_6] = ((1 ? var_15 : (max((~889886970), (-9223372036854775807 - 1)))));
                    var_24 = var_8;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_25 = 791729456867930800;
                    var_26 = 1202754882;
                }
            }
        }
    }
    #pragma endscop
}
