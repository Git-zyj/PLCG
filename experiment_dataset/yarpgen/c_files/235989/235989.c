/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 = (max((((((-10466 ? 3678 : 12312))) ? var_1 : (1 - 6417))), (!-7317894091468073654)));
                        var_12 |= (2283865170634341907 & 25);
                        var_13 = max((min(1053682911671961407, var_8)), 6417);
                        var_14 = (((6 >= 0) != ((max(-113, 44731)))));
                    }
                }
            }
        }
        var_15 = min((((-6417 ? (~var_8) : 44749))), ((var_6 ? ((4121906461108013833 ? var_7 : -8481086429082639296)) : 26144)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] = max(8481086429082639309, -64);
                        var_16 = (var_0 ? (max(9966155413794854060, -6263485383958133680)) : (~17880));
                        arr_20 [8] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [1] = -1893728935;
                    }
                    var_17 = (max((max((((var_10 ? 63559 : var_3))), 5706962274141246551)), ((((9223372036854775807 & -6549212503266111087) ? (9223372036854775807 < var_9) : (!92))))));
                }
            }
        }
        arr_21 [i_0] = 2097515086;
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((((!2147483644) ? ((7297721867394185364 << (((-7928111406169385721 + 7928111406169385732) - 11)))) : (((max(var_6, 0))))))))));
        arr_24 [i_7] = 5357478245948005595;
    }
    var_19 = ((var_10 ? ((~(max(282072834800987102, 22)))) : var_2));
    #pragma endscop
}
