/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 != ((var_4 << ((((var_3 >> (var_11 - 35059))) - 2053230396175))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = ((15 && (((((!(arr_1 [i_1]))) ? (((var_10 && (arr_3 [i_1])))) : (((!(arr_3 [i_1])))))))));
                    var_14 += 9223372036854775789;
                }
            }
        }
    }
    var_15 = (((((14970 ^ 4523136417559043951) ? -var_2 : (max(13551938619495806188, var_9)))) + -var_1));
    #pragma endscop
}
