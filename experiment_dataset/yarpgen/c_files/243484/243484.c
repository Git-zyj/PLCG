/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (max(-81, (max(-1547700611, 9675018253047138484))));
                arr_6 [5] = ((((-((-(arr_0 [i_0] [i_1])))))) ? 1446107111 : (var_2 < -674443461));
            }
        }
    }

    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_10 = (((arr_0 [i_2 + 1] [i_2 - 3]) & (((!var_4) ? ((((arr_4 [i_2]) - (arr_4 [i_2])))) : 5861297581560359885))));
        var_11 ^= var_7;
        arr_10 [i_2] [12] = ((!(((-1 - (((arr_0 [i_2] [i_2 - 3]) ? 1 : (arr_0 [i_2 + 1] [i_2]))))))));
    }
    var_12 -= var_4;
    var_13 = (max(var_4, ((max(1, (1 < 1056843241))))));
    #pragma endscop
}
