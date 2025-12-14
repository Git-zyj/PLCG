/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((arr_1 [i_0]) + (arr_1 [i_1])))))));
                arr_4 [i_0] [i_1] = (((((min(18446744073709551604, 14491899094326335220)))) ? (((3594043455 && ((min(var_9, (arr_0 [i_0] [i_1]))))))) : ((((arr_0 [i_1] [i_0]) || ((var_2 && (arr_1 [i_0]))))))));
            }
        }
    }
    var_15 = ((var_4 ? var_4 : ((((!((max(57903, var_2)))))))));
    var_16 = (((var_5 ? 8591583072803348507 : ((341968564432674757 ? 18258 : 16972319437104748976)))));
    #pragma endscop
}
