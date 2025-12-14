/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_5 * (!126)))) || ((min(((min(var_13, var_7))), 53)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_17 = ((((((((~(arr_1 [i_0] [i_1])))) ? ((((arr_0 [i_1] [i_0]) ? 129 : (arr_3 [i_0] [i_0] [i_1])))) : (min(1, 1320584398))))) ? (((790351866 ? 2047 : (!var_3)))) : (~18446744073709551615)));
            var_18 *= (min((((~(152 <= 1)))), (((arr_0 [i_0] [2]) ? 2970872670570330367 : (arr_0 [2] [14])))));
            var_19 = (min(((((~50707) & (arr_0 [i_1] [i_0])))), (max((-2970872670570330367 % 14828), var_13))));
        }
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_20 = ((((5737651943864273887 < (arr_6 [i_2] [i_2]))) ? (arr_5 [i_2] [i_2]) : var_2));
        arr_8 [i_2] [i_2] = var_8;
    }
    #pragma endscop
}
