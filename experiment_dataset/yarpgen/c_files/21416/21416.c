/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (min((((max(1, var_6)))), ((max(var_6, var_13)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = (min((min((70 - 3914297448), (((380669857 ? (arr_2 [16] [11] [i_1]) : (arr_2 [i_0] [i_1] [i_0])))))), ((min((arr_4 [i_0 + 1] [i_0 - 1]), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
            var_16 = ((((max(-8553258972080036577, 4256434444))) ? -812675647 : (((arr_2 [4] [i_1] [i_1]) << (((arr_2 [i_0 - 1] [i_0] [i_0 + 1]) - 119))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    {
                        var_17 = (arr_8 [i_3] [i_4]);
                        var_18 = (min((arr_10 [i_0 + 1]), ((759666517481805415 ? (1741685995 * 1) : 120))));
                        arr_13 [19] [19] [18] [i_3] [i_0] [i_2] = (~var_12);
                    }
                }
            }
            var_19 = var_1;
            arr_14 [i_0] = ((!(((6230528021672284287 ? 3153148856320662344 : 0)))));
        }
        arr_15 [i_0] = ((var_4 ? (((min((arr_12 [5] [i_0 - 1] [i_0] [6] [16]), (arr_12 [9] [i_0 - 1] [i_0] [i_0] [i_0]))))) : ((8553258972080036576 ? 380669848 : -19897))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_18 [10] [i_5] = ((-(arr_3 [i_5])));
        var_20 = (arr_6 [i_5] [i_5] [18]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = (((arr_19 [i_6]) ? ((45056 ? -2129306632 : (arr_20 [i_6]))) : (~15)));
        var_22 = (min(var_22, var_13));
        arr_21 [i_6] = max((min(9533648302114854496, 1)), (((((((var_5 < (arr_19 [i_6]))))) == var_10))));
    }
    #pragma endscop
}
