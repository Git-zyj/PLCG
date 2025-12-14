/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8794215572108826538;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min((!9652528501600725083), (((8794215572108826538 ? 0 : 8794215572108826538)))));
                var_14 = (9652528501600725078 % 381314961);
                var_15 = var_7;
                arr_5 [i_0] [6] [i_0] = max((((9652528501600725061 || (arr_4 [i_1 + 1])))), var_4);
                arr_6 [18] = ((-1232750732 * ((max(var_1, (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
