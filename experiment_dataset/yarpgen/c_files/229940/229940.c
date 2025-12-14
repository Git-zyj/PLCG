/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = var_4;
            arr_7 [i_1] [i_0] [i_1] = var_4;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_16 = ((-252451020 < (((((var_8 ? (arr_5 [i_0] [i_0]) : var_6))) ? (~var_14) : ((max((arr_9 [i_2]), (arr_4 [i_0] [i_0]))))))));
            var_17 ^= 252451022;
            arr_11 [11] [8] [i_2] = (arr_0 [i_2]);
        }
        arr_12 [1] = ((var_11 ? ((((((var_10 ? (-2147483647 - 1) : var_4))) ? (arr_3 [i_0] [i_0]) : -1131608959))) : (max(((-252451022 ? (arr_10 [i_0] [i_0] [i_0]) : -6763068515562194036)), -3726471872625625424))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_18 = (((arr_13 [i_3] [2]) <= ((-6076 ? 10092696050129977965 : -1))));
        var_19 = (max(1191479666, ((-1355297207 ? 64 : 193))));
        arr_15 [i_3] = (max((arr_14 [i_3]), ((((!(arr_13 [i_3] [i_3])))))));
    }

    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_20 = -252451022;
        arr_18 [i_4] [i_4] = (var_6 < 252451020);
        arr_19 [i_4] [i_4] = (((-7230786812662649047 + 9223372036854775807) >> 0));
        var_21 = ((((min((arr_17 [i_4]), (((-5849881987093142556 < (arr_13 [i_4] [i_4]))))))) ? var_11 : (((~(arr_17 [i_4]))))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = var_13;
        var_22 = (max(var_22, ((max((min((min(198238495261528047, var_9)), 22067)), (((arr_13 [i_5 + 4] [i_5 + 3]) ? 32760 : -40)))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_23 -= 218;
                var_24 = (((max(((72057594037927935 >> (-9223372036854775793 + 9223372036854775799))), (!var_8)))) ? ((((arr_28 [i_6 + 1] [i_7]) ? 16639 : 16398))) : (max((((4 ? -16403 : 121))), (5930977268549825747 | 33))));
                var_25 = var_2;
            }
        }
    }
    #pragma endscop
}
