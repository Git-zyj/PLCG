/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 &= (arr_2 [i_0] [i_0]);
                var_17 = (i_0 % 2 == 0) ? (((var_9 ^ ((((arr_3 [i_0] [i_1] [i_0]) << (((min((arr_0 [i_1]), (arr_3 [i_0] [i_1] [i_1]))) - 26748)))))))) : (((var_9 ^ ((((arr_3 [i_0] [i_1] [i_0]) << (((((min((arr_0 [i_1]), (arr_3 [i_0] [i_1] [i_1]))) - 26748)) - 4294950301))))))));
                arr_4 [i_0] [i_0] [i_1] = (((max((arr_0 [i_1]), var_10))));
            }
        }
    }
    var_18 &= var_11;

    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((((((-(arr_0 [i_2]))) >= (var_9 >= var_10)))) | ((((max(var_4, var_12))) ? var_4 : (~11386))))))));
        arr_8 [i_2] = (max((max((-2 / var_11), ((min(58879, var_15))))), ((max(((((arr_3 [10] [i_2] [i_2]) / -900881409))), (max((arr_1 [i_2] [16]), var_7)))))));
        var_20 &= ((~((~(arr_6 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_21 &= (((((~((var_1 ? var_1 : (arr_6 [i_3] [i_3])))))) || (~var_11)));
        var_22 = (min(var_22, var_13));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_23 = -124;
        var_24 &= (~var_3);
        arr_16 [i_4] [i_4] = (min((min((((arr_1 [22] [22]) - var_11)), ((min(var_15, (arr_5 [i_4] [i_4])))))), ((max((arr_9 [i_4]), (11850473675519202604 || var_14))))));
    }
    var_25 &= (((max((max(var_7, var_7)), (var_10 | var_12))) < var_12));
    #pragma endscop
}
