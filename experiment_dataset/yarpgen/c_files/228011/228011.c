/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_6));
                var_14 = ((var_4 ^ (min(-3586224971659501835, 0))));
            }
        }
    }
    var_15 = (min(((~(-1059738968 != 124))), var_0));
    var_16 = ((var_4 == (max((2736173051786245107 | 18978), var_3))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_16 [i_2] [i_5] [i_2] [i_2] [i_4] = 1;
                                var_17 |= -52;
                                var_18 = -var_0;
                                var_19 ^= ((4686158635743447036 != ((6552 ? var_7 : (arr_11 [0] [i_5 + 1] [i_6 - 3])))));
                            }
                        }
                    }
                }
                var_20 = var_3;

                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_21 = (min(var_21, ((min(((max(var_4, (arr_15 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [0] [i_2])))), (max(0, 255)))))));
                    var_22 = (arr_11 [18] [i_3] [i_7]);
                    var_23 = (max(var_23, ((min(0, -var_9)))));
                }
            }
        }
    }
    var_24 = (min(var_24, ((min(var_2, ((14079678279938933665 ? var_5 : (!-7))))))));
    #pragma endscop
}
