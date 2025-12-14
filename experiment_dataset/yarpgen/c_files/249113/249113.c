/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [1] [i_0] &= ((~(arr_0 [i_2] [1])));
                    var_13 = min(0, 0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] = ((((((max(0, var_3))) ^ var_1)) != (((-((0 ? 1 : 738892053)))))));
                                var_14 -= (((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (890587135 - 9057578098658695763))) == (max(1, 111))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1 - 1] [i_2] = ((((9141 < 13797046133708803995) ^ 33784)) >= ((max((var_7 == 3318), 65535))));
                }
            }
        }
    }
    var_15 = (247 > 1082600771);
    var_16 = ((var_7 * (var_1 < 896650645)));
    var_17 = (var_4 / var_11);
    #pragma endscop
}
