/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (~(~var_2));
    var_11 = (((((var_3 >> (9066776510989959497 - 9066776510989959469)))) ? (max(((var_4 ? 56116 : var_7)), var_4)) : (max(((var_8 ? var_2 : var_3)), (max(1206901546, 2079785242))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((min(((((((arr_4 [3]) ? 0 : -9223372036854775797))) ? (var_4 - var_9) : (max(443755242237424524, (arr_7 [i_1]))))), (arr_1 [i_2 + 1]))))));
                    var_13 ^= (arr_4 [i_2 + 1]);
                    var_14 ^= (((((((max(var_2, var_3))) ? (max((arr_2 [6]), var_5)) : var_0))) ? 17171699972726613241 : (arr_6 [i_0] [i_0] [i_2 + 1] [2])));
                    arr_8 [i_0] [i_1] [12] [12] = (((((~(arr_1 [i_2 - 1])))) ? ((max((arr_7 [10]), (arr_1 [i_0 - 2])))) : (((arr_7 [i_1]) ? (arr_7 [i_0 - 2]) : (arr_5 [i_2 + 1] [i_1] [i_0 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
