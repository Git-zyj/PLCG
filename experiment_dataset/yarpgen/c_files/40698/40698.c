/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((max(1, 61440)), ((((max(var_8, var_5)) != (((var_11 ? var_10 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((((var_9 / 220) ? 220 : (-27161 == 40))) + 0));
                arr_6 [i_0] = -4294967286;
                var_14 = 27056;
            }
        }
    }
    var_15 = ((var_7 >= ((((14 && var_7) * -var_10)))));

    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_16 -= ((-21040 + ((-825 ? -29233 : 8881597155864051431))));
        var_17 = (max(var_17, (((-(-var_5 >= 4294967294))))));
        arr_9 [i_2] [i_2] = (((arr_2 [i_2]) * (((((var_1 == var_1) >= ((1 ^ (arr_1 [5])))))))));
        var_18 = ((max(((var_8 ? -12397 : (arr_3 [1]))), (~10628))));
        var_19 *= (((((var_7 == (~1)))) * (arr_1 [i_2])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_20 = max((((~(var_3 < 116)))), (((arr_10 [i_3]) ? (((-29241 ? (arr_11 [i_3]) : var_9))) : (var_2 - 4294967280))));
        var_21 = 31;
        var_22 -= ((((arr_11 [i_3]) / (arr_10 [i_3]))));
    }
    #pragma endscop
}
