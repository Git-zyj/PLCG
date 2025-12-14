/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 1] [i_1] = 37044;
                var_19 = (65066 < -109);
                var_20 = (min(var_20, ((((((-816761354 ? ((13996 ? 13992 : 13996)) : 62))) ? (((51539 < ((13996 ? -75 : 62810))))) : ((62918 ? 51539 : 21806)))))));
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
