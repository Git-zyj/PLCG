/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((min(34893, var_6))) / 1965771103))));
    var_14 = (min(var_14, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (((arr_0 [i_2]) >> (((!(7481706632626426532 == 30643))))));
                    var_15 = ((((1570317099 + 1091740121) ^ (arr_8 [i_0] [i_1] [i_2] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
