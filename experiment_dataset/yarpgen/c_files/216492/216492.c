/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((((max(-44, 7)))) != ((226 ? 165 : 4121848583))))), var_7));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = (min((max(-484936167, var_8)), (arr_0 [i_0 + 1])));
        var_13 = var_0;
    }
    #pragma endscop
}
