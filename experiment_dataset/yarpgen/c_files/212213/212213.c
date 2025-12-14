/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (i_0 % 2 == 0) ? (((((((-9223372036854775807 - 1) << (((arr_8 [i_0] [i_0] [i_0] [i_0]) - 892097206))))) | (((arr_3 [i_0]) ? 18446744073709551608 : (arr_3 [i_0])))))) : (((((((-9223372036854775807 - 1) << (((((arr_8 [i_0] [i_0] [i_0] [i_0]) - 892097206)) + 926070169))))) | (((arr_3 [i_0]) ? 18446744073709551608 : (arr_3 [i_0]))))));
                    var_13 = (arr_5 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
