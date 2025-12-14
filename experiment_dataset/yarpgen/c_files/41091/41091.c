/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -965073304;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 *= ((!(((255 - (((965073322 ? 231 : -64))))))));
                                arr_15 [i_1] [i_0] = ((-32767 - 1) + 1);
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] = ((((65524 ? ((107 ? 14 : 26072)) : ((65535 ? var_10 : var_6))))) ? (((max(1, 106)))) : (min(-48, 1036095831)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_15 = 1;
                                arr_23 [i_0] [i_1] [i_2] [22] [i_6] [22] [i_1] = (max(var_10, (max(-714022483523571138, ((max(1, 1)))))));
                                arr_24 [i_0] [i_0] [i_6] [i_5] [i_5] [3] [i_6] = (((((var_6 ? -840210137 : -840210122))) ? ((-965073312 ? 4095 : var_7)) : (((((21 ? var_3 : -7104594558751495085)) >= (0 || 242))))));
                                var_16 |= var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((var_10 ? 1535835475 : var_1))));
    #pragma endscop
}
