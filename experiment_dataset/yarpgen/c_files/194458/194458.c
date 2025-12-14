/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max(52596, 2230579614904464631)))));
                    arr_8 [i_2] [i_1 - 1] [14] = ((((min(12961, 1191612617421661849))) || ((((2230579614904464631 ? var_5 : var_10))))));
                    arr_9 [17] [i_1] [i_1] [i_1] = (max(var_8, var_6));
                    var_14 = (min(var_14, ((min(((-(arr_4 [i_1] [i_1] [i_1 - 1]))), (arr_4 [i_0] [i_0] [i_1 + 1]))))));
                }
            }
        }
    }
    var_15 = (((((((!-2230579614904464614) < (0 != 1))))) < (((((56 ? var_3 : var_4))) ? ((var_4 ? var_2 : 8254177399949016597)) : 2230579614904464631))));
    #pragma endscop
}
