/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = (((((var_8 & ((var_15 ? -8656454514588718105 : -8656454514588718116))))) ? (!4294967269) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2] = ((((var_14 != (arr_7 [i_0] [i_1] [i_2] [10])))));
                    var_18 *= ((((((arr_1 [i_1] [i_0]) ? (8656454514588718111 || var_12) : (((arr_4 [i_0] [i_0]) ? 1 : -8656454514588718107))))) ? (((!(arr_6 [i_0] [i_0] [i_2])))) : ((~(((8656454514588718107 || (arr_7 [i_1] [i_1] [i_1] [0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
