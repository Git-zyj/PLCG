/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 ^= (min(((188400821 ? -4106566466 : (min(188400825, 184)))), 188400830));
                    var_12 ^= ((((min(188400801, 6939))) || ((((((3795113867 ? 188400801 : 4106566466))) ? (arr_3 [i_0] [i_1]) : (~499853428))))));
                }
            }
        }
    }
    var_13 = (188400821 && 0);
    #pragma endscop
}
