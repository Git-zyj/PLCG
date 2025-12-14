/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, var_8));
        var_12 += ((5810343292310963623 ? 7294048218537591392 : (((((min(var_8, var_7))) ? (arr_1 [i_0] [i_0]) : (11152695855171960202 == 202))))));
        var_13 += ((-(((!((((arr_2 [i_0]) ? 4790250823980087632 : 906572265))))))));
        var_14 = ((~(((arr_0 [i_0]) ? var_5 : (max(15933020449553772416, var_2))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_15 = (min(var_7, (((((min(2513723624155779199, 19978))) ? (((!(arr_4 [i_1])))) : ((min(123, (arr_4 [i_1])))))))));
        arr_6 [i_1 + 1] = 448515669;
        var_16 = ((((min(0, ((var_10 ? var_3 : var_8))))) ? 15933020449553772416 : -var_10));
        arr_7 [i_1 + 3] = (((~var_8) << (var_8 - 12148851235023162088)));
        var_17 &= (215 % 15);
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = ((~(arr_11 [2] [i_2 + 2])));
            arr_16 [i_2] = (arr_9 [8] [i_3]);
            var_18 = (min(var_18, (((var_4 ? 1 : 7648279562995993782)))));
            var_19 += (((arr_10 [i_2 + 2]) + 0));
        }
        arr_17 [i_2] = ((((min((arr_11 [i_2 - 1] [i_2 + 4]), (var_8 && var_1)))) ? (max(30756, 7766490965217843278)) : ((max(((233 << (22643 - 22641))), (((arr_8 [i_2 + 4] [i_2]) ^ 16320)))))));
        var_20 = (max(var_20, (((((min((max((arr_8 [i_2] [i_2]), var_4)), (arr_10 [i_2 + 1]))))) / 7294048218537591392))));
        var_21 |= ((var_5 ? (var_5 | var_5) : (max(((min(15642, 1055886516))), (~10457014476764842487)))));
        var_22 += (max((arr_13 [i_2] [i_2]), ((((max(15933020449553772416, var_7)) <= 22446)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_23 += 9;
        var_24 -= ((~(var_2 != var_3)));
    }
    var_25 ^= var_10;
    #pragma endscop
}
