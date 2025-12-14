/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                var_16 = (max(((min(((var_15 ? var_0 : var_6)), (((var_12 ? var_11 : var_0)))))), var_9));
                var_17 = (((((-37747749119690757 == (((var_0 ? (-9223372036854775807 - 1) : 58218)))))) == var_15));
                var_18 *= (min(((((min(var_4, var_12)) == (((3989519009 ? var_11 : 0)))))), 346736460));
                var_19 = (346736460 == 10327153549778654676);
            }
        }
    }
    var_20 = (max(var_20, (max((((((min(var_12, -3))) ? var_8 : (1 == var_9)))), 0))));
    #pragma endscop
}
