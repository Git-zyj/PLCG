/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = (((arr_1 [i_0 + 1]) ? ((((arr_1 [i_0 + 1]) > (arr_1 [i_0 - 2])))) : (((arr_1 [i_0 + 1]) ? -4 : (arr_1 [i_0 + 3])))));
        var_13 = min(((var_5 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))), (var_5 > var_0));
        var_14 &= (((((((((arr_0 [1]) ? -106 : -30))) ? ((1 + (arr_1 [i_0]))) : ((min(22, (arr_0 [i_0]))))))) ? ((22117 >> (arr_0 [i_0 - 1]))) : (((0 && ((min(var_8, 96))))))));
        var_15 += (((((var_8 || ((max(157, var_6)))))) >= ((min((arr_0 [i_0 + 2]), 1)))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_16 = (min(((min((arr_0 [i_3]), (arr_0 [i_1 + 1])))), (((arr_0 [i_3]) ? (arr_6 [i_2] [i_3]) : (arr_0 [i_1 + 3])))));
                        var_17 = (max(var_17, ((min((arr_6 [i_1] [i_1]), ((((22108 % var_10) < ((min(255, (arr_12 [i_1] [i_1]))))))))))));
                    }
                }
            }
        }
        arr_13 [i_1] = (min(var_9, ((!(arr_0 [i_1 + 2])))));
    }
    #pragma endscop
}
