/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((!32767) ? var_12 : (max(48234, var_13)))))));
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_19 = var_4;
            var_20 = (((((max(11174, -1)))) > ((~(max(var_14, 1))))));
            var_21 &= var_9;
            var_22 = ((((((((var_10 ? var_11 : var_4))) ? (var_0 ^ var_16) : 1))) == ((1235004191 ? (((max(1, 1)))) : ((65514 ? var_4 : var_16))))));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_23 ^= (max((((var_2 != (11827567940048658551 | var_9)))), 109));
            var_24 = (!var_9);
            var_25 = (((-var_7 ? 3840 : (1 || 16))));
            var_26 = var_0;
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_27 &= ((((!((max(var_0, var_4))))) ? (max(1, (max(-1809492936, 1)))) : ((1 ? (max(1235004185, 1)) : (~var_9)))));

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_28 = 54361;
                var_29 = (min(var_16, (((((var_12 ? 42500 : var_1))) ? (max(850343884, -1235004180)) : ((var_14 ? 1 : var_10))))));
            }
            for (int i_5 = 4; i_5 < 19;i_5 += 1)
            {
                var_30 = (min(var_30, (max((((!var_16) ? -var_13 : var_16)), (min(1, (!var_15)))))));
                var_31 -= (-32767 - 1);
                var_32 = var_1;
                var_33 = (min(var_33, 81));
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_34 = var_2;
            var_35 = (!var_1);
        }
        var_36 = (!0);
        var_37 = (((((~(var_16 + 65)))) ? (~var_10) : var_0));
        var_38 &= (!32767);
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_39 &= (max((!1809492936), ((((((var_9 ? var_2 : var_8)) + 2147483647)) << (min(18446744073709551615, 1))))));
                    var_40 = (max(var_40, (((((((~4294967295) ? ((42894 ? var_16 : var_8)) : ((max(1, 1)))))) ? ((max((max(var_9, var_14)), var_16))) : ((max(1, 18446744073709551607))))))));
                    var_41 = ((((max(var_4, (var_0 > var_9)))) ? var_15 : (((((max(var_14, var_8)) >= var_13))))));
                }
            }
        }
    }
    #pragma endscop
}
