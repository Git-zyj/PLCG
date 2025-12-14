/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((!240) >= var_8))));
    var_12 = ((146 ? 0 : 4224258805));
    var_13 = (min(var_2, var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [7] [i_0] [7] = ((min((max(-574902799, var_8)), -2253)) < var_2);
                var_14 = (min(var_14, ((max(((((arr_4 [i_0 + 1]) >= ((min(3286156326, (arr_2 [i_0]))))))), ((var_5 << ((((9973640933924766239 ? var_0 : var_2)) - 18443)))))))));
            }
        }
    }
    #pragma endscop
}
