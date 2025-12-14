/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min((((((((arr_0 [i_0] [i_0]) | (arr_5 [i_0] [i_1])))) ? ((0 ? 1 : 1)) : (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 2])))), 59301));
                var_19 = (~152);
                arr_8 [i_0] [i_0] = ((((max((arr_1 [i_0 - 2]), (arr_5 [i_0 + 1] [i_0])))) || (arr_2 [i_0 + 1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 -= 57344;
                    var_21 &= 8764577672208832924;
                    arr_12 [i_0] = (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((arr_9 [i_0] [i_2] [i_1] [i_1]) - -17)) : (arr_9 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0])));
                }
            }
        }
    }
    var_22 = var_10;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {
                    var_23 *= ((((((max(-59, 1))))) ? var_9 : (arr_10 [i_3] [i_4])));
                    var_24 = (max(var_24, (2255743768 >= 233)));
                }
            }
        }
    }
    #pragma endscop
}
