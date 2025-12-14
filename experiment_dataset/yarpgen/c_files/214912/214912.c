/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = (((((+(max((arr_3 [i_0] [i_0] [3]), 1))))) && ((((((-9145449935661381876 ? 1 : -4))) ? 226 : (((arr_4 [i_0] [3]) ? (arr_5 [i_0]) : (arr_1 [2]))))))));
                arr_6 [11] = (arr_0 [i_1]);
            }
        }
    }
    #pragma endscop
}
