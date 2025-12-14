/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (max((((((~(arr_2 [i_0 - 1] [i_1])))) ? ((11816462551522997739 * (arr_5 [22]))) : ((max(var_8, var_13))))), ((((((-(arr_5 [i_0])))) ? (11816462551522997741 || var_4) : ((var_1 << (((arr_6 [i_2] [i_1] [i_0]) - 3482011558411812671)))))))));
                    var_15 = ((((-370277328 || (((-617594113 ? (arr_4 [i_1]) : var_10))))) ? var_2 : ((((var_13 == (arr_7 [i_0 + 1] [i_1 + 2])))))));
                }
            }
        }
    }
    var_16 = 2147483647;
    var_17 = var_7;
    var_18 = var_0;
    #pragma endscop
}
