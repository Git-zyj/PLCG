/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(((-((max((arr_1 [i_0] [i_1]), var_4))))), ((((((arr_0 [i_0]) & (arr_1 [i_0] [i_1])))) ? ((~(arr_1 [i_0] [i_1]))) : (arr_5 [i_0] [i_0 + 1])))));
                arr_6 [i_0] [i_1] = (((((var_2 > (min(18034256461664932817, 412487612044618798))))) - (min(var_10, (((arr_2 [6] [i_0]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0] [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            {
                var_12 *= (max(255, 28538));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_13 ^= (!(arr_11 [i_2]));
                            var_14 ^= ((((max((arr_12 [i_2]), ((((arr_14 [i_3] [i_4] [20]) - (arr_8 [i_2] [17]))))))) ? (arr_13 [i_4] [i_2] [i_2]) : var_3));
                        }
                    }
                }
                var_15 -= var_3;
            }
        }
    }
    var_16 = (((((var_3 - var_6) < ((max(var_8, -13415))))) ? var_2 : ((min(var_10, ((var_4 ? var_8 : var_5)))))));
    #pragma endscop
}
