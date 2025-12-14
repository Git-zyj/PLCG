/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_15 ^= ((((237 < (0 < var_3))) ? ((4307 | (~var_5))) : ((~(((arr_3 [8]) - 4318))))));
                var_16 = ((((min(112, ((((arr_0 [i_0] [i_1]) && (arr_1 [i_0]))))))) || ((((arr_0 [9] [i_1 + 1]) ? (arr_0 [3] [i_1]) : (arr_0 [i_0] [i_0]))))));
            }
        }
    }
    var_17 = (max(var_17, (~4294967295)));
    var_18 = ((((((0 * var_6) < (!var_9)))) | -var_1));
    var_19 = (max((!var_11), (((((1 ? var_6 : var_8))) ? (107 != var_3) : (11984940867351031381 != var_4)))));
    var_20 ^= ((((61229 / 1896610717) / var_6)));
    #pragma endscop
}
