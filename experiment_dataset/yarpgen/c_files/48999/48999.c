/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = ((~((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) == ((-(arr_0 [1] [1]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = (min((((arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), ((((-(arr_0 [1] [i_1])))))));
                    arr_8 [i_2] [i_2] = ((~(((arr_2 [i_2]) ? ((~(arr_0 [i_2] [i_0]))) : (arr_3 [i_0] [i_0 + 2])))));
                }
            }
        }
        var_19 &= ((~(arr_3 [i_0 - 1] [i_0 - 1])));
        var_20 *= ((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0 + 2] [i_0]) : (arr_5 [i_0 + 2] [1] [i_0 + 2])))) ? (((arr_5 [i_0] [i_0 + 1] [i_0 + 2]) ? (arr_5 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_0] [i_0] [i_0]))) : ((((!(arr_5 [i_0] [i_0] [i_0])))))));
    }
    var_21 = (min(var_21, var_9));
    #pragma endscop
}
