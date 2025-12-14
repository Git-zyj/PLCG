/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((max(321782311381216374, 29))) ^ ((((min(var_7, var_1))) ? ((var_12 ? var_16 : var_12)) : ((var_9 ? var_16 : var_16))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 &= ((((!((min((arr_1 [i_0]), var_10))))) ? (((!var_9) >> (-var_0 + 47034))) : -25));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((+(min((var_8 & 7621), ((((arr_1 [i_0 + 1]) > var_2)))))));
            var_19 &= (max((arr_0 [i_0] [i_1]), (((((((var_9 ? -65 : var_2)) + 2147483647)) >> (((min(var_9, (arr_5 [i_0] [i_0]))) - 572451343)))))));
            var_20 ^= ((-55 ? (((((((42 ? var_4 : var_12))) || 3817602148)))) : (max(((var_3 ? (arr_0 [i_0] [i_0]) : var_1)), (arr_0 [i_0 - 2] [i_0 - 1])))));
        }
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_21 += ((((((((-(arr_3 [22] [22])))) ? (arr_9 [2]) : ((var_8 ? 236 : (arr_2 [i_2 + 1] [i_2])))))) ? (max(var_13, (var_8 | var_9))) : ((min(((((arr_5 [i_2 + 2] [i_2 + 1]) > var_10))), (min(var_7, var_11)))))));
        var_22 = (arr_0 [i_2 + 3] [i_2 + 1]);
        var_23 = -var_12;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = -112;
        var_24 += (((arr_0 [i_3 + 3] [i_3 - 1]) / (arr_0 [i_3 + 3] [i_3 - 1])));
    }
    var_25 = var_8;
    #pragma endscop
}
