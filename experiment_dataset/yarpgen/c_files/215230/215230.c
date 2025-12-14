/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_1] = ((max(((28276 ? 35676 : (arr_4 [i_1])), (39302 || 26245)))));
                    arr_8 [i_0] [i_0 + 1] [i_1] = ((((((arr_1 [i_1]) >> (((arr_4 [i_1]) - 84))))) ? ((max(28276, 26233))) : 28271));
                    var_12 |= (min((max((arr_4 [i_1 - 1]), ((4943375070479331170 ? (arr_5 [i_1] [i_1] [i_2 + 1]) : var_10)))), (arr_3 [i_0])));
                }
            }
        }
    }
    var_13 = (min(var_13, (max(39302, 28271))));
    var_14 = (min(65535, ((var_9 << (((~12246788943954202501) - 6199955129755349112))))));
    #pragma endscop
}
