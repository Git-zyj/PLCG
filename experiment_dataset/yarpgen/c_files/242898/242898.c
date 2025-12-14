/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_10 ? ((max((-127 - 1), 23264))) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 *= (min(((min((arr_2 [3] [i_1]), (arr_1 [i_0])))), ((((((arr_5 [i_1] [i_1]) ? (arr_0 [19]) : (arr_6 [i_0] [i_0])))) ? (arr_0 [i_2]) : ((-(arr_5 [i_0] [i_0])))))));
                    var_15 = ((-((max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))))));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = 42272;
                    arr_10 [i_1] [5] [i_1] = ((((var_5 ? var_12 : (arr_6 [18] [i_0]))) > ((~(arr_0 [i_2])))));
                    var_16 = 18446744073709551615;
                }
            }
        }
    }
    #pragma endscop
}
