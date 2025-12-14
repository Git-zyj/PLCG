/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 &= (min((min(((max(-1425567263229748565, 156))), (min(var_12, var_9)))), (min(((min(134217727, 1))), (min(var_9, var_1))))));
                var_15 = (max((min((min(0, 1217517174)), ((min((arr_5 [i_0]), var_12))))), (min(((min(var_5, (arr_4 [i_1])))), (min(-3247284782693537603, 14601234127694728686))))));
            }
        }
    }
    var_16 = max((min(-3247284782693537603, 4294967295)), (min(((min(4160749542, 33488896))), (min(-3247284782693537603, 2025263727)))));
    var_17 = (min(18446744073709551613, 3247284782693537602));
    var_18 = (min(var_18, ((min(1991957547, 1991957547)))));
    #pragma endscop
}
