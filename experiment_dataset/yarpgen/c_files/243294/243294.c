/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min(((var_8 * (var_2 > 18321486983616049901))), (~-27218)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((-1814791239 | 125257090093501726) != 17978425561798957415)));
                var_13 = ((((-(arr_1 [i_0] [i_0])))) != (((!var_6) ? (((((arr_4 [i_0]) || 23609)))) : (max(18321486983616049889, var_7)))));
                var_14 = (((((1313536173 | ((((arr_0 [3] [i_0]) < (arr_1 [i_0] [i_0]))))))) || (((arr_2 [i_1 - 2]) >= (arr_2 [i_1 + 1])))));
            }
        }
    }
    var_15 = (18321486983616049902 & var_11);
    #pragma endscop
}
