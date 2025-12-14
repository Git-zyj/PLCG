/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((203 < ((-122 ? 8053101381094924688 : (arr_4 [i_0] [8] [i_0])))));
                arr_6 [1] [i_1] [i_0] = -113;
            }
        }
    }
    var_21 = ((-26876 ? 166 : -113));
    var_22 = (var_14 / var_2);
    var_23 = (min(var_23, (((104 ? 62300 : -117)))));
    #pragma endscop
}
