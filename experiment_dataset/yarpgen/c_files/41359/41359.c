/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [9] = (((-(3522320830 * var_4))));
        arr_4 [i_0] = 5332633642268582432;
        var_19 = 772646459;
        var_20 = ((((((((-8780786225049591304 ? 103 : -630445208375387539))) ? 0 : 772646465))) % (min(((((var_13 + 2147483647) >> (772646465 - 772646439)))), 2390942344835860872))));
        arr_5 [i_0] &= arr_0 [i_0];
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_21 = ((((772646468 ? 1 : 772646465)) % -7277));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_3] [i_2] [12] [12] = ((~((((((var_17 ? 3522320830 : var_13))) && (((var_3 ? var_6 : var_3))))))));
                        var_22 = ((~((~(min(var_5, var_12))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_24 [i_1] [i_5] [i_6] [i_6] = var_9;
                        arr_25 [i_5 - 1] [i_6] [i_5 - 1] [i_1 - 1] = var_2;
                        arr_26 [i_1] [i_1] [i_1] = 772646494;
                    }
                    arr_27 [5] [i_5] [i_5] [i_5] = min(3522320831, (((1430127343 % 3522320830) & 65533)));
                    var_23 = (((1 != var_1) ? var_2 : ((((var_13 && var_12) ? (!268435455) : (3522320831 == 6146553681152535062))))));
                }
            }
        }
        var_24 += 3522320830;

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_32 [11] &= ((18446744073709551615 < (327555995 > var_5)));
            arr_33 [i_1 + 1] = (((max(772646465, 1)) == ((((arr_1 [i_8]) ? (var_14 * 2678047591) : (!1))))));
        }
    }
    #pragma endscop
}
