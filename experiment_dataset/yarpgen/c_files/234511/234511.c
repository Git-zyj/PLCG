/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(var_4, ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))) && var_4));
        var_19 = ((!(((~(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((~(~var_18)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_20 = ((-(((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
        arr_6 [i_1] |= (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_21 = 58414;
        var_22 = (min(var_22, ((((!var_6) ? (arr_8 [i_2] [i_2]) : -var_18)))));
        var_23 = (min(((max(var_18, (arr_1 [i_2] [2])))), ((~(((arr_0 [i_2] [i_2]) ? var_12 : (arr_7 [i_2])))))));
        arr_9 [i_2] [i_2] = ((+(((arr_0 [i_2] [i_2]) ? var_9 : (arr_4 [i_2])))));
        var_24 *= (arr_0 [4] [4]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                arr_17 [i_3] = ((((max(var_5, (arr_8 [i_3] [i_3])))) ? 7111 : (~-var_12)));
                var_25 = (max((max(((-(arr_11 [i_4]))), (arr_16 [i_4] [i_3] [i_3]))), (min((~var_7), (arr_11 [i_3])))));
                arr_18 [i_3] = (min(var_12, (((arr_0 [i_3] [i_4]) ? (arr_0 [6] [i_3]) : (arr_0 [i_3] [i_4])))));
                arr_19 [4] &= (223 ? 131071 : 255);
            }
        }
    }
    #pragma endscop
}
