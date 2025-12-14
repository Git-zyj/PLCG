/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 *= (((var_7 == (min((arr_1 [i_0] [5]), var_10)))) && ((max((arr_0 [i_1 + 2]), (arr_0 [i_1 + 2])))));
                arr_6 [i_0] [i_1] [i_1] = (max((min((!1), (arr_2 [i_1 + 1] [i_1 - 2]))), ((min(var_10, ((min(var_16, 11806))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_20 = (((max(0, var_16)) <= (2047 * 21182)));
        var_21 = 7324612109635584056;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_22 = (max(var_22, ((max((max(((max(1, (arr_7 [i_3] [i_3])))), 16109952987396445723)), (((((min(2047, 2336791086313105907))) ? (((arr_2 [i_3] [i_3]) - (arr_9 [i_3] [i_3]))) : -21184))))))));
        var_23 = -19618;
        var_24 *= (((arr_11 [i_3]) ? var_3 : var_10));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_25 = (((arr_1 [1] [i_4 + 1]) > (arr_1 [i_4 + 1] [i_4 - 2])));
        var_26 = 1;
    }
    #pragma endscop
}
