/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((((38112 ? -3445098699139073683 : var_15)) * ((-30857 ? var_5 : var_15))))) ? var_9 : (max(var_9, ((var_8 ? -32655 : var_1)))));
    var_20 = ((((var_14 + 1805356925) ? ((-542740627 ? var_2 : 63595)) : (((542740609 ? -3445098699139073683 : -23440))))) > var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                    arr_7 [i_2] = ((-542740610 ? (arr_3 [i_1] [i_2]) : (((max((!123), (24560 >= -89)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((-((0 ? 3590844241 : (arr_1 [i_1])))))) ? (((((var_17 && (arr_0 [i_2]))) && ((var_1 != (arr_5 [i_0] [i_0] [i_2] [i_2])))))) : (max(var_1, (!var_12))));
                    var_22 = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }
    var_23 = (min(var_23, (((((min((!38), (min(var_14, 10576))))) ? var_3 : (var_16 == -3445098699139073683))))));
    #pragma endscop
}
