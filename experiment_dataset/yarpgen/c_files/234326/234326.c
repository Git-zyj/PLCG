/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((143 ? 2370147008 : 2370147003));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (max(1, 5729962331472562767));
                arr_5 [i_1] [i_1] [i_1] = ((((!((min(1, var_18))))) ? var_1 : ((2370147012 + (((arr_4 [i_1]) ? var_4 : (arr_4 [i_1])))))));
            }
        }
    }
    var_21 = (max(var_12, ((max(4294967295, 91)))));
    #pragma endscop
}
