/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -8;
    var_18 = ((18 && ((max((max(var_3, var_6)), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [1] = (max((min(42349, 4447869878104306695)), (min(-1462938657606727324, ((min(var_7, var_4)))))));
                var_19 = ((((min((arr_2 [i_0] [i_1 - 1]), var_5))) * (((((max((arr_4 [i_0]), var_13))) < (min(1462938657606727324, 211)))))));
                var_20 ^= (arr_1 [i_0] [i_1]);
                arr_6 [i_0] = -358533165;
                arr_7 [3] |= -var_7;
            }
        }
    }
    var_21 = ((-9839360648810479922 ? var_2 : (!var_2)));
    #pragma endscop
}
