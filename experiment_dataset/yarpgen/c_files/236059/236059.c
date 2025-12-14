/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (var_6 && var_8)));
    var_16 = (((min(((var_4 ? var_3 : 0)), var_11)) ^ ((((max(var_9, -1303316635))) ? var_1 : (((var_3 ? var_6 : var_6)))))));
    var_17 = (((((((min(var_14, var_0)) != var_6)))) / (((var_0 ? var_0 : 9014789958074841003)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((-var_4 <= (max((arr_8 [i_2]), ((var_10 ? var_12 : (arr_8 [i_2])))))));
                    var_19 = (min(var_19, ((((arr_9 [6] [6] [i_0]) >= ((((((arr_4 [i_2] [10]) ? (arr_3 [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_0] [i_0])))) ? ((var_9 ? 235750648543142542 : (arr_3 [i_0] [i_1]))) : (18210993425166409082 < var_6))))))));
                    var_20 = ((var_11 ? ((-(arr_9 [i_2] [i_1] [i_2]))) : ((87 ? 59040 : 1))));
                    arr_10 [1] [i_1] [i_2] = min((((arr_5 [i_1]) ? (min((arr_8 [i_2]), (arr_8 [i_2]))) : ((~(arr_5 [i_1]))))), (arr_9 [i_2] [13] [i_2]));
                }
            }
        }
    }
    #pragma endscop
}
