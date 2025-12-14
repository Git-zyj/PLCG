/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(8750405125959603886, (max(-8750405125959603879, -8750405125959603888))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [9] [i_1] = -840340078;
                var_14 = (max(-1545567702, ((63993 - ((55 ? -6 : 1545567714))))));
                var_15 = (max((((-1 ? 3185455735 : (arr_0 [i_1] [i_0])))), 15575039467996618688));
                arr_7 [19] [19] [19] &= ((!(arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
