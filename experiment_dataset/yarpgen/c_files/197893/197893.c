/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (min(19673, -1627945798));
                    var_11 = (max(var_11, ((((19683 ? 11 : -125))))));
                    var_12 = (min((min((((var_7 == (arr_0 [i_0] [i_1])))), (((arr_3 [i_1]) ? 19673 : (arr_3 [i_2 + 1]))))), 1));
                }
            }
        }
    }
    var_13 = var_3;
    var_14 *= var_4;
    var_15 = (min(var_15, var_3));
    var_16 = 19670;
    #pragma endscop
}
