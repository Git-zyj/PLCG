/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = ((var_0 << (((-8 < (-32761 == var_8))))));
    var_14 = ((1 == ((((0 == 1) || 1)))));
    var_15 = ((((((((var_2 ? var_11 : var_3))) ? ((var_2 ? var_6 : var_0)) : ((var_1 ? var_0 : var_6))))) ? (((9223372036854775792 <= (((min(1, -84))))))) : (((var_11 ? -121 : var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (((((((min(0, var_0))) ? ((var_5 ? var_1 : (arr_7 [i_0] [i_1]))) : ((((arr_1 [i_1]) ? (arr_3 [i_2]) : (arr_5 [i_0 - 1] [i_1 + 1] [i_1]))))))) ? ((((arr_7 [i_1] [i_1]) | (arr_2 [i_0 + 2])))) : ((var_6 ? (var_6 - var_10) : (min(939095095, 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_0] [i_1] = ((((-27369 ? (((min(42234, 130)))) : (arr_6 [i_0] [i_1] [i_2] [i_3]))) == (min(((min((-2147483647 - 1), (arr_3 [i_2])))), ((var_0 ? var_9 : 2))))));
                                arr_15 [i_1] [i_1 - 1] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
