/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_9, (~7)))) && (((-7709291273599664515 ? (var_9 + var_5) : (10737452800109887100 - 39239))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] &= (179 ? (arr_1 [i_0] [i_1]) : 3555111329300567046);
            arr_7 [i_0] [i_1] = (var_9 & -1824);
        }
        arr_8 [i_0] [i_0] = ((((max(12648583853492219334, var_11))) ? var_13 : var_9));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_12 [i_2] = 14638328323544181176;
        arr_13 [8] |= 1180077431;
        arr_14 [i_2] = -20;
    }
    var_18 = (((-(!202121049108793753))));
    var_19 = (min(18446744073709551611, var_12));
    var_20 = ((var_15 != ((((!(~1615174352)))))));
    #pragma endscop
}
