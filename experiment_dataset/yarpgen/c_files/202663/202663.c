/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_8 ^ var_4) ? var_1 : var_2));
    var_16 *= var_3;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_17 |= (arr_3 [12]);
            arr_6 [2] |= (((((-9641 ? 1822717480 : 74))) ? (9636 || -21014) : (((arr_4 [i_0 - 1] [i_0 - 2] [i_1 + 1]) ? (arr_0 [i_0 - 2]) : (arr_4 [i_1 - 2] [i_1 + 3] [i_0 - 3])))));
            arr_7 [i_0 + 1] [i_0] [i_1 + 1] = ((-9641 ? -9657 : -6257));
        }
        var_18 = ((6252 ? -8885 : 2782340291879128313));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 ^= (((((arr_10 [2]) ? ((((arr_1 [i_2]) ? (arr_9 [i_2]) : 84))) : (arr_4 [i_2] [i_2] [i_2]))) * (arr_5 [i_2] [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_20 = (~1508347234);
                        var_21 = (min((arr_5 [i_3 + 2] [i_5] [i_5]), (((!(arr_1 [i_4]))))));
                        var_22 = (((arr_8 [i_2] [i_2]) ? (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))) : (var_13 || var_0)));
                    }
                }
            }
        }
        var_23 = (arr_11 [i_2] [i_2] [i_2]);
    }
    for (int i_6 = 4; i_6 < 17;i_6 += 1)
    {
        var_24 = (max(var_24, (9641 * 6256)));
        arr_25 [i_6] = (~var_1);
    }
    #pragma endscop
}
