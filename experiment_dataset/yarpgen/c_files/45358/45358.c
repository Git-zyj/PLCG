/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((((((arr_2 [i_1 + 1] [1] [i_0]) ? 38947 : (arr_4 [i_1 - 4] [i_1 - 4] [5]))) <= (min((arr_1 [i_0] [i_0]), 1802437711))))) > (arr_2 [i_0] [i_0] [i_1 + 1])));
                var_12 = (max(var_12, (((((max(38947, 1188))) == (((-62 <= (max((arr_1 [i_0] [i_1 - 3]), var_10))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_13 = (min(var_13, (min((((((73 > (arr_9 [i_2] [i_3])))) ^ (arr_6 [i_3] [i_3]))), ((min((min(38957, (arr_10 [i_2] [i_2] [i_2]))), 1802437692)))))));
                arr_11 [i_3] &= (((((((arr_8 [i_2] [i_3]) > (arr_6 [i_3] [i_3]))))) ? (((var_5 & 100682070) % (857300113 - var_4))) : ((((((arr_9 [i_2] [i_3]) / 53883)) <= (26575 - var_6))))));
            }
        }
    }
    var_14 = (max(var_14, (((((var_3 - 20636) ^ (-464853137 > var_5)))))));
    var_15 += (((((((48 << (var_7 + 18709)))) ? ((595009495 << (var_0 - 62))) : (var_2 & var_6))) < (((max(595009495, var_8)) | 366501742))));
    var_16 |= (((((var_6 == var_3) == (var_4 | var_9))) ? ((((((-364679382 + 2147483647) << (var_11 - 1048279262)))) ? (-338189016 <= var_11) : ((var_2 ? var_5 : -100)))) : ((((29621 <= 595009479) && (var_2 && var_7))))));
    #pragma endscop
}
