/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [10] [i_2] = (((((((434479584330557014 ? var_2 : var_10))) ? ((((var_4 != (arr_0 [1]))))) : 8918945216960382233)) | (((((arr_2 [i_0 + 2] [i_1]) && 1)) ? (min((arr_3 [i_0] [i_1] [i_2]), (arr_0 [10]))) : (arr_2 [i_0] [i_1])))));
                    arr_9 [i_0] [i_1] [i_2] = (((arr_0 [i_0]) ? (arr_7 [i_2] [i_2] [i_1] [i_0]) : (min(var_9, ((12711629398399849498 >> (59877 - 59865)))))));
                    arr_10 [i_0] [i_0] [i_1] [i_0] = (var_8 * var_3);
                    arr_11 [i_0] [i_1] [i_0] = (((((arr_3 [i_2] [i_1] [2]) || ((!(arr_1 [i_0]))))) ? (((17628 != ((var_7 ? (arr_5 [i_0] [i_0] [i_2]) : var_3))))) : (((((arr_5 [i_2] [i_1] [i_2]) ? (arr_3 [i_0] [i_0] [i_2]) : (arr_0 [i_0])))))));
                }
            }
        }
    }
    var_11 = var_8;
    #pragma endscop
}
