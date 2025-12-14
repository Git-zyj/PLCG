/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (~0)));
    var_17 = (!var_10);
    var_18 *= 2027788631;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 *= (arr_3 [i_1] [i_0]);
                    var_20 += (max(2147483647, (max(18321, (-2147483647 - 1)))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = (((((18446744073709551615 ? ((-10 ? 70 : 1958166788)) : -2147483647))) ? var_3 : ((((min(5, 15759))) ? (min((arr_0 [i_0]), var_14)) : (((min(var_6, (arr_4 [i_0] [i_0])))))))));
                }
                arr_8 [0] [0] &= 6750345063913466326;
                var_21 = (min(((min((arr_3 [i_1 - 2] [i_1 - 2]), 1345479324))), 0));
                var_22 = -2147483635;
            }
        }
    }
    #pragma endscop
}
