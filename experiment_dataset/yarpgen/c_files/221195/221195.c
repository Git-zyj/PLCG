/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_0] = ((((((min((arr_4 [i_0]), 17848))) > (arr_8 [i_0] [i_2 - 1] [i_2 - 1]))) ? ((((-1173507235 <= 1) ? (!-1173507235) : 1173507234))) : (max((max((arr_10 [i_2 - 1] [i_1]), (arr_5 [i_0] [i_0]))), (arr_10 [i_0] [i_0])))));
                    var_19 = (min(var_19, (((((((((arr_5 [i_1] [i_1]) >= var_10)) ? 20937 : ((1173507231 >> (1173507231 - 1173507218)))))) ? (((((arr_0 [i_0] [i_1]) ? var_16 : (arr_6 [1] [1]))) << (((var_8 == (arr_8 [i_0] [i_1] [i_2])))))) : (3616208601 < -1037185169))))));
                    var_20 -= ((((max((((arr_9 [i_2 - 2] [i_1] [i_0] [20]) ? -6946751227307102473 : -1445246597993751211)), 207))) && 1173507221));
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = (((((var_2 >> (((min(var_13, var_7)) - 58))))) ? var_4 : (var_8 & 1)));
    var_23 = var_4;
    #pragma endscop
}
