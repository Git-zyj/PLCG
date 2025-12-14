/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [10] = (((arr_1 [i_0 + 3]) + ((1081400412 - (((var_10 < (arr_1 [i_0 - 1]))))))));
                var_12 |= 12468871967635236952;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 |= ((2894033767 << (4398044413952 - 4398044413945)));
                    var_14 = 12468871967635236952;
                    arr_9 [i_0 + 2] [0] [1] = 3;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [9] = ((min((arr_6 [i_0] [i_1] [i_1] [i_3]), (-32767 - 1))));
                    var_15 = 12468871967635236952;
                    var_16 = (min(((~(min((arr_2 [i_0 + 2] [i_1] [i_3]), (arr_11 [10] [i_1] [i_3] [9]))))), var_8));
                }
            }
        }
    }
    #pragma endscop
}
