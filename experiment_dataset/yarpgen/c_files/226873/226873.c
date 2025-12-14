/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = (((arr_6 [i_1 - 1] [i_2] [i_3]) ? (var_11 >= -1743114526) : (var_5 != 1)));
                            var_20 = (max((var_15 >= 0), (((arr_3 [i_3] [i_2] [i_1]) ^ (arr_3 [i_0 + 3] [i_2] [i_3])))));
                        }
                    }
                }
                var_21 = (max(var_21, (((min(var_16, (arr_9 [i_0 - 2] [i_1 - 1] [i_1] [i_1 - 1])))))));
                arr_12 [i_1 - 1] [i_1 - 1] [i_0] = ((~((-var_8 | ((max(var_10, var_14)))))));
                arr_13 [i_0] [i_0] = 7716023337748526115;
                var_22 = 26715;
            }
        }
    }
    var_23 = ((~((var_0 ? var_6 : ((min(6137, var_7)))))));
    var_24 = ((((((var_13 ? var_7 : var_2)) < var_5)) ? ((((var_9 ? 8192 : var_12)) ^ (max(var_6, 844465896)))) : ((max((var_4 == var_5), var_3)))));
    var_25 = min(var_16, (max((min(var_8, 830949011)), var_17)));
    #pragma endscop
}
