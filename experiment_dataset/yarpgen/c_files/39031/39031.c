/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((max((max(var_1, 3673489844)), ((max(var_5, 177))))));
                    var_16 ^= ((max((max(3028180552, 18029087997749498424)), (min(5295541959110628090, (arr_1 [i_2]))))));
                }
            }
        }
    }
    var_17 += (min((max(var_8, (min(var_1, var_5)))), (max(var_6, (max(var_3, var_7))))));
    var_18 = (max((min((min(var_9, var_5)), ((max(2263406540, -6810989892191656325))))), ((min(var_4, (min(var_5, -6810989892191656317)))))));
    #pragma endscop
}
