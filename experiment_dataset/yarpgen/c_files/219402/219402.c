/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((((max(0, 63))) - var_16)) & ((((8718607708448285962 != var_13) == 1023)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (!((!(arr_3 [i_1 + 1] [i_1 + 1]))));
                var_21 ^= -2;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((((((arr_9 [i_3 - 2] [12] [i_1 + 1] [1]) ? (arr_10 [i_2] [i_1 + 1] [6]) : (arr_4 [i_1] [i_1 + 1] [0])))) ? 1100151922 : (((!(arr_9 [i_3 - 2] [0] [i_1 + 1] [i_0]))))));
                                var_23 &= (((((68 ? (((max(var_13, -79)))) : (((arr_2 [i_0]) ? 3631539844 : 1))))) || ((!((min(var_6, (arr_6 [i_3 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((var_18 ? -8220348173881554441 : 1)) * 0));
    var_25 = ((var_17 && (!var_5)));
    #pragma endscop
}
