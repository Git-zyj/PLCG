/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] |= 11147875090245569627;
                var_10 = (min(var_10, (max(var_2, (((!((max(var_1, var_1))))))))));
            }
        }
    }
    var_11 |= ((((max((((var_2 ? 731281662 : var_8))), (var_5 ^ var_5)))) ? ((max(var_5, var_0))) : (min((var_3 >= var_7), var_3))));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_12 |= min(((max((arr_1 [i_2]), var_6))), (max((11147875090245569627 & var_8), (arr_6 [i_2]))));
        var_13 = (max(((((arr_6 [i_2]) ? ((max((arr_5 [i_2] [10]), (arr_2 [i_2])))) : var_9))), (((min((arr_6 [i_2]), -8799427415562261649)) | (((max((arr_5 [i_2] [i_2]), (arr_2 [i_2])))))))));
        var_14 = ((((6802382119972168829 | var_9) && (~var_4))) ? ((min(var_6, ((!(arr_1 [i_2])))))) : var_4);
        var_15 = ((!(((arr_6 [i_2]) <= (arr_6 [i_2])))));
        var_16 = ((((((max((arr_0 [1]), var_0))) ? (((((arr_0 [5]) == (arr_1 [i_2]))))) : ((var_0 ? var_1 : (arr_1 [i_2])))))) ? (var_8 || var_8) : (arr_6 [i_2]));
    }
    #pragma endscop
}
