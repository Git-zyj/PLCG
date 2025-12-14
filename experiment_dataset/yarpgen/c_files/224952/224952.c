/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((var_7 << (32764 - 32719)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = -32764;
                            var_21 = (min((arr_3 [i_0 + 1]), (((!((min(var_2, var_12))))))));
                            arr_9 [i_1] = (((!((-32752 < (arr_7 [i_2 + 4] [i_2 + 4] [i_1] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, (-727432086389269149 % 32763)));
    #pragma endscop
}
