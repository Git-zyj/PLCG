/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((((max(var_1, var_5)) % (var_14 != var_0)))) ? (((14824427973197880302 - 3622316100511671307) ? var_7 : (var_12 | var_16))) : ((min(var_1, (((138 << (var_13 - 147)))))))));
    var_18 -= ((-(max((var_3 | var_4), (((24 << (var_2 - 81))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 ^= ((((max(var_6, (-127 - 1)))) + var_0));
                                var_20 += (var_16 % ((var_7 ? (arr_9 [i_4] [i_3] [21] [i_0]) : ((119 ? -126 : var_8)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_21 = (arr_12 [i_5] [i_1] [i_1] [i_1] [i_0]);
                        var_22 = ((32 - ((min(((var_9 ? (arr_5 [i_0] [i_0] [i_0]) : -119)), -11)))));
                        var_23 = (!192);
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_24 += (min((((var_13 ? var_7 : -2))), (max(1912660969671628468, -14824427973197880303))));
                        var_25 += ((-(((arr_6 [i_1] [i_1]) ? 29 : (var_16 >= var_15)))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_26 += 31;
                                var_27 ^= ((4145547887 ? ((var_5 + (~var_15))) : ((((max(195, 105))) ? 8674545630197816569 : ((26 ? (arr_8 [i_8] [i_1] [i_2] [i_1] [10]) : 14824427973197880303))))));
                                arr_21 [1] = ((var_7 * var_4) ? (((((!var_2) <= ((var_9 ? (arr_0 [16] [i_8]) : var_13)))))) : -125);
                            }
                        }
                    }
                    var_28 -= ((!((-var_4 && (~4297961590854339531)))));
                }
            }
        }
    }
    #pragma endscop
}
