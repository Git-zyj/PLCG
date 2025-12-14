/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = var_4;
                var_20 = (min(((~(arr_0 [i_1 + 1]))), ((~(arr_4 [i_0] [i_1 + 1] [i_1])))));
                var_21 = var_12;
            }
        }
    }
    var_22 = 14749205450965032388;
    var_23 |= var_15;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_24 |= (((min((arr_6 [i_3] [i_2 + 3]), (arr_6 [i_3] [i_2 + 3])))) < ((min(var_11, (arr_6 [i_2 + 1] [i_2])))));
                arr_9 [i_2] = 2956437497245500970;
            }
        }
    }
    #pragma endscop
}
