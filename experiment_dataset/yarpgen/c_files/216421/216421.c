/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 7586270895327886318;
    var_21 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [15] [i_2] [i_2] = (arr_4 [i_0] [i_0]);
                            var_22 = (max(var_22, ((((!1) << ((((var_14 ? (arr_3 [i_1 - 2] [i_3]) : (arr_3 [i_2] [i_2]))) - 28998)))))));
                        }
                    }
                }
                var_23 &= ((((((max(0, 33535))))) != ((~(arr_2 [i_1 - 1])))));
                arr_10 [i_0] [i_0] |= ((-6778524380318198178 ? -31026 : 0));
                arr_11 [i_1 + 1] [i_0] = (!var_18);
            }
        }
    }
    var_24 = (~var_14);
    #pragma endscop
}
