/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_14 ? (((((max(var_15, 14336)))) ^ ((var_2 ? -492183429 : var_10)))) : var_11));
    var_20 &= var_17;
    var_21 = ((min(((min(var_12, -492183429)), var_17))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!((min(116, var_13)))));
                var_22 += ((-((100 ? ((min((arr_3 [i_1] [i_1]), var_14))) : (max(var_14, 846787091))))));
                var_23 = (max(var_23, (!1006436617)));
                var_24 ^= max((((!((max(var_13, (arr_1 [i_1]))))))), var_10);
                var_25 |= ((-117 + 2147483647) << ((((min(91, (arr_1 [i_0])))) ? ((min(var_2, (arr_3 [i_0] [i_0])))) : (((arr_4 [i_0] [i_0] [i_1]) ? (arr_1 [i_1]) : 31)))));
            }
        }
    }
    var_26 = var_14;
    #pragma endscop
}
