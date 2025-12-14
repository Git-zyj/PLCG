/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((18309696827105236656 > var_6) ? 65532 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_0]);
                arr_5 [i_0 - 1] [i_0] [i_0 - 1] = ((!((((arr_1 [i_0 + 1]) - (arr_1 [i_0 + 1]))))));
            }
        }
    }
    var_13 = (((((-90770895256698594 ? -90770895256698597 : 2858222756))) ? -var_1 : var_6));
    #pragma endscop
}
