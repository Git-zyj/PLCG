/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-((200 ? (~var_10) : (max(40, 2147483647)))));
    var_16 = (((((((min(var_11, 4294967279))) ? var_11 : var_5))) ? (((~((var_7 ? var_10 : var_12))))) : ((var_10 ? ((var_11 ? var_5 : var_11)) : var_1))));
    var_17 = (max(var_17, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [17] &= (min(0, (min(var_11, (((!(arr_3 [i_0]))))))));
                var_18 = ((min(3932160, (arr_5 [i_0] [i_1]))));
                var_19 = 4160749568;
            }
        }
    }
    #pragma endscop
}
