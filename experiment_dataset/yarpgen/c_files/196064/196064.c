/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((var_3 + var_3), ((65511 ? var_11 : var_5)))));
    var_13 = (max(var_13, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((~((((arr_1 [13] [8]) && var_8)))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_15 = (max(var_15, ((((arr_3 [i_1]) ? var_4 : (arr_2 [15] [i_0]))))));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_16 = (((arr_2 [i_1] [i_2]) ^ (arr_0 [i_0])));
                arr_7 [i_2] = (var_6 && 69);
                var_17 = (max(var_17, var_0));
                var_18 = (((arr_1 [i_0] [i_0]) ? (arr_3 [19]) : (((arr_1 [i_0] [i_1]) ? var_5 : var_7))));
            }
            var_19 = (~var_6);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_20 = (arr_6 [i_0]);
            var_21 = ((var_7 > (arr_1 [i_3] [i_0])));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_13 [6] [i_4] = (((arr_3 [i_0]) > var_7));
            var_22 = ((var_3 <= (arr_8 [i_0] [16] [14])));
        }
        var_23 = (((~var_6) == (arr_2 [i_0] [i_0])));
    }
    var_24 *= ((((max(((((var_1 + 9223372036854775807) << (var_3 - 1)))), ((var_0 ? var_6 : var_2))))) ? ((((var_6 | var_7) ^ var_4))) : ((var_2 & (((var_6 ? var_11 : var_4)))))));
    var_25 += ((((((var_3 - var_7) | (var_11 > var_6)))) - ((var_2 << (var_4 + 2915164324725566029)))));
    #pragma endscop
}
