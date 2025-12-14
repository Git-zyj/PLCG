/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = 0;
                arr_5 [i_0] [i_1] = (arr_1 [i_1 - 2]);
                arr_6 [i_0] [i_0] = (((arr_1 [i_0]) + (min((0 ^ var_0), ((-1796322923 ? 1220150280 : 1))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_15 = -1;
                            arr_11 [i_2] = ((~((32736 ? (arr_7 [i_1 - 3] [i_1 + 1]) : (-127 - 1)))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, 18446744073709551615));
    #pragma endscop
}
