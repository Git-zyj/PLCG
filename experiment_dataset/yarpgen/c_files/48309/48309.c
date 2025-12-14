/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((max(18446744073709551601, 18446744073709551601))))));
    var_12 &= min(((~(min(199, 35184372084736)))), ((((max(var_9, var_0)) ^ var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 ^= (max(((min(-75, -235))), (max(18446744073709551601, -95))));
                            var_14 = (min(28492, 1));
                            var_15 = (max((-9223372036854775807 - 1), ((max((arr_2 [i_0] [1]), -2036187776)))));
                            arr_10 [i_0] [i_2] = (((((~((max((arr_1 [1]), 7)))))) ? (((~(min((arr_3 [i_0] [i_2]), (arr_5 [i_2])))))) : ((~(0 ^ 1)))));
                            var_16 |= var_2;
                        }
                    }
                }
                var_17 &= ((~((max(32, (-127 - 1))))));
            }
        }
    }
    var_18 = (((((-66 + (max(var_6, 1))))) ? (~var_9) : var_3));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_16 [i_4] = (!(-2044246196300600572 >= 174));
                var_19 = ((((1 * (((arr_7 [i_4] [i_4] [i_4] [i_4] [i_5]) ? (arr_3 [1] [i_4]) : var_0)))) & (((~((min((arr_13 [i_5]), 1))))))));
                arr_17 [i_4] [i_4] [i_4] = ((+((max((arr_13 [i_4]), (arr_13 [i_5]))))));
                var_20 = (max(var_20, (((((min(((max(-67, -2036187777))), (max((arr_15 [i_4] [i_5]), (-9223372036854775807 - 1)))))) || ((min((max((arr_12 [i_4] [i_4]), var_2)), (~536870911)))))))));
            }
        }
    }
    #pragma endscop
}
