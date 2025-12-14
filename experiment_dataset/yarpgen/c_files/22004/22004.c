/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_12;
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (((((arr_1 [i_0]) != var_14))))))) ? (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)) : (((max(var_7, var_9)))))) : 88));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = (max((!211), (~var_11)));
            arr_5 [i_0] [i_0] = (max((max((max(3, (arr_1 [i_1]))), (((var_4 ? var_7 : var_14))))), (((((229 ? (arr_1 [i_0]) : var_4))) ? (max((arr_1 [i_0]), var_9)) : (((-(arr_2 [i_0]))))))));
            arr_6 [i_1] = (min(((max(((~(arr_2 [i_0]))), var_15))), (((((-(arr_3 [i_0] [i_1])))) ? ((18446744073709551615 ? 18041119710801174121 : 255)) : var_6))));
            arr_7 [i_0] [i_0] = (min((max(((((arr_3 [i_0] [i_1]) > 44))), var_8)), (((~-110) ? (~540431955284459520) : (arr_0 [i_0])))));

            for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_21 = ((((((!(((0 ? 1 : (arr_1 [i_1])))))))) < (arr_1 [i_0])));
                arr_10 [i_0] [i_1] = ((((((arr_1 [i_2]) ? (arr_0 [i_1]) : (arr_8 [i_0])))) ? 61495 : ((-19144 ? (arr_1 [i_0]) : (var_12 <= var_16)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_22 += var_11;
                            var_23 = (((~(arr_3 [i_0] [i_0]))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] [20] [i_0] = (min((max((arr_15 [i_0] [i_0] [i_1] [i_5]), ((var_6 ? (arr_12 [i_1] [i_1] [i_1]) : (arr_1 [i_0]))))), ((((arr_9 [i_0]) ? (arr_9 [i_5]) : (arr_9 [i_0]))))));
                var_24 = 18446744073709551588;
                arr_18 [i_0] [i_1] = (arr_3 [i_0] [i_1]);
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_23 [i_0] [i_0] [18] [i_6] = (max(-19144, 225));
                var_25 = (((min((arr_14 [i_6] [i_1] [i_6] [i_6] [i_6] [i_0]), ((255 ? (arr_1 [i_0]) : (arr_1 [i_1]))))) * (min(((((arr_16 [0]) & var_9))), (arr_1 [i_6])))));
                arr_24 [i_0] [i_0] [i_6] &= ((+(((arr_20 [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_1] [i_6]) : 2))));
            }
        }
    }
    #pragma endscop
}
