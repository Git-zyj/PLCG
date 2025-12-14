/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (207 ? ((min(var_6, -32))) : var_8);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = ((((min((arr_5 [i_0]), (arr_5 [i_0])))) ? ((((arr_5 [i_0]) <= 0))) : 109));
                    arr_8 [i_0] [i_0] [8] &= ((~((21 ? ((min(15, -61))) : -122))));
                    arr_9 [i_0] [i_1] [i_0] = ((-30 ? ((2147483647 ? -2147483647 : 65517)) : ((3882488514199319796 ? (arr_4 [i_0] [i_0] [i_0]) : 496))));
                }
            }
        }
    }
    var_12 += (((!126) ? ((((-8 * var_7) + var_5))) : (max(var_6, ((11744764727256302120 ? 11744764727256302120 : -12804))))));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                {
                    var_13 = (((~272678883688448) * (-2147483647 - 1)));
                    var_14 = ((11163 ? 31 : 1));
                    arr_16 [i_3] = (min((min((arr_10 [i_3 - 1]), (var_4 * var_8))), (((-var_4 ? (!9) : -127)))));
                }
            }
        }
    }
    #pragma endscop
}
