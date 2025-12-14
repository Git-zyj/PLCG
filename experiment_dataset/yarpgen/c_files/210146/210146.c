/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_9 ? ((var_9 ? var_6 : var_1)) : (min((max(var_10, var_1)), var_0)));
    var_13 = var_2;
    var_14 &= (min(((((max(var_9, -3333577410049801732))) ? 5372369150823079147 : var_0)), ((((13074374922886472461 + var_11) || (((var_7 ? 13074374922886472462 : -23487))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = 13074374922886472483;
                var_16 = (min(var_16, var_1));
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
