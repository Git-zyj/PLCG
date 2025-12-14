/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((arr_2 [i_0] [i_1]) ? 39636 : (arr_4 [i_1] [i_0])))) ? ((~(arr_4 [i_0] [i_1]))) : ((((var_1 != (arr_2 [2] [2])))))));
                var_14 = (((arr_1 [i_0]) ? 15785727315614468844 : (((((max(-32767, 43087))) - ((var_2 ? var_7 : (arr_2 [i_1] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
