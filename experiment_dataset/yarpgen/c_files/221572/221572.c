/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((min(((var_8 ? var_19 : var_16)), var_14))) && ((min(8003257650382799981, (((-(arr_4 [17] [i_0] [i_0]))))))))))));
                arr_6 [i_0] = ((min(-8003257650382799981, ((var_6 ? 8003257650382799981 : var_14)))));
            }
        }
    }
    var_21 = (((!(var_15 <= var_7))) ? (((8003257650382799981 ? (((var_10 + 9223372036854775807) << (var_16 - 55))) : (((min(var_18, var_6))))))) : (max(((var_10 ? var_3 : var_18)), (((8003257650382799981 ? var_7 : var_13))))));
    var_22 = (max(var_0, ((((min(var_15, var_12))) && (((var_1 ? 536739840 : var_5)))))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [8] = (((((min(var_18, var_14)))) * ((((((((arr_8 [i_2]) + 2147483647)) << (var_12 - 45)))) % ((var_7 ? var_1 : var_5))))));
        var_23 = (min(15249695239016627356, -8003257650382799981));
        var_24 = (min((max(((max(var_6, var_15))), ((var_6 ? 6269562146989187456 : var_19)))), (((50116 ? -1880243327 : 15420)))));
        arr_10 [i_2] = (max(var_16, (arr_8 [i_2])));
        arr_11 [i_2] = ((((max(var_2, (arr_8 [22])))) && (arr_8 [i_2])));
    }
    #pragma endscop
}
