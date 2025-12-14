/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((((!var_5) ? var_3 : 0)) >= ((min((arr_0 [i_0 - 1]), ((var_13 ? var_3 : 160)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 -= ((((max((((arr_9 [i_0] [i_1] [i_0] [i_3 - 3]) ? 4848101883570294471 : (arr_7 [i_0] [i_3 + 1] [i_1] [i_1] [i_0] [i_0]))), (arr_9 [i_1] [i_1] [i_1] [i_1])))) && (((((arr_9 [i_0] [i_0] [i_1] [i_0]) ? var_14 : (arr_1 [i_1])))))));
                            arr_10 [i_3 - 3] [i_2] [i_0] [i_1] = ((((68 ^ (arr_1 [i_2]))) << ((((((((arr_7 [i_0 + 1] [i_0 + 2] [i_2] [i_2] [i_3] [i_3 + 2]) ^ (arr_6 [i_0] [i_2] [i_0])))) ? ((4848101883570294469 & (arr_8 [i_2] [i_3] [i_2] [i_0] [i_1]))) : (min(13598642190139257132, (arr_8 [i_0] [i_0 - 2] [2] [2] [i_0]))))) - 64))));
                            arr_11 [i_0 + 2] [i_1] [i_1] [i_2] [i_2] [i_3] = (((arr_5 [i_0 + 2] [i_2] [i_3 + 3]) >= ((((105 <= (arr_5 [i_0 + 2] [i_1] [i_3 + 1])))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (~var_2);
    #pragma endscop
}
