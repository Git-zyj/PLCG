/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((var_4 <= var_9) ? ((((min(var_2, var_8))) ? ((var_3 ? var_11 : var_10)) : ((min(var_2, var_1))))) : (max(((var_0 ? var_12 : var_7)), ((min(var_1, var_10)))))));
        var_14 = (max((min(var_11, (max(14284915379035265306, 2798266529268041018)))), ((14618480302956928550 ? 2798266529268041025 : 12115645809647060609))));
        arr_4 [i_0] [i_0] = ((+((var_4 ? (((var_10 + 9223372036854775807) >> (var_5 - 5739805774958074986))) : ((var_6 ? var_4 : var_9))))));
        arr_5 [i_0] [i_0] = (((min(var_9, (var_4 >= var_5))) >> (((max(var_9, var_3)) - 497290886))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = (max((var_9 != var_8), ((~(!var_7)))));
        var_15 = (min((max(var_3, var_10)), var_8));
        var_16 = max((!var_11), (min(var_7, var_2)));
        var_17 = (max(((max((var_8 <= var_3), var_0))), (max(((var_0 ? var_7 : var_12)), var_7))));
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = var_11;
        var_19 ^= (max((max((min(var_5, var_10)), var_2)), ((max(var_1, var_0)))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_20 = (max((~2798266529268040995), ((var_5 ? ((var_9 ? var_12 : var_1)) : (max(var_2, var_5))))));
            var_21 ^= ((var_1 ? (((var_12 ? var_2 : (var_5 <= var_7)))) : 5200050421256020764));
            arr_16 [1] [1] = var_2;
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_20 [i_4] [i_4] [i_4] = (var_9 != var_8);
            var_22 = (((var_8 <= var_2) ? (max(var_7, var_1)) : (((var_3 + 9223372036854775807) << (((var_1 + 1514941284741988838) - 41))))));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_23 += (((var_6 ? var_7 : var_7)));
                var_24 = (max(var_24, ((((1070517200 ? 10977941479885900928 : 6205723157696594957))))));
            }
            var_25 = (max(var_25, (max((max(var_6, var_7)), (max(var_10, var_3))))));
            var_26 = ((var_10 % ((var_0 ? ((min(var_10, var_10))) : var_11))));
        }
    }
    var_27 = var_11;
    #pragma endscop
}
