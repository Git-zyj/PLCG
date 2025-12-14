/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = (max(7136365884272882896, (-1984 % var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((((((max(-1143885486, 39569))) ? var_6 : ((100663296 ? 17978367832490184163 : -113))))) ? (((-var_8 ? 64 : -100663310))) : ((var_4 ? 63 : 0)));
                var_18 = (min(var_18, ((max(((~(~0))), ((-64 ? 230 : 137)))))));
            }
        }
    }
    var_19 = (min(var_19, (((1 ? ((min(var_3, ((1 ? 15728640 : 65535))))) : (max((((1 ? 14276 : -100663300))), (max(-6367290439088617591, -19)))))))));
    var_20 = 5520727680173124929;
    #pragma endscop
}
