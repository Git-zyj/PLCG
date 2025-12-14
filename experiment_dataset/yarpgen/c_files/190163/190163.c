/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 = var_12;
    var_20 = ((!((min((127 & 1), ((var_5 ? var_3 : var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 |= 1;
                            arr_8 [i_3] [i_3] = var_11;
                            arr_9 [i_3] [i_1] [i_3] = (max(((-(arr_3 [i_0 - 4]))), var_2));
                        }
                    }
                }
                var_22 = var_14;
                var_23 *= ((((max(var_16, (min((arr_2 [i_1 - 2] [3]), (arr_7 [i_1])))))) ? ((((!(arr_1 [i_0]))) ? (arr_3 [i_0 + 3]) : (((var_6 >> (var_1 - 3149185328940388481)))))) : ((((((!(arr_3 [i_0])))) >> (((arr_3 [i_0]) + 67262496)))))));
            }
        }
    }
    #pragma endscop
}
