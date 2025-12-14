/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (~-3771408933497525950);

                for (int i_2 = 4; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, (~-3988524499315198030)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_23 ^= ((~(((0 * 0) + 268435455))));
                        arr_13 [i_3] [i_2] [i_1] [i_0] = ((16515072 >> (!4294967295)));
                        arr_14 [i_0] [i_0] = -16515070;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_24 += -425354320;
                        arr_19 [i_0] [0] [i_4] [i_4] [12] = (18446744073709551615 + 5);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_2] = -9223372036854775801;
                        var_25 = (970511849 >= 11794);
                    }
                }
                for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_0] = 16515072;
                    var_26 = -16515072;
                }
                for (int i_7 = 4; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_27 &= ((0 & (~2)));
                    var_28 = (((((!(!1)))) >= (~32744)));
                }
                var_29 -= (32903 / 8);
                var_30 = (min(var_30, 6501548155498210449));
                var_31 ^= ((~(9223372036854775807 ^ 39423)));
            }
        }
    }
    var_32 = 2685612838;
    #pragma endscop
}
