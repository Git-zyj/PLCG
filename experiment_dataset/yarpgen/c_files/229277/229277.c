/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (min((min(18446744073709551615, 11907299520847734774)), ((min(((-114 ? var_6 : var_0)), (min(2147483647, -66)))))));
                var_11 = ((((!var_3) + var_5)) >> ((((((2147483647 ? ((var_0 ? (-2147483647 - 1) : var_0)) : 7)) - -2147483636)) + 29)));
            }
        }
    }
    var_12 = var_9;
    var_13 = ((var_8 ? var_2 : var_5));
    var_14 *= ((((min((max(2147483641, 86)), -453274942))) ? (((2 * 127) & (var_4 ^ var_2))) : (((!((max(var_4, var_5))))))));
    var_15 = ((var_4 ? (!31) : ((((-2147483642 ? var_7 : 1)) + (1996447166280782920 == var_1)))));
    #pragma endscop
}
