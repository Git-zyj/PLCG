/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = (min((var_13 != var_11), (min(0, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (228778105 - ((((arr_0 [i_1]) && (arr_0 [i_1])))));
                arr_5 [i_0] [i_0] = ((-710347539 || ((((~-710347539) >> (0 && 79020301))))));
                arr_6 [i_0] = (((((var_3 != (arr_4 [i_0] [i_0])))) % ((min((((arr_2 [i_0]) || var_1)), (arr_1 [i_0] [i_0]))))));
                var_22 = (min((arr_1 [i_1 + 2] [i_0]), -76761110));
                var_23 = arr_3 [i_0];
            }
        }
    }
    #pragma endscop
}
