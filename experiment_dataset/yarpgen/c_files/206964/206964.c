/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((-(arr_2 [i_0 + 1] [i_0 - 1]))));
        arr_4 [9] [i_0 + 1] = (((((0 * 3) / 140737488355327)) >= ((((!(((0 ? var_0 : 3599167862324201776)))))))));
        arr_5 [i_0] [i_0] = max((!-8150072748978427587), ((!(!var_6))));
        var_11 = (((((arr_2 [i_0 - 2] [i_0 - 1]) ? 32748 : 524287)) <= 90));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_12 ^= ((((((-20136 ? (arr_7 [i_1]) : (arr_6 [i_1] [2]))))) ? (arr_8 [8]) : ((8150072748978427586 - (max(18111047002628989765, -601037108))))));

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            arr_12 [i_1] = (i_1 % 2 == zero) ? (((-((((((1 ? (arr_11 [i_2]) : (arr_11 [i_1 - 1]))) + 9223372036854775807)) << (((arr_6 [i_2 - 3] [i_1]) - 8965698772944358549))))))) : (((-((((((1 ? (arr_11 [i_2]) : (arr_11 [i_1 - 1]))) + 9223372036854775807)) << (((((arr_6 [i_2 - 3] [i_1]) - 8965698772944358549)) - 14318510924463312781)))))));
            var_13 = ((+((-(((arr_10 [i_2 - 2] [i_1]) + 16054342981623490944))))));
        }
        var_14 = ((524287 & (max(-6195626816568506895, -118))));
    }
    #pragma endscop
}
