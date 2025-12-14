/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((15 ? var_0 : var_6))) > (((((var_4 ? -7 : -2260743010481710729))) ? (23 % 7335) : var_0)))))));
    var_11 = min((min(1652962250, 232)), ((((43931 ? 1650920136 : 30)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2 + 1] = (((((((((arr_0 [i_1] [i_2]) - 233))) ? (((arr_6 [i_0]) ? (arr_5 [i_0] [i_2]) : (arr_3 [i_0] [i_1]))) : ((-(arr_6 [i_1])))))) ? (((arr_1 [i_1]) | (arr_1 [i_0]))) : 14));
                    var_12 = ((45266 ? (arr_0 [i_0] [i_2 + 1]) : ((((min(3229034773, 677513479)))))));
                    arr_8 [i_0] [i_0] [i_0] = 1;
                    var_13 = -1650920136;
                    var_14 = ((11 ? (arr_4 [i_2 + 1] [i_2 - 2] [i_2 + 1]) : 1065932496));
                }
            }
        }
    }
    var_15 = ((-var_7 ? -328797765 : var_1));
    #pragma endscop
}
