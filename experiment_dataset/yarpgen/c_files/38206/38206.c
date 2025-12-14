/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 13255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (max((arr_2 [i_0] [18]), (((arr_2 [i_0] [i_1]) | (!52280)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((((!(arr_3 [1]))))))));
                            var_15 &= ((((-8877805218364790331 == (arr_7 [i_1 - 1])))));
                        }
                    }
                }
                var_16 += (max(((max((arr_9 [i_0] [1] [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_1 - 2] [i_1 - 1] [i_1])))), ((+((1 ? (arr_6 [i_0] [8] [8] [i_1]) : (arr_8 [1] [i_1] [i_1 - 2] [8] [i_1 - 2])))))));
            }
        }
    }
    #pragma endscop
}
