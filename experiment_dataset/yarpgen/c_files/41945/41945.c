/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (((-17897 ? (var_1 == 3121996859397578042) : (min((8921139901113350521 < var_1), (min((arr_1 [i_0]), var_5)))))))));
        var_13 = (min(var_13, -14));
        var_14 = 25;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = (min(var_15, var_8));
            arr_4 [i_0] = (arr_3 [i_0] [i_0] [1]);
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = (((((arr_0 [i_2]) ^ (((max(var_8, (arr_5 [i_2]))))))) == ((16 ? var_7 : (max(var_6, (arr_0 [i_2])))))));
        var_16 = ((+(((1714020547 - 8921139901113350530) ? (var_1 / var_2) : (26 && var_5)))));
        var_17 = (min(var_17, (arr_5 [i_2])));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 -= ((var_11 ? ((max(var_6, ((var_1 ? 1 : 1418094652))))) : (max(((var_6 ? var_3 : 231)), ((var_10 + (arr_10 [i_3])))))));
        arr_11 [i_3] |= (arr_8 [i_3]);
    }
    var_19 = (((var_8 ? 3121996859397578052 : (var_4 != var_1))));
    var_20 = (max(var_7, (var_9 + 34)));
    #pragma endscop
}
