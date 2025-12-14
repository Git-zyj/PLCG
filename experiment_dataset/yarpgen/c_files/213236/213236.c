/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max(((min(179, -917444625284191170))), (~0))))));
    var_13 |= ((!((((14314836066340193817 / var_7) / 212)))));
    var_14 -= var_6;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] = ((!(((arr_1 [i_1 + 2] [i_0 - 1]) < (arr_1 [i_1 + 1] [i_0 - 3])))));
            var_15 -= ((((((arr_0 [i_0 + 3] [i_0]) ? (arr_0 [i_0 - 3] [i_0 - 3]) : 181))) ? (min(9, 3716174488686083587)) : (((max((arr_0 [i_0] [i_1]), (arr_0 [i_0 + 3] [i_1 + 2])))))));
        }
        arr_6 [i_0] [i_0] = ((13061 ? 4294967295 : (-9223372036854775807 - 1)));
    }
    for (int i_2 = 4; i_2 < 24;i_2 += 1)
    {
        var_16 = ((176 ? -30467 : 1));
        var_17 = ((144115188075855871 << ((((var_5 >> ((((var_6 ? var_11 : 709012616620393319)) - 17901)))) - 122231))));
    }
    #pragma endscop
}
