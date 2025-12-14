/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 - 1] [i_0] = ((+((((arr_0 [i_0 - 2] [i_1]) || 3)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = ((-(((arr_10 [i_0] [i_0] [i_0] [19]) ? var_2 : -1))));
                            arr_11 [i_1] [i_1] = (((max((((arr_2 [i_3] [10] [i_0]) % (arr_1 [i_2]))), ((((arr_8 [21] [i_1] [i_1] [2]) || (arr_0 [i_3 - 2] [i_1])))))) <= ((max(((max(var_5, var_6))), (((arr_0 [22] [22]) ? var_6 : 713901004)))))));
                            var_12 = (max(var_12, 85));
                            var_13 = (max(var_13, (((~(arr_2 [i_0] [i_3 - 1] [i_2]))))));
                        }
                    }
                }
                arr_12 [i_1] = max(var_10, ((-(((arr_0 [i_0] [i_0]) ? var_7 : 255)))));
            }
        }
    }
    var_14 = 72;
    #pragma endscop
}
