/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(((max((var_7 >= var_11), var_4))), (~2691167513092116875)));
    var_15 = (((max(4294967295, (~-93))) << (-93 + 96)));
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 += ((~((~(arr_1 [i_0 + 1] [i_1 + 4])))));
                            var_18 = (max(var_18, 107));
                            var_19 += ((((((min((arr_12 [i_1 + 4] [i_0 + 2] [i_0 + 1]), (arr_12 [i_1 + 3] [i_0 - 1] [i_0])))) + 2147483647)) << (19102 - 19102)));
                            arr_14 [i_1] = ((+(((arr_12 [i_0] [i_2] [i_3]) / (arr_12 [1] [i_2] [i_3])))));
                            arr_15 [5] [i_0 - 1] [i_0 - 1] [i_2] [18] [i_0 - 1] = ((((max((arr_11 [i_0] [i_0 - 1] [i_1 + 3] [i_1 + 3]), (arr_9 [i_0 + 2])))) ? ((8922 ? 9565556431692419933 : (arr_5 [i_1 + 2] [i_1] [i_1]))) : (max((arr_5 [i_0] [i_1 + 2] [i_2]), -19102))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, (max(0, 41))));
    #pragma endscop
}
