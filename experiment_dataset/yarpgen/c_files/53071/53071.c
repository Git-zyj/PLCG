/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((((!(arr_4 [i_0] [i_0]))) && (arr_0 [i_1 - 1])));
                arr_5 [i_1] = (min((var_1 * 4181402184), (((!(!113565122))))));
                var_13 = (((((((min((arr_3 [2] [8] [6]), var_9)) == (((113565127 ? (arr_1 [i_0] [i_1 - 1]) : 0))))))) > var_9));
            }
        }
    }
    var_14 = (max(var_14, (min(var_8, ((-(124 * -8588)))))));
    var_15 = (((19 ^ -20) ? 2263383834024089265 : (((((~58) <= var_7))))));
    var_16 = (0 || 16669);
    #pragma endscop
}
