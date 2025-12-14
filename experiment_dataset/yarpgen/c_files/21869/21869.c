/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = ((arr_3 [i_0]) ? (!83) : ((-((-2 ? 28 : (arr_1 [i_1 - 1] [i_1 - 1]))))));
                arr_4 [i_0] [i_0] = (min((arr_0 [i_0] [i_0 - 1]), (arr_0 [i_0 - 1] [i_1 + 1])));
            }
        }
    }
    var_17 = -784962129;
    var_18 -= var_3;
    var_19 = (((!(!7))));
    #pragma endscop
}
