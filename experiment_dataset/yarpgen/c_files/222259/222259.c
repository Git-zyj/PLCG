/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((var_1 % var_8) ? var_0 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 -= var_3;
                var_13 *= ((-(max(5900214953689686132, (((var_10 ? 80 : var_9)))))));
                arr_6 [i_0] = (max((((arr_0 [i_1]) ? (arr_1 [i_0] [i_0 + 1]) : var_1)), ((-(arr_1 [i_0 - 1] [i_0 - 1])))));
                var_14 = (max((max((arr_3 [i_0 - 1]), (min((arr_5 [0] [0] [i_1]), (arr_0 [i_0]))))), (((((((arr_2 [i_0 + 2]) ? 80 : (arr_5 [i_0] [i_1] [7])))) >= ((var_0 ? 1122369873 : (arr_2 [i_1]))))))));
                arr_7 [i_0] [i_0] [17] = (!43720);
            }
        }
    }
    #pragma endscop
}
