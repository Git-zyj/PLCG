/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = ((((((((34237 ? var_0 : 34246))) ? (((var_1 ? var_7 : var_5))) : ((34237 ? 1 : -1))))) ? 2793131281 : 102));
    var_12 = 111;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [13] [i_1] = ((((min(34237, (arr_3 [i_0] [i_0 + 1] [i_1])))) > (min(-1, (max((arr_1 [9]), var_5))))));
                arr_6 [i_1] [i_0] = (min(((((min(-64, 4194303))) ? -31289 : (min((arr_1 [i_0 - 1]), (arr_4 [i_1]))))), (!var_5)));
            }
        }
    }
    var_13 = (34246 % 52125);
    #pragma endscop
}
