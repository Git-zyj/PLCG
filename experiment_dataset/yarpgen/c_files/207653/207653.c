/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_0] = (var_7 < 73);
                    arr_8 [i_0] [i_2] [3] [i_2] = ((((((arr_0 [i_0 + 1] [i_2]) ? (arr_0 [i_2 + 1] [i_1 - 2]) : (arr_0 [i_0] [i_2])))) ? (max(2251798739943424, (arr_0 [i_2] [i_0 + 2]))) : (max(var_4, 13727473639574705531))));
                }
            }
        }
    }
    var_11 = (!var_4);
    #pragma endscop
}
