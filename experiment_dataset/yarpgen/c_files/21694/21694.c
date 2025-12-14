/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((arr_2 [i_0]) > 1996095818))) / (arr_0 [i_0 - 1])));
                arr_7 [i_0] [i_1] = (max(((((arr_4 [i_0] [i_0]) * (arr_4 [i_0 + 1] [i_0])))), (max((-7795405606071453721 / -440430732), -440430732))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3 - 1] = (max(((((max((arr_5 [i_3]), -1996095828))) / (max(7795405606071453694, 1996095818)))), ((max((52927 & -440430732), (arr_2 [i_3]))))));
                arr_13 [i_3] [i_3 - 1] = 2114;
            }
        }
    }
    #pragma endscop
}
