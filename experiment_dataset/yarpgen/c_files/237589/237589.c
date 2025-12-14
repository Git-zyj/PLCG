/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = ((((((max(23528, var_7))) > 23525)) ? (7168 & 41994) : (((!42007) | (!3502405678)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_0] = arr_1 [i_0];
            arr_5 [i_0] [i_0] [i_1] |= ((23527 ? (arr_1 [i_0]) : (arr_1 [i_0])));
            var_11 = ((var_5 ? (((42031 ? 42010 : (arr_2 [i_0] [i_1])))) : (arr_1 [i_1])));
            arr_6 [i_0] [i_0] [i_1] = (((var_3 * var_5) ? (arr_3 [i_0] [i_0]) : var_5));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_0] = (41987 | 23524);

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_12 = (((-(65514 >= 41983))));
                var_13 ^= (~var_4);
            }
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_14 = var_9;
                            var_15 = (min(var_15, (15872 / 65511)));
                        }
                    }
                }
            }
            arr_20 [10] [10] = 65408;
        }
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            arr_24 [i_7] = ((32736 < ((989005275 ? 24209 : 0))));
            var_16 = (min(var_16, (((15890 ? 156 : 42007)))));
        }
    }
    var_17 = ((var_3 ? (((((((var_7 ? 5723 : 34612))) || (((29941 ? 41328 : 3343863893))))))) : 10));
    #pragma endscop
}
