/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_0 [i_0]) >> (((arr_2 [i_0]) + 1544272080))))) * (max((max((arr_3 [i_0]), (arr_1 [i_0] [i_0]))), ((((arr_0 [i_1 - 1]) >= (arr_0 [8])))))));
                arr_6 [i_0] [i_1] = ((+(((max((arr_4 [i_0] [i_0] [i_0]), 1)) ? (arr_2 [i_1 + 3]) : ((max(-24570, (arr_1 [i_0] [19]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] = min((((~(27626 != var_0)))), (((((-24559 ? 1 : -24556))) ? 2267040871 : 32767)));
        arr_12 [8] [i_2] = (arr_10 [i_2] [i_2]);
    }
    var_11 = -var_1;
    #pragma endscop
}
