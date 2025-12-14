/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_11 = -1830740680;
            var_12 = (min(var_12, ((((arr_3 [0]) ^ (arr_3 [0]))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_10 [i_0] [15] [i_2] [3] = (((var_0 ? (arr_7 [i_0] [i_0] [i_0]) : -1830740680)));
                var_13 = (max(var_13, (((((arr_8 [i_3] [i_3] [i_2] [i_0 - 1]) >> (var_7 - 11700919729715956928))) ^ (((arr_9 [1] [i_2] [i_0 + 1]) ^ (arr_1 [i_0])))))));
            }
            arr_11 [i_0] [i_0] [i_2] = -1830740664;
            arr_12 [i_0 - 1] [i_2] = 6;
            arr_13 [i_0 + 1] [i_2] = (arr_7 [i_0] [i_0] [i_2]);
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_0] = (-(min((arr_14 [i_4]), var_10)));
            arr_18 [i_0] [i_0 - 1] [i_4 - 1] = (((-1830740680 + 2147483647) >> (((((-1835857796 + 2147483647) >> var_3)) - 311625826))));
            var_14 = (min((arr_3 [0]), (arr_3 [0])));
            var_15 = var_10;
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_16 = (-1 * (arr_14 [1]));
            var_17 |= ((!((min((arr_0 [i_5 - 1]), ((255 ? 1835857806 : 3144012721)))))));
        }
        arr_22 [i_0] = max((min((max((arr_7 [i_0] [2] [0]), (arr_20 [i_0 - 1] [i_0] [i_0 - 1]))), 1835857795)), -33);
    }
    var_18 = ((((((~var_1) * 1))) ? ((((var_5 ? 2259169887 : var_5)) >> ((max(var_0, var_2))))) : ((((4095 ? var_6 : var_1)) ^ (((min(1, var_9))))))));
    var_19 = var_6;
    #pragma endscop
}
