/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_4));
    var_18 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (arr_8 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_0]);
                    arr_10 [i_0] [i_2] = ((-(min(((((arr_2 [i_0]) == (arr_8 [i_0] [i_1] [i_2 + 1] [i_0])))), (arr_0 [16] [i_0])))));
                    var_20 ^= (((0 ? 4027818997059030161 : (arr_8 [i_0] [i_0] [i_1] [8]))));
                    var_21 &= 0;
                }
            }
        }
    }
    #pragma endscop
}
