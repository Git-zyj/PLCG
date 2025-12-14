/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (4524532977125837620 % (-27 - 49989));
    var_14 |= (((min((max(var_8, 4850378470395821327)), (~1))) >= (~1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((4850378470395821303 ? 4850378470395821339 : 60));
                arr_5 [i_1] [1] [i_1] = (max((((arr_1 [i_0] [i_1 - 2]) <= ((var_6 ? (arr_0 [i_0 + 2] [i_1 + 1]) : var_4)))), 1));
            }
        }
    }
    var_15 *= (((((var_9 * var_8) | (1 >= -1))) >> (-1002582285416762580 + 1002582285416762602)));

    for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [11] = (15534 - 4850378470395821322);
        var_16 += arr_7 [i_2 - 1] [i_2 - 2];
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = max(var_10, (arr_12 [i_2 - 3] [i_2 - 4] [i_2 - 2]));
                    arr_15 [i_3] [i_3] [i_4] = ((((var_6 ? (arr_2 [i_2] [i_3] [i_2 + 3]) : (arr_2 [4] [i_3] [i_2 - 3]))) > (!var_9)));
                    var_18 += (((arr_13 [16] [i_4] [i_4 - 1]) + var_5));
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((var_6 || ((min((!1), -1)))))));
        var_20 = (-127 - 1);
    }
    #pragma endscop
}
