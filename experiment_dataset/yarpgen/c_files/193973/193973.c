/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((-14 ? (1 % -14) : -1241440621)) >= (((var_11 || (((var_10 << (7586 - 7586)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((-((~((min(var_17, 10)))))));
                var_19 = (min(var_19, (!var_10)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (arr_6 [i_0] [1] [i_0]);
                    var_21 = var_12;
                    arr_12 [i_0] [i_0] [i_0] [i_2] = (arr_5 [1] [i_0]);
                    var_22 = (max(var_22, (((((!(arr_9 [i_0] [i_0] [i_0] [i_0]))) ? (arr_9 [i_0] [3] [i_1 - 1] [i_2]) : var_15)))));
                }
            }
        }
    }
    var_23 = (max(32752, 0));
    #pragma endscop
}
