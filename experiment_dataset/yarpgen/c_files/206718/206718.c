/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 &= (min(-536870911, (arr_6 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])));
                            var_20 = (min(((8023602302631757544 ? 2145420022 : 16514226314881404494)), (((!(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2]))))));
                        }
                    }
                }
                arr_8 [i_0] = (arr_3 [i_0 - 2] [i_0 + 1] [i_1]);
            }
        }
    }
    var_21 = ((-(min((~-227526277), (var_9 | var_5)))));
    var_22 = (~var_4);
    #pragma endscop
}
