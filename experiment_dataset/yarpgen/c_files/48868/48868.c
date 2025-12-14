/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (--4294967292);
        var_15 = (((((-var_7 ? -46892 : ((-20938 ? var_2 : (arr_0 [i_0] [i_0])))))) ? (~8388352) : (((((-(arr_0 [i_0] [i_0])))) ? ((-1833399701 ? var_5 : 3312645027)) : (((arr_1 [i_0]) ? 4294967292 : -30584))))));
        var_16 ^= (!(((((((arr_0 [i_0] [i_0]) ? -12717 : 8350643053668025571))) ? var_7 : (((arr_1 [i_0]) ? var_0 : (arr_0 [i_0] [i_0])))))));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {
                        var_17 = ((((((((-(arr_4 [i_1] [i_1])))) ? -1 : (((arr_3 [i_1]) ? (arr_8 [i_1] [i_2] [i_1]) : 1))))) ? ((-(((arr_1 [i_2]) ? (arr_8 [i_1] [i_1] [i_1]) : var_7)))) : (((((((arr_12 [i_4 + 1] [i_1] [i_3] [i_1] [i_1] [i_1]) ? 1 : (arr_10 [i_3])))) ? -3089218252 : (arr_5 [0] [i_3] [i_1]))))));
                        arr_13 [i_3] [8] [8] [i_3] |= ((-var_4 ? (((((var_5 ? (arr_7 [i_1]) : (arr_4 [2] [i_2])))) ? -1 : -var_8)) : ((-var_9 ? -1 : -7))));
                        var_18 = (((((-(arr_3 [i_1])))) ? ((-var_0 ? (((arr_4 [i_1] [i_4]) ? var_14 : var_7)) : (((arr_5 [i_4] [i_3] [i_1]) ? -20930 : 55009)))) : (--4)));
                    }
                }
            }
        }
        var_19 = ((((!(!var_4))) ? (+-9223371968135299072) : ((((((1 ? (arr_5 [i_1] [i_1] [i_1]) : var_11))) ? (((!(arr_7 [i_1])))) : ((-(arr_0 [i_1] [i_1]))))))));
        arr_14 [i_1] [i_1] = ((~(((((956045297 ? var_2 : 26202))) ? (((arr_9 [i_1] [i_1]) ? 0 : (arr_4 [i_1] [i_1]))) : ((((arr_5 [i_1] [i_1] [i_1]) ? (arr_10 [2]) : 0)))))));
    }
    var_20 *= (!((!(((var_6 ? var_12 : 1836733107))))));
    #pragma endscop
}
