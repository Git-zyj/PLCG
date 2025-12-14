/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-2147483645, 18158513697557839872));
    var_13 = (max(-76, 91));
    var_14 *= (((((min(var_5, var_9))) ? ((var_10 ? var_5 : var_1)) : var_2)) != ((var_10 ? var_2 : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 569949948));
                arr_6 [i_1] [17] [7] = (min((max(1, 1386621724)), ((max(2, 57)))));
                arr_7 [i_1] = ((((((arr_2 [i_0] [i_1]) ? var_6 : (arr_1 [i_0] [i_1])))) ? var_4 : (arr_0 [i_1])));
                arr_8 [i_0] [i_1] |= (-91 % ((max(79, var_6))));
            }
        }
    }
    var_16 &= (2013265920 < var_8);
    #pragma endscop
}
