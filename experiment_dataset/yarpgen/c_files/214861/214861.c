/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((max(282462198, 282462201))) + (min(1571304396, var_13)))), (((~(~4012505098))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = ((((251658240 / (4043309049 ^ 8070450532247928832))) / ((max((max(0, 4012505094)), (997388958844705018 != 7))))));
                    arr_8 [i_0] [i_1] [i_0] [0] = (max(((min((-113452482 - 1), (!17038736051946917898)))), 8070450532247928832));
                    var_20 &= 12067815110427898618;
                }
            }
        }
    }
    #pragma endscop
}
