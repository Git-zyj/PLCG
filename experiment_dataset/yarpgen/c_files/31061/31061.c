/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -648043715;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_12 = ((((11984 ? 0 : 65535))) ? (((!(arr_5 [i_0] [i_0])))) : (((((arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3]) + 2147483647)) << (65505 - 65505))));
                        var_13 += (((((-(arr_8 [i_3 - 1] [i_1] [i_2] [0])))) && ((max(3041436136374913897, 30)))));
                        arr_10 [i_0] [i_0] = (((((var_0 ? 1269959702 : (arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])))) ? var_6 : 2851310693));
                    }
                    var_14 *= ((((((arr_5 [10] [10]) ? var_0 : (arr_5 [10] [i_2])))) ? (max(9189087880491526573, (30 < var_6))) : (~65531)));
                }
            }
        }
    }
    var_15 = var_3;
    var_16 = var_5;
    #pragma endscop
}
