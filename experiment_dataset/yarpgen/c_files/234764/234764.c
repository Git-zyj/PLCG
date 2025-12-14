/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = var_4;
                var_19 = ((((!176559958521866978) << (9223372036854775796 - 9223372036854775795))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_20 = (1374941942 % var_11);
                    var_21 = var_12;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_22 = (var_3 + 1);
                    var_23 = (((48356 + var_14) ? var_11 : (((((18446744073709551596 ? 16384 : 8901374832147397724))) ? (((1978113093119925255 ? 15360 : 16379))) : var_7))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_24 = ((50175 <= (var_12 >> var_4)));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_25 = (min(var_25, (((((((1 >= var_12) || var_5))) / 48356)))));
                        var_26 = ((((var_14 < 11018882510107697427) < var_8)));
                        var_27 = ((128 ? 50170 : (15351 * 12218239034905026716)));
                        var_28 = var_2;
                    }
                    var_29 = (max(var_29, (((var_5 ? var_15 : 143)))));
                    var_30 = (((var_11 >> 0) && (((var_12 * (var_10 <= var_2))))));
                }
            }
        }
    }
    #pragma endscop
}
