/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max(((max(var_17, var_18))), (max(var_14, 539909600)))), (min((min(32767, 2120212294)), ((min(255, 17702)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min((max((max((arr_1 [i_0]), (arr_0 [i_1]))), ((max(var_9, (arr_0 [i_1])))))), ((max((max(-17697, (arr_2 [i_1]))), ((min(83, 17708))))))));
                var_20 = (min((max((max((arr_1 [i_1]), var_17)), ((max((arr_4 [i_1] [i_1] [i_0]), (arr_3 [i_1] [i_1])))))), ((max(((max(110, (arr_4 [i_0] [i_1] [i_0])))), (max((-127 - 1), var_14)))))));
                arr_6 [i_0] [i_1] = (min(((max(((max((arr_0 [i_1]), (arr_0 [i_0])))), (max((arr_4 [i_0] [i_0] [i_0]), -652721527))))), (max((min((arr_4 [i_0] [i_1] [i_1]), var_1)), ((max(-107, var_15)))))));
                var_21 = (max((max((max(2147479552, -16419)), ((max(var_7, -17697))))), ((min(((min((arr_4 [i_0] [i_0] [i_0]), -80))), (max(var_7, var_14)))))));
            }
        }
    }
    var_22 = (min(var_22, ((max((min((max(var_1, var_0)), ((max(var_10, var_11))))), ((max((max(var_4, var_4)), (min(939524096, var_13))))))))));
    #pragma endscop
}
