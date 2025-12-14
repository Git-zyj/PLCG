/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = (min(((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2 - 1]) * (arr_8 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_0])))), (~8451919828290006587)));
                            arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_0] [i_0] = (min((((var_6 ? var_8 : var_3))), -439067790));
                            arr_12 [i_0] [i_0] [i_0] = ((!((!(((1 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))))));
                            arr_13 [i_0] [i_1 - 1] [i_2 - 1] [i_3] = 7248658109899523962;
                        }
                    }
                }
                var_10 = ((((1 ? ((var_2 ? 9561993838199848495 : 4912702052150302784)) : ((max(-4912702052150302772, (arr_3 [i_0] [i_0]))))))) ? (((-(arr_8 [i_1 + 1] [i_0] [i_1 - 1] [i_0] [i_0] [i_0])))) : -9066721879861427109);
                arr_14 [i_0] [i_0] [i_1 + 1] = (max(((-((min(var_2, 15))))), (-7248658109899523968 != 1)));
            }
        }
    }
    var_11 = var_0;
    #pragma endscop
}
