/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_6 <= var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 ^= ((((((arr_1 [i_0] [i_0]) ? (var_15 || var_12) : (arr_2 [i_0])))) >= (((max(var_2, (arr_5 [i_0]))) ? var_4 : (min((arr_6 [i_1]), var_14))))));
                var_21 += (arr_2 [i_0]);
                var_22 *= var_5;
                var_23 = (min(var_23, (((15274 ? -15266 : 1)))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_24 = ((!(arr_3 [5] [i_0] [i_1])));
                    var_25 = (min((((((~(arr_2 [i_0])))) ? (arr_7 [i_0]) : -var_1)), ((((1 + var_13) ? (~-822812480) : (arr_7 [i_0]))))));
                    var_26 = (((~-15300) ? (((arr_4 [i_1 + 1]) | (arr_4 [i_1 + 1]))) : (arr_8 [i_2] [i_1])));
                }
                for (int i_3 = 2; i_3 < 6;i_3 += 1)
                {
                    var_27 ^= ((!((max((arr_8 [i_1] [i_1 - 2]), var_8)))));
                    var_28 = (((((var_4 ? ((min((arr_8 [i_1] [i_3 + 3]), (arr_3 [i_3] [i_3] [i_3])))) : (((var_3 || (arr_4 [0]))))))) ? ((((arr_4 [i_0]) != 159))) : ((min((arr_1 [i_1 - 2] [i_1 - 2]), var_3)))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_29 &= (min((((((arr_10 [i_1 + 1] [i_1 - 2] [0] [i_1]) + 2147483647)) >> (arr_7 [i_1 + 1]))), (arr_7 [i_1 - 1])));
                    var_30 = (max(var_30, ((((min(((var_11 ? var_15 : -15273)), ((var_2 ? var_13 : (arr_4 [i_1]))))) * -var_8)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_31 = (max(var_31, (((-(((!((min((arr_11 [4] [i_6 + 1] [2]), var_10)))))))))));
                    var_32 = ((((1 + ((~(arr_10 [i_5] [i_5] [i_5] [i_5])))))) == var_1);
                }
            }
        }
    }
    #pragma endscop
}
