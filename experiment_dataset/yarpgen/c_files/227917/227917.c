/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (var_0 ? (((-718773471 + 2147483647) >> (var_4 - 154433062))) : (min((2147483647 >> var_9), 2147483647)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                var_12 = var_5;
                var_13 = (((393368761 * (-32750 > 23278))));
                arr_6 [i_1] = var_7;
            }
            arr_7 [i_0] [i_0 + 2] [i_1] = var_7;
            var_14 ^= (((((718773447 ? 13638883177054359553 : var_2)) * ((((-49 + 2147483647) >> (96 - 74)))))) / var_0);
        }
        arr_8 [i_0 + 1] = (min((max((arr_2 [i_0]), var_2)), var_8));
        arr_9 [i_0] = (min(var_4, var_8));
        arr_10 [i_0 + 1] [i_0 + 3] = ((min((var_3 % 13638883177054359553), (min(var_3, (arr_4 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_16 [i_3 + 2] [i_3] &= ((((min(var_3, (max(13638883177054359557, var_5))))) ? (arr_1 [i_4] [i_4]) : ((5316638138741488739 ? var_2 : (var_1 * 4807860896655192063)))));
            var_15 = ((((max((var_0 * var_6), ((3996905504840244290 / (arr_0 [i_3 + 3] [i_3 + 3])))))) ? (((arr_14 [i_3 + 1] [i_4]) ? 4329327034368 : var_3)) : 4329327034368));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_16 = var_0;
            arr_21 [i_3] = var_0;
            arr_22 [i_5] [i_3] [19] = ((((min((min(var_0, 4182947170)), 1423681300698597689))) ? (min((~718773442), (~var_3))) : ((min(((var_7 ^ (arr_1 [i_5] [i_3 - 1]))), (var_5 > var_4))))));
            arr_23 [i_3] = var_4;
            var_17 = (min(((~(min(393368773, var_3)))), (arr_20 [i_3 + 3])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            arr_27 [i_3] [i_6] [i_6] = 2133771693;
            var_18 = (!2641957039);
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            arr_31 [i_7] = ((((var_2 ? 3996905504840244290 : 431722005)) > (4141298944215706510 / 14449838568869307337)));
            arr_32 [i_7] [i_7] = 14986151554053136930;
            var_19 = var_5;
        }
    }
    #pragma endscop
}
