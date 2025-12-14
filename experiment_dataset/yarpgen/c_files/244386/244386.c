/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, (((~(((!(((0 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))))))));
        arr_2 [i_0] = ((-(arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_15 = ((max(7, (arr_1 [i_1 + 1] [i_0 - 2]))));
            arr_6 [i_0] = -var_4;
            arr_7 [i_0] [i_0] = 1337047312;
            var_16 *= (min((((!(!18446744073709551591)))), (((arr_4 [i_1] [6] [i_0]) * ((7 ? var_12 : -138))))));
            arr_8 [i_0] [i_0] = (var_4 * ((40773 ? 124925866 : 31757)));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] = var_6;
            arr_12 [i_0] [i_0] = (arr_5 [i_0] [i_2]);
        }
        arr_13 [i_0] = (((arr_4 [i_0] [i_0] [i_0]) ? ((((124925866 != (!138))))) : (max((~18446744073709551609), (~0)))));
    }
    #pragma endscop
}
