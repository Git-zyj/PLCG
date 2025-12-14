/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 34;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = arr_9 [14] [i_0] [i_2] [i_2];
                            var_21 = (((arr_0 [i_1]) ? (((arr_6 [i_2 - 2] [i_3 + 1] [i_3 - 2] [i_0]) ? (arr_3 [i_0]) : (((var_3 ? 65530 : 213))))) : ((max((((arr_7 [i_0] [i_2] [i_2] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [0]) : (arr_2 [i_0]))), ((((arr_4 [i_0] [9]) << 21))))))));
                            var_22 -= var_14;
                        }
                    }
                }
                var_23 = ((!(arr_6 [1] [i_1] [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_24 = (arr_0 [i_4]);
                            var_25 = (--5);
                        }
                    }
                }
                arr_15 [i_0] = ((!(((((max(0, 228))) ? (arr_1 [0]) : (max((arr_7 [i_0] [9] [i_0] [i_0]), var_2)))))));
                arr_16 [i_0] [i_0] [i_0] = 62;
            }
        }
    }
    var_26 &= (((var_12 ? (!var_3) : var_7)));
    #pragma endscop
}
