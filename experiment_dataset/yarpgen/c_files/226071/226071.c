/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] [i_1] = ((arr_2 [i_1]) / (((arr_2 [i_0 + 1]) ? (arr_2 [i_1]) : 0)));
                var_19 = (max((min((arr_3 [i_0 - 1]), var_1)), ((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 2]))))));
                var_20 |= (arr_1 [i_0] [i_0 - 1]);
                var_21 = ((((max(13726155067583924442, (((-(arr_5 [i_1] [3]))))))) ? (((6015 || (1051107814 + 1051107828)))) : (6144 / 1)));
                arr_7 [i_1] [i_0] [i_0] = ((((((((arr_5 [i_0] [i_0]) ? (arr_2 [7]) : (arr_4 [i_0 - 2] [i_0 - 1] [i_1]))) - ((var_3 ? 9662495406899267206 : (arr_0 [i_0])))))) ? var_3 : -975384086));
            }
        }
    }
    var_22 |= var_12;
    var_23 = (max(var_23, (((~(max((var_9 < var_8), (max(var_9, var_8)))))))));
    #pragma endscop
}
