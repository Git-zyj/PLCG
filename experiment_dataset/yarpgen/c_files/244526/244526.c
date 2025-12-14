/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 &= ((!(((min(0, 0))))));
                var_11 = (((((((arr_1 [i_0 - 1] [i_0 - 1]) != (arr_1 [i_0 + 2] [i_0 + 2]))))) <= (var_3 && 1)));
                var_12 *= (min((max(0, (arr_0 [i_0 - 1]))), ((((var_0 < var_1) ? 7260379129014988900 : (arr_3 [i_0 - 1] [i_0 + 3]))))));
                var_13 = ((((((arr_1 [i_0 + 1] [i_0 + 1]) ? (~var_0) : (arr_2 [i_0])))) ? ((((min(var_4, 0))) ? var_8 : ((var_4 ? 1 : var_4)))) : 26));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 = (((arr_4 [i_0 + 2]) ? 247 : (arr_4 [i_0 + 2])));
                    var_15 = (((arr_6 [i_0 + 2]) - var_9));
                    var_16 = (arr_4 [i_0 + 3]);
                    var_17 = (((arr_2 [i_0]) <= (127 || 10511943610403808577)));
                    var_18 -= ((arr_1 [i_0 + 1] [i_0 + 1]) ? ((1 ? var_3 : (arr_5 [1]))) : (var_7 || 1));
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_19 += ((((max(var_7, var_5))) ? (min((((~(arr_0 [i_1])))), (arr_6 [i_0]))) : (max(-16052428659469736744, (arr_2 [1])))));
                    var_20 = ((-((1 ? 1 : 5))));
                }
            }
        }
    }
    var_21 = ((var_7 ? ((var_4 ? var_8 : (max(1, 4945979239091574764)))) : (((min(131, var_6)) + (var_0 | var_7)))));
    #pragma endscop
}
