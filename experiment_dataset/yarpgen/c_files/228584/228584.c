/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = 4532161037316812765;
                    arr_8 [6] [8] [i_1] [i_0] = (1507551958 | var_8);
                    var_16 = -4532161037316812765;
                }
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_1] [i_1] [6] = ((1 ? -5296304021354653153 : 7714671058606412572));
                    var_17 = min((min((arr_3 [i_0] [i_1] [19]), (arr_3 [i_1] [i_1] [i_1]))), 10732073015103139036);
                    var_18 = (((((arr_9 [9] [9] [9]) ? var_5 : ((min(1, 2026937439))))) >> (((1702606700019553256 - 16362115698679434859) - 3787235075049669983))));
                    var_19 &= 2147483647;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_16 [1] [2] [i_4] = ((+(((!((((-3390637531991417074 + 9223372036854775807) << (7714671058606412572 - 7714671058606412572)))))))));
                    arr_17 [i_4] [i_1] [i_4] = (arr_13 [i_0] [i_0] [i_4]);
                    var_20 -= (((((!(1 ^ 7714671058606412572)))) == ((7714671058606412557 ? ((1 ? (arr_12 [i_1]) : 31)) : var_13))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_22 [1] [1] = ((~(arr_9 [i_0] [i_1] [13])));
                    arr_23 [i_0] [i_0] [i_0] [i_5] = (((arr_3 [i_5] [16] [i_0]) ? 5305248408432304686 : (arr_3 [i_1] [i_0] [i_1])));
                }
                var_21 = (min(-7857, (!10732073015103139044)));
                arr_24 [1] &= ((-((-((min(75, (arr_15 [10]))))))));
            }
        }
    }
    var_22 = (((-184507280 + 2147483647) << (((-23 + 25) - 2))));
    #pragma endscop
}
