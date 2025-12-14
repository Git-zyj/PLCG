/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((var_9 ? var_8 : (((((var_6 ? var_5 : 1)) | var_3)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [5] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] = (arr_0 [i_0] [5]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 += (max((min(((-5877066250782520776 ? 32477 : 6780896999505536225)), 9967203675198543317)), (arr_8 [i_0] [i_1] [i_2])));
                    var_18 = (min(var_18, (((+((((arr_9 [i_0] [1] [i_2] [i_2]) == (arr_9 [i_2] [i_2] [i_1] [13])))))))));
                    var_19 = (arr_8 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_20 = ((var_10 - (1 / 1)));
    #pragma endscop
}
