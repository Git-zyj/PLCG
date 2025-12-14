/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((!(var_6 <= 902726923)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [4] [i_1] = (((6 | (arr_1 [i_0]))));
                arr_6 [10] [i_1] = ((((3806974687926054816 <= (arr_4 [i_0]))) ? (arr_1 [i_1]) : 14639769385783496799));
                arr_7 [i_0] [i_0] [i_0] = ((arr_1 [i_0]) - ((251 ? 3806974687926054816 : 3806974687926054816)));
                var_11 = (min(var_11, (((56 ? (!249) : (!-1883215352))))));
            }
        }
    }
    var_12 = (!var_5);
    var_13 = (min(var_13, 5782293757421315119));
    #pragma endscop
}
