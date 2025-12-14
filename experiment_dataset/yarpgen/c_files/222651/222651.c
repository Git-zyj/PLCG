/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = 1898810538;
                arr_6 [i_0] [i_0] [i_0] = (max(((-(~2396156757))), var_1));
                arr_7 [9] [9] [i_0] = ((-(max((((arr_4 [i_1 + 1] [i_1] [i_0]) ? 60396 : var_10)), ((var_8 ? 2396156757 : var_1))))));
                var_13 -= ((max(1, (arr_0 [i_0 - 1] [i_1 + 4]))));
                var_14 = (min(var_7, ((((((arr_0 [i_0 - 3] [i_0 - 3]) ? 1 : 103))) ? (var_3 | 173) : ((min(115, 124)))))));
            }
        }
    }
    var_15 ^= var_3;
    #pragma endscop
}
