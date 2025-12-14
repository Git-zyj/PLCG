/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [10] [i_0] [i_0] = 8817;
                arr_7 [i_0] [i_0] = (min(((max((max((arr_2 [i_1]), (arr_0 [i_1] [i_1]))), (arr_4 [i_1] [1] [i_1])))), 1944342932));
            }
        }
    }
    var_10 = ((-(14048390051007110855 < 29683)));
    var_11 = ((var_2 ? ((((var_0 != ((14048390051007110861 ? 14048390051007110876 : 3)))))) : (min(14048390051007110855, (((14048390051007110830 ? var_2 : 1685495221)))))));
    #pragma endscop
}
