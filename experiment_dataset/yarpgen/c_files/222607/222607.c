/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((-((+(max((arr_6 [i_0] [i_2] [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
                    arr_8 [i_0] [i_0] = 4265872178;
                    arr_9 [i_0] = ((min(((((arr_0 [i_0] [i_2]) ? (arr_3 [i_1]) : 126))), (((arr_3 [i_1]) ? 29095118 : var_4)))));
                    var_11 = (arr_0 [i_0] [i_2]);
                }
            }
        }
    }
    var_12 = var_8;
    var_13 = (((((var_10 ? (max(226772543, var_1)) : var_10))) ? ((var_1 ? ((var_0 ? var_1 : 4265872178)) : 9223372036854775797)) : (-6 <= 15)));
    var_14 &= (min(var_9, ((((var_10 ? var_1 : 4080970681)) % 213996615))));
    #pragma endscop
}
