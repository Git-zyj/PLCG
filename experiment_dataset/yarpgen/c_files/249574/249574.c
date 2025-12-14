/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((((!(5194 && 0))) ? ((5181 ? ((1215644910 ? (arr_0 [i_1] [i_0]) : 18883)) : (arr_6 [i_0]))) : ((min((((!(arr_6 [i_0])))), (arr_4 [i_0]))))));
                arr_8 [i_0] [i_1] = ((((-37 ? 1 : 3079322385)) != 3079322385));
                arr_9 [i_1] [i_0] [i_0] |= (min((((5194 ? 1 : (arr_3 [i_1] [i_0] [i_0])))), (((arr_3 [i_1] [i_1] [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_18 = (!5196);
    #pragma endscop
}
