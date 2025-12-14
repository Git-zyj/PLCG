/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [5] [i_0] = (((arr_3 [i_0] [i_1]) ? (((arr_3 [i_0] [i_0]) / (arr_3 [i_0] [i_1]))) : (arr_3 [i_0] [i_1])));
                    var_18 = (min((((((28369 ? 2067606453 : (arr_4 [i_0] [i_0]))) << (((arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) - 3))))), (min((min((arr_0 [5]), var_11)), ((((arr_3 [1] [i_0]) << (-1027640818 + 1027640832))))))));
                }
                arr_8 [i_0] [i_0] [i_0] = (((-1027640818 + 2147483647) << (((arr_1 [i_0]) - 165))));
            }
        }
    }
    var_19 -= var_6;
    var_20 = ((var_17 ? var_7 : ((var_13 ? var_10 : 13965203367329439871))));
    #pragma endscop
}
