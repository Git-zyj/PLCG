/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (((((~(arr_2 [i_0 - 3] [i_0 - 1])))) ? (((var_1 << (((var_2 | 2079011382) - 96359077276234358))))) : ((~(arr_0 [i_0 + 1])))));
                arr_4 [i_0] [i_0] = (((((~(~var_2)))) & (((-28124 ^ var_7) ? (((arr_0 [7]) ^ (arr_2 [i_1 + 1] [i_0]))) : (~28101)))));
            }
        }
    }
    var_13 = (((((+(((-2147483647 - 1) / 2147483647))))) ? 32767 : (min((-2147483647 - 1), 3325285993691089478))));
    #pragma endscop
}
