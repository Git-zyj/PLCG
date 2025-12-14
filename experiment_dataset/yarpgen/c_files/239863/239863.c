/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 += ((-(max(56, (max(-5222983961315560208, 9))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 |= (arr_0 [i_0]);
        arr_2 [i_0] = (min(((((((var_9 ? (arr_0 [i_0]) : var_0))) ? -91 : 0))), ((107 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((79 ? -32765 : (arr_0 [i_1]))) ^ (((arr_4 [i_1]) ? 2001869348 : var_8))));
        arr_6 [i_1] = var_4;
        var_16 = (min(((((-(arr_3 [i_1]))) - var_2)), var_2));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_4] = -4766464440190700897;
                    var_17 = (arr_3 [i_4]);
                    var_18 = (max(var_7, ((max((~70), (((arr_10 [i_3]) ? -91 : 576460743713488896)))))));
                }
            }
        }
        arr_17 [i_2] = (((max((arr_13 [i_2] [i_2]), (arr_13 [i_2] [i_2]))) < (arr_13 [i_2] [i_2])));
    }
    var_19 = (max(-1192781968, 576460743713488908));
    var_20 = var_10;
    #pragma endscop
}
