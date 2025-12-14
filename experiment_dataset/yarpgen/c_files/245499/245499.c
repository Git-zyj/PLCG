/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 374867103;
    var_15 = (!var_13);
    var_16 = (max(var_16, (((-(((!(((14570698943674601220 ? 14948011588517249701 : 21237)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((((((65472 ? var_4 : 4294901823))) ? 0 : var_13))) ? 65472 : (min(18446744073709551615, (((-5357885645198504776 ? var_9 : 7844288219156607870)))))));
                var_17 = (((min(65472, var_5)) - 1));
            }
        }
    }
    var_18 |= (((~(min(184, -6525666190810120289)))));
    #pragma endscop
}
