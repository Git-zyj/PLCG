/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(var_6, 31137)));
    var_16 = (min(var_16, (((var_5 == (((var_11 ? -383 : -32666))))))));
    var_17 = (min(var_17, (((var_0 / ((((384 ? 373 : 6913)) + var_7)))))));
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = -2251799813685246;
                var_19 = (min((((((max((arr_2 [i_0]), (arr_4 [i_0] [i_0] [i_1])))) <= (max((arr_5 [4] [i_1]), 18444492273895866369))))), (arr_0 [i_0] [i_1])));
                arr_7 [i_0] = (((arr_3 [i_0] [i_1] [i_1]) * (~var_12)));
                var_20 = (max(var_20, ((max((((6913 >= (-127 - 1)))), (max((((arr_2 [i_1]) ? (arr_1 [i_0]) : (-32767 - 1))), ((max(372, (arr_2 [i_0])))))))))));
            }
        }
    }
    #pragma endscop
}
