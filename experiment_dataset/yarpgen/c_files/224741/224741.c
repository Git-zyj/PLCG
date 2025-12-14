/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(min(var_3, ((max(var_13, var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((((arr_0 [i_0 - 3]) ? (max(var_9, (arr_2 [i_0]))) : (((-(arr_1 [i_0 - 1]))))))) ? (((arr_0 [i_0 + 1]) | ((max((arr_1 [i_0 + 1]), var_10))))) : ((-(~var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 -= var_4;
                            var_16 = (max(var_16, ((((((!(((arr_1 [i_0]) > (arr_6 [i_1] [i_2] [i_3])))))) - (((!(((~(arr_1 [i_0 - 1]))))))))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((-((((var_1 << (var_8 - 88121402))) >> (var_7 + 56)))));
    #pragma endscop
}
