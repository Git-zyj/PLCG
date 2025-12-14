/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(((max(4294967295, -265768528))), var_3)), (max((~18446744073709551596), 327176156632882733))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = 593132891;
                    var_18 = (max(((((-4520667678612434062 - var_13) ? (max(var_0, 4294967295)) : 0))), (((0 & 1116892707587883008) >> (2147483647 - 2147483622)))));
                }
            }
        }
    }
    var_19 = ((((min(65512, 5948527631162830593))) ^ (((((27765 ? 127 : 134217727))) & (min(3, var_2))))));
    var_20 = ((max(((3678579411 ? var_7 : var_8)), var_2)) + ((max(2996105740189427396, (var_12 + 4294967295)))));
    #pragma endscop
}
