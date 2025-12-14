/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -14398;
    var_13 = var_4;
    var_14 = (((((var_8 ? var_2 : (((var_1 ? var_1 : var_0)))))) ? ((var_8 ? ((-1951864475 ? var_5 : var_7)) : 1)) : (((((min(var_3, 1073741824))) || (43871 >= var_6))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_0 [i_0]) >= (~var_4))) ? var_5 : (min((arr_1 [i_0] [i_0 - 1]), (((arr_0 [i_0]) ? var_1 : 3298534883328))))));
        var_15 = (((((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_7))) * 3298534883328))) ? ((3298534883329 + (arr_0 [i_0]))) : -5065609700595387841));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_1 [i_1] [i_1]);
        arr_8 [i_1] = (arr_3 [i_1]);
        arr_9 [i_1] = ((((arr_3 [i_1]) ? (arr_5 [17] [i_1]) : (arr_3 [i_1]))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_16 *= -5065609700595387841;

        /* vectorizable */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            arr_16 [i_2 - 1] = (((!9223372036854775807) ? (!27430) : 40557));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_24 [i_5] [i_3] [i_3] [i_4] = var_10;
                        arr_25 [i_2 + 1] [i_2 + 1] [3] [i_5] [i_2 + 1] [i_5] = ((~(arr_21 [i_2] [i_3] [i_4] [i_2] [i_5] [i_4])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_17 = ((-(arr_28 [i_6])));
                        var_18 ^= 1;
                        var_19 = ((var_8 ? (982990735 > 53024) : ((var_7 ^ ((max(var_5, 19)))))));
                        arr_37 [i_6] [i_6] = (((((min(247, -31586)))) - (arr_6 [i_6])));
                        arr_38 [i_6] [3] = (((((+(((arr_20 [i_6] [i_8] [i_8]) ? var_9 : (arr_3 [i_9])))))) ? ((5065609700595387841 << (((((arr_10 [i_6]) ? var_0 : 31571)) - 122)))) : ((((!(((var_10 ? (arr_30 [i_9] [i_7] [9]) : 3869886847)))))))));
                    }
                }
            }
            arr_39 [i_6] [3] = (((((-1 ? 5065609700595387841 : var_8))) * (((arr_33 [i_6]) ? var_2 : ((((arr_35 [i_6] [14] [i_7] [i_6] [14]) | 2733450668647516688)))))));
            arr_40 [i_6] = (((arr_30 [i_6] [i_6] [i_7]) ? 634082316 : (((!(~2980927113))))));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_20 = ((8192 ? (((min((arr_41 [i_6] [i_6] [i_6]), (max(var_7, 41141)))))) : var_4));
            var_21 = 0;
        }
        var_22 = ((var_9 && (((var_0 ? ((((arr_14 [i_6]) ? var_6 : -634082345))) : (arr_15 [0]))))));
    }
    #pragma endscop
}
