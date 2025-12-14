/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 56;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [15] [i_1] = (max((min((min(34, (arr_0 [i_0]))), (arr_1 [i_1]))), (arr_1 [i_1])));
                arr_5 [i_0] [i_0] [12] = -6263;
                var_14 = (((((4179378488564903379 != (((max((arr_2 [i_1] [3]), var_6))))))) * (min(((min(var_5, var_6))), ((var_12 & (arr_2 [i_0] [i_0])))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] [11] [11] = ((((((var_6 ? 4179378488564903379 : (arr_3 [9]))))) * var_10));
                                var_15 = (min(var_15, ((((((+(min((arr_6 [i_3] [i_2] [12]), (arr_0 [i_0])))))) ? (((+((((arr_10 [i_1]) != var_10)))))) : (min(14267365585144648237, 1850480197)))))));
                                var_16 = (min(2, ((((min((arr_10 [i_2]), (arr_11 [i_0] [i_0] [15] [5] [i_2] [0])))) ? (arr_0 [i_0]) : (var_10 % 4799889922830384453)))));
                                var_17 = ((102 >> (var_10 - 154)));
                            }
                        }
                    }
                    arr_15 [i_2] [14] [i_2] = (var_9 * var_10);
                }
            }
        }
    }
    #pragma endscop
}
