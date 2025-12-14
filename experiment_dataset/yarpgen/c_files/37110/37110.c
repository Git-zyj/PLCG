/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_1;
    var_13 *= 1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (min(var_14, (((!((max((var_11 - 53874), ((((arr_2 [i_0]) || (arr_0 [0]))))))))))));
        var_15 = (((var_9 + 11662) ^ -8714839156027918247));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((+((((max((arr_0 [i_1 - 1]), var_11))) ? ((-(arr_2 [i_1]))) : var_3))));
        arr_6 [8] |= (min((((((((1 != (arr_3 [i_1] [i_1]))))) * var_7))), (max(((((arr_0 [i_1]) | var_9))), (((arr_0 [i_1]) ? -1818146458906565027 : var_4))))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 = ((max((-27620 && 0), (min(var_3, (arr_2 [i_2 + 3]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_17 = (min(var_17, ((((max((((!(arr_13 [i_4] [i_3] [i_2 + 2])))), (arr_13 [i_2] [i_3] [0])))) ? ((~(arr_1 [i_2 + 3]))) : (max((arr_9 [i_2]), var_2))))));
                    var_18 = (~53874);
                    arr_16 [i_2] [i_3] [i_2] = -0;
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
