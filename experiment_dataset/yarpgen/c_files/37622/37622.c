/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(34291, (min(0, 0)))) > (((((4 <= 0) || (!100))))));
    var_11 = max(((~(min(18446744073709551615, 0)))), (((!((min(18446744073709551608, (-9223372036854775807 - 1))))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_12 = (max((max(0, 127)), (((0 * (!18446744073709551615))))));
                var_13 = 288230376151711712;
                arr_9 [i_0] [i_0] [i_0] [20] = (!13);
                var_14 = 1134907106097364992;
            }
            for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_15 = ((min(1, (1 == 1))));
                var_16 = (max(((((12275875572398733990 / -122) || -6559933903937886816))), ((-15 * (min(1431897747376730702, 0))))));
            }
            arr_12 [i_1] = (2653098583 / 8974445445339498330);
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_23 [i_6] [i_6] [i_4] [i_6] [i_0] = (((((min(9007198180999168, 15)) << (149 - 102))) - ((18446744073709551593 | (!2147483647)))));
                            var_17 = 22;
                            var_18 = ((!((1 != ((max(3, -88)))))));
                        }
                    }
                }
            }
            var_19 = 1;
        }
        var_20 |= (min((((!(104 < 330835611912170885)))), (17014846326332820893 - 0)));
        var_21 = (min((65527 % 1), (-5405723565932089245 >= 127)));
        var_22 = (min(var_22, 66846720));
    }
    for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_23 = ((-((((min(0, -9223372036854775807)) != (~0))))));
        var_24 = 0;
        var_25 = (((!(931315539 - 5412171216152255327))));
        var_26 = (((-((min(60, 4094))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_28 [i_8] [i_8] = (min((((-(3 - 1)))), ((-(1212151423466791652 % -63)))));
        var_27 -= (-(max(((max(255, 0))), (~5456508866342570532))));
    }
    #pragma endscop
}
