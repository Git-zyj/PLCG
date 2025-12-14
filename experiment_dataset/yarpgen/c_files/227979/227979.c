/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 13838447077298361127;
    var_18 = (min((((-224 != ((max(54995, var_6)))))), (~0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((arr_0 [i_0]) ? (arr_0 [i_0]) : 32762);
        arr_2 [i_0] [i_0] = ((((~(-2147483647 - 1))) != ((var_14 >> (((-127 - 1) + 135))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_20 = 0;
        arr_5 [i_1] = (min((16320 + -2147483631), (max(0, -65515))));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_21 = arr_3 [i_2];
        var_22 = (min(((((((-2147483647 - 1) ? (arr_1 [i_2]) : (arr_3 [i_2])))) ? (((arr_3 [1]) ? -1 : var_6)) : (min(-39602911, 65535)))), 30368388));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_23 = (max(var_23, (((arr_9 [i_3]) ? ((65527 >> (5605498571657817778 - 5605498571657817775))) : (var_6 ^ var_6)))));
        arr_12 [i_3] = (((2 || -2121879565) == 31));
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_16 [i_4] = 2;
        var_24 -= (min(((~(!3237800337550808479))), (!2147483647)));
        var_25 = (508 ? -2121879545 : 943994108);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_5] [i_5] = 45398;
                arr_24 [i_5] = ((min(0, -1)) > (~var_12));
                var_26 = 0;
            }
        }
    }
    #pragma endscop
}
