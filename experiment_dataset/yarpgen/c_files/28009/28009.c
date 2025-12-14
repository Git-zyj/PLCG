/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (~-7)));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((((min((1774189001 != 1774189001), 237))) ? ((((!((max(1, 123))))))) : ((((((arr_7 [i_1]) ? -16777216 : -8130563395878119194))) ? ((-7787 ? -16777216 : 2296835809958952960)) : 1688468693))));
                    arr_10 [i_1] = (arr_1 [i_0]);
                    arr_11 [i_1] [i_1] [i_2] = (max((0 <= 4879753821982070575), ((-2296835809958952960 - (arr_0 [i_1 + 1])))));
                }
            }
        }
    }
    var_18 = (max(((max((!1138512667343681415), -1658446944))), (((1500895159 - 1) ^ (-15 - 17)))));
    var_19 = var_12;
    #pragma endscop
}
