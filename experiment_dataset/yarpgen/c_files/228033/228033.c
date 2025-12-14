/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((!var_10), ((var_1 ? var_7 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (0 % 2109086367);
                var_16 = (((((~(((arr_0 [i_0] [i_1]) ? 1310484900 : var_7))))) ? var_12 : (arr_2 [i_1])));
                var_17 *= ((((((((((arr_3 [i_0] [i_1]) > var_10)))) + ((-1977095229563196491 - (arr_2 [i_1])))))) ? (arr_1 [i_0]) : (((arr_0 [i_0] [i_1]) ? ((((arr_3 [i_0] [i_1]) ? -8012059761766166490 : (arr_3 [i_0] [i_0])))) : (min(var_9, 14620930142405159211))))));
                arr_6 [i_1] [i_1] [i_0] = var_14;
                var_18 = ((((arr_2 [i_0]) - (arr_2 [i_1]))));
            }
        }
    }
    var_19 = ((1712387136727092446 == 1) > var_10);
    var_20 = var_1;
    #pragma endscop
}
