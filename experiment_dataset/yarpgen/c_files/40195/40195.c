/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((!400853970) && (((((((arr_4 [7] [i_1]) ? (arr_0 [i_0 - 4] [i_1 + 1]) : var_7))) ? 11 : (!3607273739))))));
                arr_7 [i_0] = var_9;
                arr_8 [i_0] [i_0] [i_1] = (-((255 ? 208 : 7235673039276675530)));
            }
        }
    }
    var_15 = var_3;
    var_16 = var_3;
    #pragma endscop
}
