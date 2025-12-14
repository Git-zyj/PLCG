/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 &= (((arr_1 [i_0 + 1]) | (max((arr_2 [1] [i_1 + 1]), ((1595425383 ? var_3 : 14297))))));
                    arr_6 [i_0] [10] = 51216;
                }
            }
        }
    }
    var_13 = 14284;
    var_14 = (max(14297, ((~(max(var_0, var_1))))));
    var_15 = ((((((((153 ? var_10 : -23157))) ? var_10 : 2147483644))) ? (((((var_0 ? var_7 : 1)) == 14320))) : var_0));
    #pragma endscop
}
