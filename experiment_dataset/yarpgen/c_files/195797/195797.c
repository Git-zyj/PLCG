/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 += 101;
                    var_20 = (min(var_20, (((((arr_0 [i_2 + 2] [i_2 + 1]) ? (arr_0 [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 - 1] [i_2 + 1])))))));
                    arr_8 [1] [i_1] [1] [i_0] = (((((arr_7 [i_0] [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_2] [i_2 - 1] [i_2 - 1]) : 4266273798))) ? ((-0 | (arr_5 [i_0] [i_2 - 1]))) : (min(((1 ? 60599 : -93)), -1760599970)));
                    var_21 = ((min(((((arr_5 [i_1] [i_0]) | (arr_7 [i_0] [i_0] [i_0])))), (max((arr_3 [i_0] [i_0] [i_2]), 4935)))) | (arr_3 [i_0] [i_1] [i_2]));
                }
            }
        }
    }
    var_22 = var_17;
    var_23 ^= -var_3;
    var_24 &= ((!(((4935 ? 1760599968 : -1901224093)))));
    #pragma endscop
}
