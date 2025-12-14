/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (((min((var_4 && var_0), (arr_4 [i_0] [i_1] [i_2])))) ? (((((arr_2 [i_1]) != 2746638318)))) : ((var_7 % ((var_3 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_0] [i_0]))))));
                    arr_7 [12] [12] [i_1] [i_2] = (min(19, (((48645 >= (arr_6 [i_0]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] |= ((9658 ^ (((arr_6 [i_0]) % (arr_6 [i_0])))));
                    arr_9 [i_0] [i_1] [i_1] = ((max((arr_3 [i_0] [i_1] [i_2]), (((arr_3 [i_0] [i_1] [i_2]) & 124)))));
                }
            }
        }
    }
    #pragma endscop
}
