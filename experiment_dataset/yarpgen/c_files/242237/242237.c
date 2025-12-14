/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 6766831748305172096));
    var_16 = (((((-((var_9 ? -721667051509609007 : 6088073772530701368))))) ? -23264 : (!-var_12)));
    var_17 = 6088073772530701380;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (arr_4 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] = ((((var_6 ? var_13 : 1))) && (((28 - (arr_8 [i_0] [i_1] [i_2] [i_0])))));
                    var_18 ^= arr_7 [i_0] [i_0] [i_0];
                }
                var_19 ^= (((arr_3 [i_0] [i_0] [i_0 + 1]) ? (arr_5 [i_0] [i_1] [i_1]) : (((var_8 ? 23259 : (arr_2 [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
