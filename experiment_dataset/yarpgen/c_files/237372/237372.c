/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [18] [8] = (((arr_4 [i_0]) >= ((~(arr_0 [i_1 + 1] [1])))));
                arr_6 [4] [0] [i_1 + 1] = max((((arr_1 [10] [i_1 - 1]) | (arr_1 [18] [i_1 - 1]))), ((max((arr_1 [4] [i_1 - 1]), (arr_1 [6] [i_1 - 1])))));
                arr_7 [18] [i_1 + 2] [18] = var_5;
                arr_8 [2] [2] = ((((max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1])))) ^ ((((min((arr_0 [13] [i_1 - 1]), (arr_4 [i_1])))) | ((((arr_3 [i_0]) >= (arr_2 [i_0]))))))));
                arr_9 [8] = ((+((((arr_1 [2] [i_1 - 1]) < (arr_1 [12] [i_1 + 1]))))));
            }
        }
    }
    var_19 = (max((max((var_7 << 1), (1 >= var_16))), var_12));
    #pragma endscop
}
