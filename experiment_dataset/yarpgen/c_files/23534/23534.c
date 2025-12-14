/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((((+(max((arr_1 [i_0]), (arr_4 [i_0] [i_1] [i_1]))))) != (((((!234) >= ((((arr_2 [i_0] [i_1 - 1] [i_0]) >= (arr_0 [i_1]))))))))));
                var_21 = ((((~(arr_1 [i_1 + 1])))) || (arr_1 [i_1 - 1]));
            }
        }
    }
    var_22 = (min(var_22, ((((var_18 - (0 + -1429845596475191321)))))));
    #pragma endscop
}
