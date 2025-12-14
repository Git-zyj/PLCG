/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((!var_10) == var_3))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 &= 128;
                    arr_7 [i_2] [i_0] [i_0] = ((((min((((arr_1 [i_2]) ? var_5 : (arr_2 [i_0] [i_1] [9]))), var_7))) ? ((((!(((-14532 ? 126 : 14531))))))) : ((-14547 ? (!0) : ((var_4 ? 127 : 4294967278))))));
                    arr_8 [10] [i_1] = ((((((1 ? 14560 : 17)) <= (((min((arr_5 [i_2] [i_2] [i_2] [i_2]), 127)))))) ? ((((((-2147483647 - 1) ? -14574 : 4294967278))) ? ((var_2 ? (arr_5 [1] [i_1] [i_2] [i_1]) : (arr_5 [11] [i_1] [i_1] [11]))) : (arr_2 [i_0 - 4] [i_0] [i_0 - 4]))) : (min(((var_10 ? (arr_1 [i_0 - 3]) : (arr_1 [i_0]))), (arr_5 [i_2] [i_2] [1] [i_0 - 1])))));
                    var_16 = (min(var_16, 939653047));
                    arr_9 [i_2] [i_1] [i_0] = (((min(var_3, (arr_4 [i_0] [i_1] [4] [i_2]))) / (((min(var_6, (arr_3 [13] [i_0 - 3] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
