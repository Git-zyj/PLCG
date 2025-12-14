/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = ((((((((arr_3 [i_1] [i_1] [21]) ? var_9 : var_1))) ? (arr_1 [i_0]) : ((var_2 ? (arr_1 [i_0]) : -1755))))) ? 182 : ((6648820325292782531 + ((9024053102299568674 + (arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_15 ^= ((min(1, -4)));
                            var_16 = (((((((!var_0) - var_4)) + 2147483647)) << (((1 < var_9) - 1))));
                            var_17 = (arr_7 [i_0]);
                        }
                    }
                }
                var_18 = (((arr_7 [1]) ? (((1 == 14007385450666239247) ? -2933290845169490307 : (~var_3))) : (((((arr_1 [i_0]) && (arr_8 [i_1] [i_1] [i_1] [i_0 + 2] [i_0 + 2] [i_0 + 2])))))));
                var_19 = (((((arr_7 [i_0 + 2]) ? ((((arr_0 [i_1]) || (arr_2 [i_1])))) : (arr_4 [i_0]))) >> (5933105511635727371 - 5933105511635727347)));
            }
        }
    }
    var_20 = (((!var_10) <= var_5));
    #pragma endscop
}
