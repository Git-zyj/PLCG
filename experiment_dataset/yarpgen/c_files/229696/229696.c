/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [7] = 1740;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = arr_8 [6];
                    var_17 = (min(var_17, (((!((max((arr_8 [i_1]), (-9223372036854775807 - 1)))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 *= ((17 ? ((var_5 ? (arr_1 [5] [i_4]) : ((~(arr_6 [i_4] [i_4] [i_4]))))) : ((-(-32767 - 1)))));
                    arr_15 [5] [5] = ((~(((!(arr_7 [i_3 + 1] [i_3] [i_3 + 1]))))));
                    var_19 &= var_3;
                    arr_16 [i_4] [i_3] [i_0] [i_0] = 30005;
                }
            }
        }
        var_20 = ((!(((-1 ? (min(var_14, 246)) : (arr_6 [i_0] [9] [i_0]))))));
        var_21 = (((arr_6 [i_0] [i_0] [i_0]) >= (min((~-1951921149), var_4))));
    }
    var_22 -= var_15;
    var_23 = var_1;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_22 [i_6] [i_5] [i_5] |= ((-1 && (~422212465065984)));
                var_24 = (max(var_24, (((!(var_4 != var_1))))));
            }
        }
    }
    #pragma endscop
}
