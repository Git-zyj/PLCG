/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((1156471024 || ((((~var_0) ? (var_3 > var_8) : -31068)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(var_15, ((((15216287492305982421 > var_2) <= ((var_5 ? 3974176075 : 320791221)))))));
        var_16 = 320791221;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_1] = (((((((var_1 + 2147483647) << (3974176072 - 3974176072))))) % 104));
            arr_10 [i_1] [i_1] = (min(((~(max(-1128604785738024484, 85)))), ((-8361913004680602732 % (-127 - 1)))));
            var_17 = (((((!(95 * 12)))) <= (((min(112, var_0))))));
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_18 = (max(var_18, (((-((((max(3974176075, var_10)) != (var_6 == var_9)))))))));
            var_19 = (320791220 != -21);
            var_20 = ((8 != (var_13 - -138335189)));
        }
        var_21 += max(((154 ^ (~var_8))), ((((~var_1) > (161 & -10316)))));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    {
                        var_22 = ((((min(3974176088, -10325))) ? (((((var_9 % var_7) < (var_9 ^ 10316))))) : (max((min(41, var_7)), (2147483647 || var_11)))));
                        arr_19 [i_6] [i_4] [i_5 - 1] [i_5] [i_5 + 3] = (((((!((max(-607900290, var_8)))))) / var_8));
                    }
                }
            }
            arr_20 [i_4] = (!-25373);
        }
    }
    #pragma endscop
}
