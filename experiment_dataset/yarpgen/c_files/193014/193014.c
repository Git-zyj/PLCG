/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((47301 ? var_8 : (max(1789, 18446744073709551604))));
    var_14 = var_2;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_15 = (((((var_9 / var_6) ? (arr_0 [i_0] [i_0 - 3]) : 18446744073709551595)) == (min((47554 == 10), (min(11, (arr_0 [i_0] [i_0])))))));
        var_16 = ((((max(65535, 28589))) * (4062724538857024446 == 63748)));
        var_17 &= (arr_1 [i_0 + 1]);
        arr_2 [i_0 - 3] = -11538;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = 11520;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (((~25) ? ((var_8 ? (131071 & 0) : 0)) : (arr_0 [i_4] [i_4])));
                                var_20 = (((((9409 % (1435089638530079040 || var_5)))) ? 1788 : (((63758 ? 4062724538857024455 : 56126)))));
                                arr_13 [i_0] [i_0] [i_0] [i_4] = (max((~8191), ((~((3030524528 ? 18446744073709551615 : 36564))))));
                                var_21 = (((arr_8 [i_1 + 2] [i_1] [i_1] [i_1]) ^ 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((((((((max(3030524547, var_0))) ? (!28966) : 1231349938187339944))) ? 3269 : (var_7 || var_9))))));
    var_23 = 3030524528;
    #pragma endscop
}
