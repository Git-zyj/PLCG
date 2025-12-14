/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_16;
    var_18 = (max(var_18, ((min(var_13, (max(4294967295, (min(var_0, 6435780924240884912)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (((~(max(1141780847, (arr_4 [i_1 - 2] [i_0]))))) >= var_11);
                arr_5 [2] [i_1 - 1] [i_1 - 2] = ((arr_1 [i_0] [i_1]) ? ((((18876 ? var_1 : var_11)) / var_8)) : (((-(arr_1 [5] [i_1 + 1])))));
                var_20 = (min(((3778348838 ? 732966980 : 1827834228)), ((min((((arr_3 [i_0] [i_0] [i_1]) * (arr_4 [i_0] [i_0]))), var_5)))));
                arr_6 [i_0] [i_0] [14] = ((~(var_2 > var_1)));
            }
        }
    }
    var_21 = (min(var_21, ((max(-var_1, (min((!var_13), var_8)))))));
    #pragma endscop
}
