/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (((min((min(2179414188, var_10)), (((var_2 ? (arr_5 [i_2] [i_1] [i_0]) : -16)))))) < ((-32767 ? 15034540759216577940 : 1)));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] = (((((((min(32767, -32764))) ? ((-32764 ? (arr_5 [i_0] [2] [2]) : (arr_10 [4] [i_3] [1] [i_3]))) : ((((arr_3 [i_0]) / 32763)))))) ? (((206 ? 0 : (((arr_1 [i_3] [i_2]) << (38069 - 38062)))))) : (4329837018378110818 * 0)));
                        }
                    }
                }
                var_19 = (max(var_19, (min((((arr_5 [i_1 + 1] [i_1] [i_0]) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : var_5)), ((min((arr_0 [i_1 + 2]), 1)))))));
            }
        }
    }
    var_20 ^= ((var_5 * ((min(((min(var_12, 0))), (max(1702791251, 2668986886711931322)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_21 = (min((((((var_10 ? var_0 : (arr_13 [i_5])))) ? (max(-2, 2147483647)) : -4286431646059752788)), ((min((arr_7 [i_7 - 1] [i_7 - 1] [i_6]), 2147483647)))));
                                arr_23 [i_6] [i_6] = ((0 ? (((((((var_3 ? (arr_15 [i_5] [i_5] [i_7]) : var_16))) || 21942)))) : var_4));
                                var_22 = ((((((!(arr_13 [i_4]))) / (-2147483636 != 10646)))));
                            }
                        }
                    }
                }
                var_23 = (max((((((arr_4 [i_4] [i_4]) && 1)) ? (min(3598372194, 1)) : (!var_17))), ((((((8229805811524129893 ? var_1 : var_12))) ? (!0) : 177)))));
                var_24 = (max(37344, 0));
            }
        }
    }
    #pragma endscop
}
