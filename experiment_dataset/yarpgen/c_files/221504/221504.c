/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -45102));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [19] = ((+(max(45089, (min((arr_0 [i_0]), var_6))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
            {
                var_14 &= var_4;
                arr_9 [i_2] [13] [i_1] [13] = (min(((-(arr_5 [i_2] [i_0]))), ((min(15, (~-524358877))))));
                var_15 = var_7;
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
            {
                var_16 = (arr_12 [i_0] [i_0] [i_3] [6]);
                var_17 = (min(((~((~(arr_5 [i_0] [i_0]))))), (arr_12 [i_0] [i_0] [i_1] [i_0])));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
            {
                arr_17 [i_4] [i_1] [i_1] = min(0, (arr_13 [i_0] [i_0] [i_0] [i_0]));
                var_18 = (((-119 ? var_3 : var_12)));
                arr_18 [i_0] [i_4] [i_0] = (((min(-2568130605030562647, 0)) >= (arr_8 [i_4] [i_1])));
            }
            var_19 = (min(var_19, (~var_4)));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_20 = (max(var_20, -0));
                arr_26 [i_0] [i_6] = var_6;
            }
            var_21 *= ((-(8388607 + 15)));
        }
    }
    #pragma endscop
}
