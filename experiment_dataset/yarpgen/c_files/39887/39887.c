/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] |= ((1508650767220028732 ? 1 : 131461361));
                var_14 = (max(var_14, (((((4398046511103 ? var_4 : ((min(var_4, var_0)))))) ? ((65532 & ((var_2 ? var_13 : 122)))) : var_12))));
            }
        }
    }
    var_15 = (((((805205406394648294 ? -4475564678367834434 : 107))) ? (max(var_4, (17734739065945740407 % var_13))) : (((-var_12 ? (!var_10) : (!0))))));
    var_16 -= ((~((1 ? 11676523905861523559 : 3446514039))));
    #pragma endscop
}
