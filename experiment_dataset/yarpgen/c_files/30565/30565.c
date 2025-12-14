/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (9412 * 49823);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = min((((3667 == -114) + (19 ^ 236))), ((((arr_5 [i_1] [i_1] [i_0]) > 1))));
                var_11 = (max(var_11, 1));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_12 = (min(var_12, (0 * 249)));
                    var_13 = (min(var_13, (((39992 && ((min(159, (4 | 33490)))))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_14 = ((((208 / (arr_8 [i_0] [i_0] [i_3]))) >= -1249887590));
                    var_15 = (max(var_15, (((!((min((arr_0 [i_3]), (((arr_3 [i_1]) / 1))))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_3] = (min(55930, ((-(arr_7 [0] [i_0])))));
                }
            }
        }
    }
    var_16 *= var_4;
    #pragma endscop
}
