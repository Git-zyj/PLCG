/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (var_0 & var_14);
        var_17 |= (((((var_5 ? (arr_2 [6]) : (arr_1 [i_0 - 1] [2])))) ? ((5626469455178489999 ? 12820274618531061617 : -73)) : (((var_9 ? -4326098144853956527 : (arr_1 [i_0 + 1] [1]))))));
        var_18 = -42;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_2] |= min(9, 3189612089);

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_19 = (min(var_19, ((max(var_14, ((92 ? 1909249193106084276 : 108)))))));
                var_20 = (15 | 5626469455178489999);
                var_21 = (((((~(arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1])))) ? (((~(arr_12 [i_1] [i_2] [i_3 - 1] [i_1])))) : ((3137452162 << (((min(-106, -778103405)) + 778103411))))));
            }
            var_22 = max(((((~108) ? (2771335778 <= 1609) : 195))), (((arr_3 [i_1]) | 15821307850338564065)));
            var_23 = (max(((var_14 ? 1120099838 : (arr_12 [i_1] [i_1] [i_1] [9]))), (((((-1 ? 20180 : var_11))) ? (min(var_11, (arr_12 [i_1] [i_1] [i_2] [i_1]))) : 110))));
            var_24 -= (((31 ? 65528 : 22)));
        }
        var_25 = ((65535 ? 1856754467 : 143));
        var_26 -= (max(((((arr_7 [i_1] [3] [i_1]) <= var_13))), ((((!(arr_13 [i_1] [i_1] [i_1])))))));
        var_27 = (!var_6);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_28 = ((+(((arr_15 [i_4]) ? 2043439395 : -1))));
        arr_16 [i_4] = ((-(arr_14 [i_4])));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_29 = (arr_19 [i_5]);
        var_30 = (((~var_12) ? var_13 : (((arr_20 [i_5]) & (arr_20 [i_5])))));
        var_31 = ((((max(var_5, -5626469455178489999))) ? ((((14766638715040473538 != (arr_18 [i_5]))))) : (min((arr_15 [i_5]), (arr_15 [i_5])))));
    }
    #pragma endscop
}
