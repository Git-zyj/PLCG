/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((~(~-7144393637978506379))), ((min((max(255, 880394254)), (min(-880394254, 0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 += ((~((~((min(128, 246)))))));
                    var_15 = ((~((~(min(1878943360, (arr_7 [i_0])))))));
                    var_16 = ((~(max(var_6, (max(1973334723, 1072313542))))));
                    var_17 ^= (min(11511257396405356197, 9660782237717383493));
                    var_18 &= (max(((~(max(var_10, var_8)))), (((!(~var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
