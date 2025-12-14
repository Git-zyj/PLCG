/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((75 ? ((67 ? 267386880 : ((-1913608043938294486 ? 188 : 6)))) : 605));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((var_9 ? 255 : var_5)) < (arr_4 [10] [i_2]))) ? (min(12740550403194951545, 84)) : var_9)))));
                    arr_9 [i_0] [i_1] [i_1] = ((-0 ? ((((1430329329397797281 != (arr_7 [i_0 - 1]))))) : (var_3 & var_5)));
                    var_17 = (max(var_17, (arr_5 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
