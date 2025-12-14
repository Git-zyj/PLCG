/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((max(4008886623, -1)))));
                var_11 = (((((-(max(var_3, var_1))))) ? (arr_0 [5] [i_0 + 1]) : ((max((max(-396647950296654204, -108)), ((((arr_0 [i_0] [i_0]) ? -1621039062 : 1690470734))))))));
            }
        }
    }
    var_12 ^= 4187090403473821946;
    var_13 = (max(var_13, var_3));
    #pragma endscop
}
