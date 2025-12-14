/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((+(max((arr_1 [i_0 + 3]), -1648921451))))));
                var_14 = (((var_3 == var_7) ? (~-8435060562124329293) : (~1277448139)));
            }
        }
    }
    var_15 = (((((((1277448139 ? 1277448143 : 2776218362))) ? ((1401413231302677181 ? var_1 : var_11)) : (~var_5))) != 1998047290));
    var_16 = var_5;
    #pragma endscop
}
