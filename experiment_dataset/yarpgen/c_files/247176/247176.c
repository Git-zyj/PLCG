/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 = (((0 - var_5) << (((!(arr_1 [i_0]))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_12 = var_4;
            arr_5 [i_0] [i_0] [i_1] = ((-1152917106560335872 + (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1])));

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                arr_9 [i_0] [i_1 - 1] [i_1] = (~10691152084680771831);
                var_13 = (max((min((arr_4 [i_2 - 1] [i_1 - 1] [i_1 + 1]), -159)), ((max(-1152917106560335873, 711990526)))));
                arr_10 [i_1] [i_1 + 1] [i_1] = (max((((arr_2 [i_1 + 1] [i_1] [i_2 - 1]) + (arr_2 [i_1 + 1] [i_2 - 1] [i_2 - 2]))), (var_4 != var_6)));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_14 = (((min((arr_11 [i_3] [i_3] [i_3]), var_5))) ? 1 : (min(1214631099, 656720789)));
                arr_13 [i_0] [i_0] [i_1] = ((7755591989028779785 != ((max((min(var_9, (arr_0 [i_3]))), (!1))))));
                var_15 ^= (arr_11 [i_0] [i_1] [i_3]);
            }
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_16 = (var_9 * 6215680541720390613);
            var_17 = ((-1152917106560335873 ? (arr_2 [i_4 + 1] [i_4] [i_4]) : (arr_2 [i_4 + 1] [i_0] [i_0])));
            arr_16 [i_0] [i_4] [0] = (((-1152917106560335873 & 65535) & var_5));
            var_18 = (((((((arr_6 [10] [i_0] [i_0]) < (arr_3 [4] [i_4]))))) >= (((arr_4 [i_4] [i_0] [i_0]) ? -1405953220859907304 : var_7))));
        }
        var_19 = (max((((min(10691152084680771831, 1)))), (arr_14 [i_0])));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_20 = (max(1, 11413));
        var_21 |= (arr_11 [i_5] [i_5] [i_5]);
        var_22 = (max((min((max(-121, var_9)), (~var_9))), (max((arr_3 [i_5] [i_5]), var_0))));
    }
    for (int i_6 = 4; i_6 < 23;i_6 += 1)
    {
        var_23 = ((((((((min((arr_22 [i_6] [i_6]), 241))) == ((var_2 ? (arr_22 [i_6 - 4] [i_6 + 1]) : var_3)))))) != (max(var_5, 6117408692563834739))));
        var_24 = (min(var_24, ((min((max(-1152917106560335873, var_0)), ((min((arr_21 [i_6]), (arr_21 [i_6 - 4])))))))));
    }
    var_25 ^= (((min(((var_5 ? 65535 : var_8)), (var_3 ^ var_1))) - (((~(3163617005923674803 >= var_5))))));
    #pragma endscop
}
