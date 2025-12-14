/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (var_5 >= 1433339271);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = ((((min(((69 ? (arr_0 [17]) : 30684)), ((((arr_4 [i_0] [i_1]) > 23772)))))) && ((min((~2491647220), 1433339280)))));
                    var_14 *= 9841;
                }
            }
        }
    }
    #pragma endscop
}
