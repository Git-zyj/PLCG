/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = arr_2 [i_0 + 1];
                arr_6 [i_0] [i_0] [i_0] = (min((((255 < (arr_0 [i_0 + 1])))), 0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_15 = (((min(var_3, (((-1469829757 != (arr_9 [i_2] [i_2] [11]))))))));
                var_16 = ((((max(var_14, 220))) ? 25697 : ((max((arr_10 [i_3]), (arr_10 [i_3]))))));
                arr_12 [i_2] [i_3] = (((((50109 ? 0 : 65535))) ? ((((((arr_10 [i_2]) ? var_2 : var_6))) ? (max(40697, 933695381)) : 187)) : ((120 ? 0 : 248))));
            }
        }
    }
    #pragma endscop
}
