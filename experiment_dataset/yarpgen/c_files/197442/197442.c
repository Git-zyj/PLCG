/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_7 ? 7263755693201114441 : (6399996485669323088 ^ var_12))) | -707620133));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 = max((max(434419649, (arr_0 [i_0 + 1]))), ((var_0 ? -1295255468 : (max(33554400, -110034965)))));

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] = ((((~(arr_1 [i_0])))) + (arr_1 [i_0]));
            var_16 = (min(var_16, 14833761343759214191));
            arr_6 [i_1] [10] = ((!((((arr_4 [8] [4] [4]) ? (~-110034949) : ((var_4 ? -434419647 : 12056843)))))));
        }
    }
    #pragma endscop
}
