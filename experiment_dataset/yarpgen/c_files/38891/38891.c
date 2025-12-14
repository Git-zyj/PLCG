/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 += 769621370;
                arr_5 [i_0] [1] = var_12;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 += (arr_0 [i_0]);
                            arr_12 [i_1] [i_2] = (min((arr_3 [6]), ((((max((arr_0 [15]), var_10))) ? (((var_10 < (arr_6 [i_0] [i_1] [0] [18])))) : 0))));
                        }
                    }
                }
            }
        }
    }
    var_19 &= var_0;
    var_20 = (max(((!(var_7 && 0))), 1));
    #pragma endscop
}
