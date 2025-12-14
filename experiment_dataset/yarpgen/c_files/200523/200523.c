/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [11] [11] [i_2] = ((~(max(0, 2697491036880118890))));
                    arr_10 [i_0] [i_0] = (arr_2 [i_1 + 1]);
                    var_15 = (max(var_15, (arr_3 [i_1] [i_2])));
                }
                arr_11 [5] [5] = (((arr_8 [i_1 - 3] [i_1 - 3] [i_1 - 3]) + 9002));
                var_16 = 7711;
            }
        }
    }
    var_17 = ((((8239441024370540652 ? (max(var_9, var_4)) : ((17419572119535746125 ? var_14 : 2839836416027209787)))) < (var_2 * var_11)));

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_15 [i_3] = (((var_10 * var_11) < ((((arr_1 [i_3 + 1]) >> (((arr_1 [i_3 + 1]) - 2683400399)))))));
        arr_16 [10] |= (min((arr_4 [i_3] [i_3 - 1]), (((arr_4 [i_3] [i_3 - 1]) & 18446744073709551594))));
    }
    #pragma endscop
}
