/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!23265);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_0 [i_0 - 2]);
                arr_6 [i_0] [i_0] [i_1 + 1] = (min((arr_2 [i_0 + 1]), ((~(~8160)))));
                arr_7 [i_0] [i_0] [i_1 - 2] = (arr_2 [i_1]);
            }
        }
    }
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {
                    arr_14 [i_4] [i_4] [i_4] [i_4] = (((min(-8878920269799048542, 23265)) | ((((arr_12 [i_4 - 1] [i_4 - 1] [i_4 + 1]) - 23265)))));
                    arr_15 [i_2] [i_3] [i_4] = (!1692752943);
                }
            }
        }
    }
    var_12 = ((var_0 > (217 == 23265)));
    #pragma endscop
}
