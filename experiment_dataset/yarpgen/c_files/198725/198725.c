/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((var_11 && (((22 << (var_10 - 3069300685))))))));
    var_19 &= max(((max(var_7, (min(41014, var_17))))), var_5);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_3 [i_0] [i_0]);
                var_20 = (max(var_1, (min((min(var_5, var_1)), var_11))));
                arr_6 [i_1] [1] [i_1] = (((max((arr_2 [i_1] [i_1]), (min(var_11, (-2147483647 - 1))))) << (var_10 - 3069300721)));
            }
        }
    }
    var_21 = (((var_4 != var_6) << (var_9 + 7422243751263810472)));
    #pragma endscop
}
