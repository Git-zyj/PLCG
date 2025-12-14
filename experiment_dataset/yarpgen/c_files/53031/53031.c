/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 -= ((!((min(((10237859559182594344 ? 4764247254851281933 : 846653131)), 9007199254740992)))));
                    var_20 = -9007199254740993;
                    arr_7 [i_0] [i_0] [i_0] [i_1] = -9007199254741019;
                    var_21 ^= ((((max(9007199254740992, 9007199254741010))) ? (~36) : 2863619198));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_22 -= ((((((2035130936 ? 16132 : -17)))) ? (--17748) : 1282257313));
                var_23 = 5041289520184113828;
                arr_13 [i_3] [i_3] [i_4] = 472062438;
            }
        }
    }
    var_24 -= -35;
    #pragma endscop
}
