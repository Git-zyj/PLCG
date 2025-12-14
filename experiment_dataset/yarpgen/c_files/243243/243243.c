/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (var_10 || 0)));
                var_20 = (max(var_20, (((((max((arr_1 [12]), (arr_2 [i_0] [18] [i_0])))) ? (((((((!(arr_3 [i_0] [16]))))) >= ((var_10 ? -28036 : 13517697323603205895))))) : (arr_0 [i_0] [i_0]))))));
                arr_4 [16] &= (min(((+((((arr_0 [i_0] [i_0]) > var_9))))), (arr_0 [i_0] [i_0])));
                arr_5 [i_0] = (((arr_1 [i_0]) + (((4929046750106345720 ? 4929046750106345726 : 176)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_8 [16] [i_2] = ((-(!var_7)));
        arr_9 [i_2] [1] = ((154 && (((arr_7 [7] [i_2]) != var_18))));
    }
    #pragma endscop
}
