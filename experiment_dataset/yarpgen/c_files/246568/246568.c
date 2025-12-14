/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(~var_3)));
    var_12 |= ((~(-9223372036854775807 - 1)));
    var_13 ^= (var_4 ? var_10 : var_9);
    var_14 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((((!19) ? (!9223372036854775807) : ((65534 ? 65534 : var_2))))) || (!1))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 -= ((929770176741279197 ? ((~(min(-3544558733590953687, (arr_6 [i_0] [6] [10]))))) : ((((arr_2 [0] [i_1 + 1]) ? 30115 : (arr_2 [i_2] [i_1 - 1]))))));
                    arr_7 [i_1] [10] |= ((!(((-98 ? 15217967940769627926 : (!65534))))));
                    var_17 -= (max((((((arr_0 [i_2]) < (arr_2 [13] [i_1]))))), ((-(var_3 & var_10)))));
                    arr_8 [i_1] [12] [i_1] [i_1] = 4;
                    var_18 = (min(var_18, (min((((!(arr_3 [i_1 - 1] [14])))), (arr_2 [i_1 - 1] [i_1 + 1])))));
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    arr_11 [6] |= ((-((2 ^ (arr_9 [i_0] [0] [5])))));
                    arr_12 [i_1] [i_1] [i_0] = 1;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_17 [15] [15] [i_1] = ((15827154737420321111 ? 2672862954 : 3544558733590953708));
                    var_19 |= (arr_0 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
