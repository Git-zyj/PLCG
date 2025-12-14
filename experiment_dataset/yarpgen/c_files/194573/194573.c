/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_16 ? (~var_3) : var_2)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (!4938272744274940068);
                var_19 = ((((((-4938272744274940069 ? 3754961428 : (arr_3 [i_0] [i_1]))) <= (arr_3 [i_0] [i_1])))) > 4294967294);
                var_20 = ((!(arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}
