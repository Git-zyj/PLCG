/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((min(var_6, var_4))) ? (max((arr_2 [i_0 + 1]), ((((arr_1 [11]) ? var_1 : var_4))))) : ((((!(arr_3 [i_0 + 1] [i_0 + 1])))))));
                var_10 = (!var_7);
            }
        }
    }
    var_11 = var_5;
    var_12 = ((min((var_9 > var_7), ((6261774016067972210 ? 8645130357339223214 : var_7)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_13 &= ((~(arr_3 [i_2] [i_2])));
                var_14 = (min(var_14, (((+(min((min((arr_0 [i_2] [i_3]), var_3)), (((1 ? var_6 : -1))))))))));
                arr_13 [i_2] [i_2] [i_2] = ((!((!(var_3 || 12223002638515042846)))));
            }
        }
    }
    var_15 = -5011;
    #pragma endscop
}
