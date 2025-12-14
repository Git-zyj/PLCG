/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    var_14 = (((max(-11942, (var_3 + 34091302912))) % (arr_0 [i_0] [i_0])));
                    var_15 = ((2473226347707365496 - ((max(((((arr_1 [i_0] [i_0]) / (arr_3 [i_0] [i_0] [i_2 - 2])))), var_12)))));
                    var_16 = ((2473226347707365496 % (((max((arr_1 [i_1] [4]), var_13))))));
                    arr_6 [i_0] [i_1] [i_1] = ((((max(1048560, var_5))) ? (((((65535 ? var_9 : var_1))) ? (2588164315 * -11945) : var_5)) : (((var_13 ? (!-1781294185) : var_3)))));
                    var_17 = ((!((((((var_0 * (arr_5 [i_0] [i_1] [1])))) ? (15973517726002186120 >= 2057894057) : (arr_2 [i_1] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_18 |= ((((((arr_0 [i_3] [i_3]) & -23906))) ? ((min((arr_0 [i_3 - 3] [i_3]), var_8))) : ((min((min((arr_10 [i_3] [i_3] [i_3]), (arr_4 [i_4] [i_3 + 1]))), -107)))));
                arr_11 [i_3] [i_4] [i_4] = ((arr_9 [i_3 - 1] [i_4] [i_4]) ? (((arr_7 [i_3 - 4] [3]) ? (arr_7 [i_3 + 1] [i_3 + 1]) : var_4)) : ((var_7 ? (arr_7 [i_3 - 4] [i_4]) : var_8)));
                var_19 = ((!((max(((max(var_4, var_2))), (max(8191, var_9)))))));
            }
        }
    }
    #pragma endscop
}
