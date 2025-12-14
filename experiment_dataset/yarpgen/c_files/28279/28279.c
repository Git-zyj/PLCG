/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max((max(187066407399167783, 60)), 4064)), 194));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((~((((~3555547980) <= (arr_5 [i_2] [i_1]))))));
                    var_14 = ((((((arr_8 [i_0] [0]) ^ var_7))) ? 12 : ((~(arr_8 [i_0] [i_0])))));
                    var_15 = (((((((max(var_1, (arr_4 [i_1] [i_2])))) ? var_0 : ((1419515512 ? var_6 : var_5))))) ? (min(var_9, var_1)) : (157 * 12)));
                }
            }
        }
    }
    #pragma endscop
}
