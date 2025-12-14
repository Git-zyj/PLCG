/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 *= (((((!(arr_2 [i_0] [i_0]))) ? (!48) : 52)));
                var_21 = (((((45 >> (((arr_1 [i_1] [6]) - 6122488425343911943))))) ? ((-((48 ? 1 : (arr_1 [9] [i_1]))))) : ((((!(arr_5 [i_0])))))));
                var_22 = (max(var_22, 1189907190));
            }
        }
    }
    var_23 = (((((var_5 ? 15 : var_15))) ? (var_10 * -5834145854966047467) : var_7));
    #pragma endscop
}
