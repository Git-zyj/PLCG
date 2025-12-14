/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (var_1 ? 8495612248266126106 : (((max(var_0, -8495612248266126123)) << (((121 + 18446744073709551615) - 91)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_0 [i_0 + 4]) ? (arr_3 [i_0]) : (arr_0 [i_0 - 1])))) ? (arr_2 [i_0]) : 64));
        var_17 = (max(((4252928079 - (arr_2 [i_0]))), (((((30 >> (2707724775 - 2707724771)))) ? 1620294248 : 4252928079))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_4] = (max((((var_3 - (((arr_11 [2] [i_3] [i_3] [i_3] [i_3] [i_3]) - (arr_5 [i_1] [i_2])))))), (max((min(18446744073709551615, 3088662607)), ((max(1, -690)))))));
                        var_18 = (max(var_18, ((((arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (arr_11 [i_2] [i_2] [i_4] [i_4] [i_1] [i_4]) : (min(((max((arr_5 [i_2] [i_2]), 127))), (arr_2 [i_2]))))))));
                        arr_15 [i_1] [i_3] [i_1] = (max(32545, 2782789164));
                        var_19 = ((((1587242521 ? 147 : -568981040))));
                    }
                }
            }
        }
        arr_16 [i_1] = ((((arr_7 [i_1]) ^ (arr_3 [i_1]))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_20 = (max(var_20, ((((arr_0 [i_6]) ? (arr_2 [i_6]) : ((((arr_20 [i_5] [i_5] [9]) ? (arr_3 [i_5]) : (arr_1 [i_5] [i_6])))))))));
            var_21 -= (arr_20 [i_6] [i_6] [i_6]);
            arr_21 [i_6] [i_6] [i_5] = (arr_17 [i_5]);
        }
        arr_22 [i_5] [i_5] = ((min((min(4294967295, 19333)), ((((arr_2 [1]) ? (arr_0 [i_5]) : (arr_19 [i_5] [i_5])))))));
    }
    var_22 = (-var_2 < -18);
    #pragma endscop
}
