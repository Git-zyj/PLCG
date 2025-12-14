/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max(18404, -126)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (((((18404 ? -976601577 : 52))) ? ((max((((arr_5 [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : var_14)), (arr_4 [i_0] [i_0] [i_0])))) : ((var_7 ? var_7 : ((90 ? 8670321331196160945 : 5841284926749276934))))));
                    arr_6 [1] [1] [1] |= (((((arr_4 [i_0] [i_0] [i_1 - 1]) ? (arr_4 [i_0] [i_1] [i_1 + 1]) : (arr_4 [i_0] [i_1] [i_1 - 2])))) ? var_12 : (min(65, var_1)));
                    arr_7 [9] [i_1] [12] = (min(((min((arr_4 [i_0] [i_1 - 3] [i_0]), (arr_3 [i_0] [i_1 - 3])))), var_18));
                    var_21 = (arr_5 [13]);
                    var_22 = ((31300 ? -1270356069 : -1949812355));
                }
            }
        }
        arr_8 [i_0] = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_23 = ((((min((max(var_9, (arr_2 [i_0]))), (arr_0 [i_0])))) ? var_2 : ((max((arr_4 [i_0] [i_0] [i_0]), var_4)))));
        arr_9 [i_0] [i_0] = var_18;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_13 [i_3] = ((((min(var_1, var_5))) ? (arr_1 [i_3]) : ((var_1 ? var_6 : (arr_1 [i_3])))));
        var_24 += (((arr_10 [i_3] [i_3]) ? (arr_5 [i_3]) : var_4));
        var_25 = (min((max(1, (arr_10 [i_3] [i_3]))), ((min((arr_4 [12] [i_3] [i_3]), (arr_12 [i_3] [i_3]))))));
    }
    var_26 = var_13;
    #pragma endscop
}
