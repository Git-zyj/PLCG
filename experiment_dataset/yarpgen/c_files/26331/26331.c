/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 2] |= min(((+(((arr_1 [i_1] [i_0]) ? var_9 : 3862111399)))), ((-((var_0 ? 251961164 : (arr_4 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 - 2] [i_0] [6] [i_0] = ((((((65535 ? 18446744073709551603 : (arr_7 [8]))) ? (min(13, var_0)) : var_10))));
                            arr_12 [13] [i_1] [i_2] [i_3] = min(-1003062244, ((max((arr_0 [i_1 - 2] [i_0 - 1]), (arr_0 [i_1 + 3] [i_0 - 2])))));
                            var_11 = (min(((!(((791569981 ? var_3 : 791570004))))), ((!(arr_1 [1] [i_1 + 3])))));
                        }
                    }
                }
            }
        }
    }
    var_12 ^= (min((((((471721038 >> (var_0 - 3841094741)))) ? -var_1 : var_3)), var_1));
    var_13 &= (min(26, 3503397305));
    #pragma endscop
}
