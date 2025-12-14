/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max(-17839, -16563));
                arr_7 [i_0 + 1] [i_1] [14] &= (arr_0 [i_0]);
                arr_8 [i_1] [i_1] &= (575897802350002176 + 17870846271359549448);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                var_14 = (arr_3 [i_0] [i_1]);
                                var_15 = ((-17839 ^ ((var_6 ? (((max(200, 62)))) : (max(1152921229728940032, 4136503113566454933))))));
                                var_16 += -17838;
                            }
                            var_17 = (max(var_17, (arr_14 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 1])));
                            var_18 = (max(var_18, (arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [10] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    var_20 *= var_3;
    #pragma endscop
}
