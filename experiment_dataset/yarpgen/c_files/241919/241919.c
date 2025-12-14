/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~8184) ? (((-3159296682413190566 ? -13845 : 13851))) : ((-13845 ? -13851 : 33994))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((18263521631967922988 ? 18263521631967922988 : 3974299765948587997)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [1] [1] [1] [1] [2] [1] = (((((~(~-1191766338)))) ? 13845 : ((~((var_7 ? var_18 : (arr_8 [3])))))));
                                var_21 = ((!(((+((var_18 ? (arr_7 [1] [i_1] [1] [i_1]) : 745199439117411439)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
