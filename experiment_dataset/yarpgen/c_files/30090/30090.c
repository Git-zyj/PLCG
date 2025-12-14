/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (min(var_17, ((-(!-1637844888728346537)))));
        var_18 = (max((((arr_0 [i_0]) ? ((((!(arr_0 [i_0]))))) : (min(4108243503, 2147483647)))), 505280432));
    }
    var_19 = (min(var_19, (((331534815 ? var_2 : 98)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_20 += (min((!2832177102), -2147483633));
                var_21 = (max(var_21, (((+((((((((arr_5 [i_1]) == var_13)))) != ((99196433 + (arr_2 [i_1])))))))))));
                var_22 = (min((!243), (arr_2 [i_2])));
            }
        }
    }
    #pragma endscop
}
