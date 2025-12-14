/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (max(-8848343614553561895, ((((min(32754, 504))) ? ((var_9 ? 32756 : var_6)) : (max((-9223372036854775807 - 1), 16633))))));
                var_18 = (min(var_18, ((max(var_15, 1)))));
                var_19 = var_8;
            }
        }
    }
    var_20 -= var_3;
    var_21 = (((((255 ? (!6138955164114854152) : 65032))) ? ((((!(-28233 && 18020979243492279840))))) : 1068462041));
    var_22 = var_4;
    var_23 = (~var_17);
    #pragma endscop
}
