/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1 - 1] = 13187281417545151197;
                arr_6 [i_0] = (((min(((14353697068608244168 ? var_4 : -6338)), (!3574593890))) | ((((arr_4 [i_1] [i_1 - 1]) ? (arr_4 [i_1] [i_1 - 2]) : (arr_4 [i_1] [i_1 - 1]))))));
            }
        }
    }
    var_10 = (((max((!720373406), (min(var_2, var_6))))) ^ -1);
    #pragma endscop
}
