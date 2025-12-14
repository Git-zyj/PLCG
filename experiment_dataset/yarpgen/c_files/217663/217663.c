/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((((((((5264010928957464341 ? -111 : (arr_3 [i_0] [i_0])))) ? 2388297846 : (-127 - 1)))) ? (~883835501) : (((arr_3 [i_0] [i_1]) ? -9223372036854775799 : (arr_3 [i_0] [i_1])))));
                var_20 = 5077800049883742973;
                arr_5 [i_1] [i_0] = ((+(((arr_2 [i_0] [i_1]) ? 1 : (arr_1 [i_0])))));
            }
        }
    }
    var_21 = var_11;
    var_22 = (min(var_22, (((5077800049883742988 ? 1366641590 : 29)))));
    #pragma endscop
}
