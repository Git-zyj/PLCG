/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_2] = -3317157008475582851;
                    arr_8 [i_0] [i_0] [i_2] = var_7;
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_21 = (min(var_21, (((var_7 << ((((-(arr_1 [i_3 - 1]))) + 977445524466031310)))))));
                    arr_12 [i_3] = var_8;
                    arr_13 [i_0] [15] [i_1] [i_0] = min(((~(arr_10 [i_0] [i_3 + 1] [i_3 + 1] [i_3]))), ((((min(5, 0))))));
                    arr_14 [i_0] [i_0] [i_0] = 0;
                    var_22 = (min(var_22, (((+((min((arr_9 [i_3 - 1]), 0))))))));
                }
                var_23 *= ((((!(15408353017180747579 >= var_16))) || (((min(-4550985640421997301, 480366829913369262))))));
                arr_15 [8] = var_8;
                arr_16 [i_0] = max((((!(arr_9 [i_0])))), (((arr_10 [15] [1] [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (-9223372036854775807 - 1))));
            }
        }
    }
    #pragma endscop
}
