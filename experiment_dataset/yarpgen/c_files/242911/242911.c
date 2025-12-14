/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(7884188189102448837, 10121502640725936890);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [12] = (min(6845812730202645441, 8522801455105041586));
                    arr_10 [i_0] = (11109832016801650681 | 726274046);
                }
            }
        }
    }
    var_20 = var_4;
    var_21 = (~((~(min(var_18, var_2)))));
    #pragma endscop
}
