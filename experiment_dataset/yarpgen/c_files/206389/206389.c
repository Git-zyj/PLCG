/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = (min(var_14, -16));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 &= (((((1322164105 ? 141168787 : 690602151))) ? (((var_9 && (arr_2 [i_0] [i_0])))) : ((((!(arr_1 [i_0])))))));
                    arr_7 [i_1] [i_1] = (((-(arr_0 [i_0] [i_0]))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = 1;
        var_16 = (min(var_16, (arr_8 [i_3])));
        var_17 = ((((var_12 ? 9431977387564369621 : (~9014766686145181994))) <= -1838066434));
        arr_11 [i_3] = (((((110 ? (arr_4 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 4]) : (arr_4 [i_3] [i_3] [i_3] [i_3 - 4])))) && 95));
    }
    var_18 = var_9;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_16 [i_4] = (1 == -355461841);
        var_19 ^= (!18446744073709551613);
        arr_17 [i_4] &= (((arr_13 [i_4]) == var_9));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_20 = 959352428;
        var_21 = ((-(arr_18 [i_5 - 2])));
        var_22 ^= ((var_9 ? -101 : ((124 ? (arr_18 [i_5]) : 189))));
    }
    var_23 = 212362925;
    #pragma endscop
}
