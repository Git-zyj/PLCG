/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [18] [18] [i_1] = min(((min(969234667, (var_4 != var_7)))), ((-(min(6439502921981425871, (arr_1 [i_0]))))));
                var_18 ^= (min((((arr_0 [i_0]) >> ((((arr_3 [i_0] [i_0]) || (arr_0 [i_0])))))), ((max(((~(arr_2 [i_0] [i_0]))), (1 + -1289134707))))));
                arr_6 [i_0] [15] = (max(2412365226, 974071400));
                var_19 = (max(var_19, ((((max((min((arr_4 [i_1] [i_1] [i_0]), (arr_0 [i_0]))), (arr_1 [i_1]))) / (max(var_12, (arr_0 [15]))))))));
            }
        }
    }
    var_20 = var_6;
    var_21 = -1467541237;
    #pragma endscop
}
