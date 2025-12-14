/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max((((!(arr_0 [i_0] [i_1])))), (((((arr_2 [i_0] [i_1]) + 2147483647)) >> (4493609148511845469 - 4493609148511845438)))));
                arr_6 [i_1] = (min(((-(~-672246003))), (((arr_0 [i_1] [i_0]) ? (!-16) : ((max(80, (arr_1 [i_0]))))))));
                arr_7 [i_0] [i_0] = ((!(((var_0 ? (arr_3 [i_1]) : (arr_4 [i_0] [i_0]))))));
                var_18 = ((((((max(20945, 20923))) || (((arr_2 [3] [i_1]) || (arr_3 [i_0]))))) ? (arr_2 [i_1] [i_1]) : ((-((max(var_7, var_5)))))));
            }
        }
    }
    var_19 = ((~(var_6 * -var_8)));
    var_20 = (max((min(((-5126945067008301657 ? 5244265910295987939 : var_3)), ((min(255, var_3))))), var_1));
    #pragma endscop
}
