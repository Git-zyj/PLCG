/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (561979460 % 561979452);
                    var_19 = (((!(arr_8 [9] [i_1] [i_1] [i_1]))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_20 -= (133 * 4294967295);
                        var_21 = 3732987847;
                        var_22 = ((((arr_12 [i_0]) < 4294967290)));
                    }
                    var_23 = (((arr_10 [i_2 - 1]) < (min(4294967280, 11521881749952614143))));
                }
            }
        }
    }
    var_24 = (var_0 + var_1);
    var_25 = (min(var_25, var_17));
    var_26 = var_7;
    var_27 = var_3;
    #pragma endscop
}
