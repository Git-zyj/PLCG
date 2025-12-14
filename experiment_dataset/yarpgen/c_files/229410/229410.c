/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = min((484793366714429053 / var_0), (-11252 | 1));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (arr_2 [i_0]);
                    var_14 = 33;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_15 = (max(((((arr_5 [i_1] [i_1] [i_1]) & (arr_5 [i_0] [i_1] [i_1])))), (16808759503482281596 * 34171)));
                        arr_13 [i_1 - 2] [i_2] [i_1] = 1;
                    }
                    arr_14 [i_1 + 1] [i_1] = 16808759503482281596;
                    arr_15 [i_0] [i_0] [i_0] [i_1] = 4294967295;
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        arr_20 [8] &= (min((arr_16 [i_4 + 1]), ((((((arr_19 [2] [2]) ? var_12 : 1)) - 211)))));
        arr_21 [i_4] = ((((max(16808759503482281568, 16808759503482281560))) ? ((4797370773619567113 << (13649373300089984502 - 13649373300089984472))) : (arr_18 [i_4] [i_4 + 1])));
    }
    #pragma endscop
}
