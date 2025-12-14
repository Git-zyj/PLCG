/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 9223372036854775807;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(((((arr_1 [i_0]) ? -7632 : 127))), (min(var_4, (arr_1 [i_0])))));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) != -750529593));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = (((arr_5 [i_0] [i_1] [i_1]) ? (arr_1 [i_1]) : var_7));
            var_13 *= (1841456370249532430 % 32768);
            arr_7 [i_1] [i_0] = (arr_3 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_14 &= (min((arr_10 [i_0]), (((arr_10 [i_0]) / (arr_10 [i_0])))));
            var_15 = (max(var_15, 38868));
            var_16 = var_5;
            var_17 += ((arr_10 [i_0]) * ((-36 ? 12 : 172)));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_18 += max((((arr_5 [i_3] [i_3] [i_3]) * 0)), (((((max((arr_4 [i_3]), var_7))) != (arr_10 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = (min((-20 < 2504681571), (min(0, var_7))));
                    var_20 = (698896887 == 65);
                }
            }
        }
        arr_19 [i_3] [i_3] = (((~var_5) ? 172 : (min(((3596070409 ? -7634 : var_1)), -1100750911))));
        var_21 ^= (((max(((-(arr_3 [i_3] [i_3]))), (!57076))) + ((((-885191296 / -1) ? var_5 : (((-34 ? 45628 : -1))))))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_22 = (((((min(var_10, (arr_13 [i_6]))) <= (((96 ? 42989 : var_3))))) ? var_1 : ((((arr_5 [i_6] [i_6] [i_6]) & var_5)))));
        var_23 ^= -1;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_24 = (max(var_24, (((!(arr_11 [i_7] [i_6]))))));
            var_25 = (arr_23 [i_6] [i_6] [i_6]);
        }
        arr_26 [i_6] [i_6] = (arr_20 [i_6]);
    }
    var_26 = (+-69);
    var_27 ^= (var_1 & 221);
    var_28 = var_9;
    #pragma endscop
}
