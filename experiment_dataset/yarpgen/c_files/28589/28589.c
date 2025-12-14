/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [16] = ((1 << (2147483647 - 2147483621)));
                    var_14 = (((((arr_2 [i_0] [i_1]) != (!1242127443755850794))) ? (((((arr_3 [i_0] [i_1] [i_2]) >= var_2)))) : (min(4175015727529880058, 1139))));
                    arr_7 [i_1] = ((((((28648 < (arr_3 [i_0] [i_1] [i_1]))))) & ((var_1 / (arr_0 [i_1])))));
                }
            }
        }
    }
    var_15 = (min(var_0, ((-var_12 - (((min(22385, 1))))))));
    var_16 = (var_13 % var_13);
    var_17 = 4175015727529880058;
    #pragma endscop
}
