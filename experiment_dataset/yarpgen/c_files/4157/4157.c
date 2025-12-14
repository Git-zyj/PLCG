/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -81;
    var_21 = (((((~9223372036854775792) + 21248)) >= (~-19)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (((-639992814 || 7678917137497644144) && ((max(10892806118289259503, 2648499900017878860)))));
                    var_23 = 10565;
                }
            }
        }
    }
    var_24 = (-5380516018073984471 % -3426);
    var_25 = -82592939;
    #pragma endscop
}
