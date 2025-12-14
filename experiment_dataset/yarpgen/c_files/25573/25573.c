/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((var_10 & ((795 ? 4690 : var_10))))));
    var_14 = 56;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (((((~0) + 2147483647)) >> (var_5 - 15574235209155577144)));
                    var_16 = 127;
                    var_17 = (127 ? ((-127 ? 3035033376 : 127)) : 32766);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_8));
                                var_19 = (901166641 ? ((-((var_11 ? (arr_9 [i_0] [i_1] [i_1] [i_3]) : 1517181467)))) : ((2482371242 ? (-2147483647 - 1) : var_8)));
                                var_20 = ((((((((~(arr_11 [i_0] [1] [i_2] [i_3])))) ? var_11 : (arr_0 [i_2])))) ? ((var_6 * ((((arr_2 [i_4 - 2] [i_1 - 2] [i_1 - 2]) && var_6))))) : ((min((2818 && var_9), (var_9 == var_5))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
