/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (max(var_20, 0));
        var_21 = (((-(10 * 1))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = var_3;
        var_23 = 1;
        var_24 ^= ((((((arr_3 [14]) && var_3))) * (arr_3 [14])));
        var_25 = ((((((((18014123631575040 ? (arr_4 [i_1]) : 6))) ? 3 : ((9223372036854775807 ? 65533 : 65534))))) < var_16));
        var_26 += ((+((max((!65533), ((!(arr_4 [i_1]))))))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_27 = var_8;
        var_28 &= (max(((var_15 * (!var_18))), ((min(var_9, 11)))));
        var_29 += (((max(65533, (12771204513589366130 - 5799))) & (-9223372036854775807 - 1)));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_30 = var_13;
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = 0;
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 13;i_6 += 1)
    {
        var_31 = (arr_3 [14]);
        arr_21 [i_6] [i_6 + 1] = ((~(arr_3 [10])));
    }
    var_32 = ((~(var_8 - 5911174658175064351)));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            {
                var_33 = (max(var_33, ((((((!(arr_23 [i_7])))) | 0)))));
                arr_29 [i_7] [i_8 + 3] = (!var_17);
            }
        }
    }
    var_34 *= var_11;
    #pragma endscop
}
