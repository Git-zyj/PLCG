/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(-9223372036854775807 - 1)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 *= (arr_1 [i_0 - 1] [5]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = ((-1567215387946270900 ? -1567215387946270882 : (~2147483647)));
                    var_20 = 195808518;
                    var_21 ^= (((8388096 | var_8) ? ((((-2147483647 - 1) != 0))) : (arr_7 [i_2 + 1] [i_0 - 1] [i_2])));
                }
            }
        }
        var_22 += -1223;
        var_23 = (max(var_23, (arr_4 [i_0 - 1] [i_0])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 6;i_5 += 1)
            {
                {
                    var_24 = (max((((!(arr_11 [i_4 - 1])))), (9223372036854775807 - 62993)));
                    arr_16 [i_3] = 1630;
                    var_25 = (min(((!(arr_8 [i_3] [i_3]))), ((!(!1630)))));
                }
            }
        }
        var_26 = (max(var_11, (min((arr_3 [i_3] [i_3]), ((((arr_2 [0] [0]) <= 4294967287)))))));
    }
    #pragma endscop
}
