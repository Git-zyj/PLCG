/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(4355999157792742677, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = 3065580751596503378;
                arr_7 [i_1] = ((((max(var_10, 4120976546))) < (~var_11)));
                var_16 = (!3065580751596503365);
                var_17 = (((((-(min(var_4, var_9))))) ? 1051998383 : -3065580751596503373));
                var_18 -= (((min(-2265484048515493118, (min(var_11, -3684749317784554939)))) - ((((!var_0) % (max(var_5, 1051998394)))))));
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
