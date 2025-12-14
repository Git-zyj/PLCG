/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (max(((var_0 >> ((((min(-1, 36912))) - 36909)))), (max((~1), (~var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (((((((arr_0 [i_2]) ? 28631 : var_8))) ? (max(var_3, 0)) : (arr_4 [i_1 - 1] [i_1] [i_1 - 1]))) == (arr_6 [i_2] [i_0] [i_0]));
                    var_15 = (((((-(min(var_3, 1))))) == (arr_0 [i_2])));
                    var_16 = (((min((arr_7 [i_1 - 1]), (arr_7 [i_1 - 1]))) ? (var_4 < var_5) : (arr_7 [i_1])));
                    var_17 ^= ((!((min((var_4 * 0), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
