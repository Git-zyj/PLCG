/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((~((var_6 ? var_1 : -90))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (9006649498927104 + -125);
                    var_11 = ((-(min(((var_5 ? var_4 : (arr_3 [i_0] [6]))), ((~(arr_5 [i_0])))))));
                }
            }
        }
    }
    var_12 = ((((var_3 ? ((min(-90, 27))) : ((var_5 ? var_3 : 228)))) << (((((var_9 ? var_0 : var_5)) > var_2)))));
    var_13 += (((min((var_5 ^ var_6), ((min(var_8, -90))))) > 18437737424210624532));
    #pragma endscop
}
