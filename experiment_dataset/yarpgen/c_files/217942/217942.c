/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((max(var_18, 51))), (var_10 * 68)))) ? ((((min(45, var_0))) ? (((var_8 ? var_8 : 53))) : (max(4163754235270994319, 6687769407501100929)))) : (((min((-1 <= var_6), (115 < 101)))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_20 = 0;
        var_21 = (min(var_21, ((((((var_7 / -918836217) - 15))) ? (((((240110520992826554 ? var_11 : var_11))) ? (var_11 * 4163754235270994319) : (((min(var_6, -1)))))) : (((((min(10, var_2)) == -11))))))));
        var_22 = ((((max(1814003600, var_13)) % (((29 ? -1 : 0))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_23 = var_11;
            arr_5 [i_1] = ((((min((min(3785563241, -5745575286767611775)), (((5 ? var_3 : 128)))))) ? (((-1 + 2147483647) << (((-10 + 29) - 19)))) : (((((min(-1, -1))) && (((29773 >> (7934 - 7929)))))))));
            var_24 = (~(((-var_6 >= ((var_5 ? 45 : var_0))))));

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                arr_10 [i_1] [13] = min(((max(var_8, (var_10 < var_4)))), 72);
                arr_11 [i_0] [i_1] [7] [i_1] = (min(-1, ((min(32325, 3411268551)))));
                arr_12 [i_1] = ((((16200 >= var_2) * (var_18 / 328082517952240682))));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_25 = ((((18446744073709551615 ? 0 : 3543106382))) ? ((var_17 ? var_14 : 7444)) : ((var_0 ? 2143289344 : -1911)));
            var_26 = var_16;
        }
    }
    #pragma endscop
}
