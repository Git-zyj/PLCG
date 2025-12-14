/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, -var_8));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((((var_6 << (((arr_6 [i_2 + 1] [i_1] [i_1 + 1]) - 3243503464))))) ? ((-(arr_6 [i_2 + 1] [i_2 + 1] [i_1 + 1]))) : var_3));
                    var_11 += (min((((((((arr_0 [8]) > (arr_4 [i_1]))))) | (arr_6 [i_0 - 2] [i_1 - 3] [i_0 - 2]))), ((min(1, 1)))));
                    arr_9 [i_0] [i_0] = (min((((~(((arr_4 [i_1 + 2]) / (arr_0 [i_0])))))), var_2));
                    arr_10 [5] [i_0] [5] [i_2 + 1] = ((var_8 == (((1 > (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_12 ^= (((max(var_7, 212))) == (~var_1));
    var_13 = 13817;
    var_14 = 15074;
    #pragma endscop
}
