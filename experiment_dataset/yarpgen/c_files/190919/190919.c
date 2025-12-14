/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_6 * 1922698735);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = min((((!var_10) ? (!var_9) : (max(8719976540820607818, var_14)))), ((((arr_3 [i_2 - 1]) < ((var_0 ? var_6 : var_10))))));
                    var_18 *= ((~(arr_0 [i_1])));
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = var_13;
    #pragma endscop
}
