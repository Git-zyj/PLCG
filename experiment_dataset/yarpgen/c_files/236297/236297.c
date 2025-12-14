/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 10373201186617448495;
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = ((var_7 ? (arr_3 [i_2 - 1] [i_1]) : (arr_3 [i_0] [4])));
                    arr_9 [i_0] [i_0] [i_2] = ((-5440277509550351029 ? 8073542887092103120 : 10373201186617448506));
                    arr_10 [i_1] [i_1] [i_1] = (((var_5 % var_3) ? (!var_9) : 461787166));
                    arr_11 [13] [i_1] [i_2] [i_2] = ((-(arr_1 [i_2 + 2] [i_2 + 2])));
                }
                arr_12 [i_1] [i_1] [i_0] = (((((arr_7 [i_1] [i_1] [i_1] [i_1]) ? (~var_6) : (var_8 | var_1))) > 461787166));
                arr_13 [i_0] [i_1] = 8073542887092103120;
                arr_14 [i_0] = var_1;
                arr_15 [18] = var_3;
            }
        }
    }
    var_12 = var_1;
    var_13 = var_8;
    #pragma endscop
}
