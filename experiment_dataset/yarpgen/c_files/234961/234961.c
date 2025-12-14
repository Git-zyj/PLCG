/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 * ((-var_6 ? ((min(var_2, 53497))) : ((min(28, 228)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (1024832452 / 23)));
                arr_6 [i_0] = (((-32765 + 0) != 0));
                var_18 = (-5373808201826331888 || 9527);
            }
        }
    }
    var_19 += -1;
    var_20 = ((65535 > (var_9 > var_13)));
    #pragma endscop
}
