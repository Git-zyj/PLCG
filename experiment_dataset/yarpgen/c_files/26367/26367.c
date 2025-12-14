/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = ((((var_7 < ((var_0 ? -21962 : -1566392449381144030)))) ? (arr_4 [i_2]) : ((((var_2 ? var_14 : (arr_9 [i_0] [i_0])))))));
                    arr_10 [i_0] [7] [i_1] [i_2] = ((max((!var_11), (min((arr_2 [3] [2]), 1566392449381144030)))) * (((((1566392449381144036 ? (arr_6 [i_2]) : (arr_6 [i_1])))) ? (~-8704453577171081015) : 2041973942)));
                }
            }
        }
    }
    var_20 = (max((~var_12), ((((23069 < 21067) > (max(var_5, 1965886029)))))));
    var_21 |= var_12;
    #pragma endscop
}
