/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 14553;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 = 75;
        var_16 = 536870911;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_17 -= 27;
        arr_5 [i_1] &= (((!65514) || (!-536870903)));
        var_18 = (max(var_18, (((((18087084436174294311 || ((max(3155560156249315066, var_9))))) || 193)))));
    }
    var_19 = (min(((-((var_3 ? var_13 : var_10)))), var_3));

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_20 = ((-((((min(-217634159474856750, 166))) ? 175 : (1052363101 == var_2)))));
        var_21 = (max(var_0, -2586583432788202437));
        var_22 = (((3719793710449781962 && 195) ^ 6966025507547321127));
        arr_9 [i_2] = ((-(!var_13)));
        arr_10 [i_2] [i_2] = var_10;
    }
    #pragma endscop
}
