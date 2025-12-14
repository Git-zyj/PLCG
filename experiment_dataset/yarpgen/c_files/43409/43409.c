/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((~(!var_11))), (min(1875513399, 3054308008549399621))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min((arr_4 [i_0] [i_1 + 1] [i_0]), (((!(((var_6 + (arr_3 [i_0])))))))));
                var_15 = (((~(arr_3 [i_0]))));
                var_16 = (max(var_16, (((15392436065160151970 <= ((~((var_3 ^ (arr_2 [i_0] [i_1]))))))))));
            }
        }
    }
    var_17 = var_2;
    var_18 = 98;

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] = ((((~(max((arr_1 [i_2]), (arr_6 [i_2] [2])))))) & ((((max(106, 9223372036854775807))) ? 16492573004167228345 : (arr_4 [i_2] [i_2] [i_2]))));
        arr_10 [i_2] = (arr_0 [i_2]);
        var_19 = ((0 ? -102 : 58));
        var_20 = (max(var_20, (((((var_10 ? var_5 : var_0))) ? (arr_7 [i_2]) : (((((arr_6 [i_2] [i_2]) + 2147483647)) >> (var_11 - 2173749304511859029)))))));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        var_21 = (max(var_21, ((((3054308008549399633 ? 2055153890 : 2147483647))))));
        var_22 = (max(var_22, (((arr_11 [i_3]) % var_1))));
    }
    #pragma endscop
}
