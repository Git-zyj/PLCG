/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((max(var_2, var_11))))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [1] [1] = ((~(arr_1 [i_0 + 1])));
        var_17 = (max((((-38 ? (!-1015612602697120722) : ((-(arr_1 [i_0])))))), (arr_0 [i_0 - 2])));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_18 += (arr_4 [6] [i_1]);
        var_19 = (arr_5 [i_1 + 1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_20 = ((((-1015612602697120722 ? ((max((arr_7 [i_1] [i_1]), (arr_8 [i_1] [i_3])))) : ((~(arr_11 [i_2] [i_2]))))) * (arr_9 [i_2])));
                    arr_14 [i_2] = (((((arr_12 [i_2]) == (arr_12 [i_2]))) ? ((+((max((arr_12 [i_2]), var_11))))) : (max(var_13, (~var_7)))));
                    var_21 = (arr_10 [i_2] [i_3]);
                    var_22 ^= (arr_6 [i_1 + 3] [i_1 + 3]);
                }
            }
        }
    }
    #pragma endscop
}
