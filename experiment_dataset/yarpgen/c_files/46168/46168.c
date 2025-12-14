/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (max(var_12, (((((min(var_5, (~1760907552)))) ^ (var_1 % var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (min(((max(7071, 7060))), (((min((arr_3 [i_0] [13]), (arr_0 [i_1]))) % (min(18000910114701619254, 4647))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((~var_4) <= (max((max((arr_1 [i_0]), 11781381816559542041)), (18000910114701619254 >= -1713203865))));
                                var_15 = (((var_7 | -1713203865) | (12906663122018981042 | 4647)));
                                var_16 = (min(var_16, ((((18000910114701619241 % -7076) > ((((arr_8 [12] [i_3 + 1] [i_1 - 1] [12]) << (((arr_6 [i_0 + 2] [i_1 - 1] [i_1] [i_2 - 2]) - 1442208575538161065))))))))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, ((max(((11781381816559542041 | (((arr_10 [i_0] [i_0] [i_0] [i_1 - 2] [8]) << (((arr_2 [i_1 - 2]) - 9460)))))), ((max((min(-443389308, 4647)), (!var_2)))))))));
            }
        }
    }
    var_18 = (min((min(var_10, var_10)), -1780416481));
    var_19 = (min((max(var_4, var_8)), (max(2681191463, -1780416487))));
    #pragma endscop
}
