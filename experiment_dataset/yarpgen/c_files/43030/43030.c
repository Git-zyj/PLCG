/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((max(10974811383312967147, (~var_10))) << (!var_7)));
                    arr_9 [i_2] [i_2] [i_1] [i_2] = (arr_3 [i_1]);
                    var_13 = (((8538619788372708566 ? var_3 : 1329548508)) < ((+(min((arr_6 [i_2]), (arr_3 [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_14 -= (max(((((arr_14 [12] [i_4] [i_4]) ? (arr_5 [i_3 - 2]) : var_8))), (max((max(var_9, (arr_5 [4]))), var_5))));
                var_15 -= var_11;
                arr_16 [i_4] [i_4] = ((((((arr_0 [i_3 - 1]) / 32))) ? (arr_7 [i_4] [i_3]) : (max((max((arr_1 [i_3 - 1]), (arr_15 [8] [8]))), ((max(var_1, 226346486)))))));
            }
        }
    }
    #pragma endscop
}
