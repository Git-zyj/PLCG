/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((((1910024927 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? var_5 : ((5623336290889482613 ? 316797631440031705 : 1404)));
                arr_9 [i_0] [i_1] [i_1] = (!60350);
                var_13 = (max((((arr_0 [i_0] [i_0]) ? (!18129946442269519910) : 18446744073709551615)), 6563261573498593578));
                arr_10 [i_0] |= var_11;
            }
        }
    }
    var_14 = (~var_2);
    var_15 = ((var_10 + ((var_9 / (min(-1966801412, 18129946442269519903))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                var_16 += (min((arr_14 [i_2 + 3] [i_3 + 1]), ((var_3 ? var_8 : (arr_12 [i_2 + 4])))));
                arr_15 [i_3 + 2] [24] = var_11;
                var_17 = -20;
                var_18 = ((!(((-7741390140753591635 ? 1773140060 : 1)))));
                var_19 -= ((var_2 ? (min((~var_3), ((2195923012275686742 ? var_11 : -20)))) : (!var_0)));
            }
        }
    }
    #pragma endscop
}
