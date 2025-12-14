/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((min(var_5, (min(var_2, 178))))), (min((var_0 | var_6), ((var_9 ? 0 : 15955066102710621732))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_12 = ((248 ? ((-5896145657991491585 ? ((4294967269 & (arr_6 [i_0] [i_1] [10] [i_3 - 2]))) : (((max((arr_8 [i_0]), (arr_4 [i_0] [i_0 - 1]))))))) : 6621671907333285584));
                            var_13 = ((max((arr_0 [i_0 - 1] [i_0]), 13)));
                            var_14 = (((((arr_8 [13]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) * (((((3234367611972363853 ? (arr_12 [i_0] [i_1 - 1] [i_0]) : 2622286197)) == ((((arr_4 [i_1] [i_1]) ? 0 : 9763))))))));
                            var_15 = ((-(((arr_12 [i_0] [i_1] [i_0]) ? var_8 : (arr_12 [i_0] [i_1 - 1] [i_0])))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_16 = (arr_2 [i_0 - 1] [i_1 - 1] [i_0]);
                            arr_16 [i_0] = 1;
                            var_17 = (((min(((max(var_6, -83))), var_4))) ? (((max((max((arr_2 [i_0 - 1] [2] [i_0]), var_10)), (arr_2 [i_1 - 1] [4] [i_0]))))) : (min((arr_13 [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 2]), 13049097147836385641)));
                        }
                        arr_17 [i_0 + 1] [i_0] = (((1 && 3019218885515721841) ? (((0 && (((6745353854498423551 ? 24 : var_6)))))) : (80 * 21877)));
                        arr_18 [i_2] [i_1 + 1] [i_0] [i_3 - 2] [11] [13] = (min(((~(arr_3 [i_0 + 1] [i_3 - 1]))), (((arr_3 [i_0 - 1] [i_1]) ? 52 : (arr_3 [i_0 - 1] [13])))));
                        var_18 = (((((+(min((-9223372036854775807 - 1), (arr_11 [i_0] [10] [i_0] [13] [i_0])))))) ? -15 : (((((9 && (arr_11 [i_0 - 1] [4] [i_0] [i_0 - 1] [i_0 - 1]))))))));
                    }
                    var_19 += ((!(arr_15 [i_0] [i_1 + 1])));
                    var_20 = ((((-(arr_13 [i_1] [i_1 - 1] [i_0] [i_1 - 1] [i_0] [i_0 - 1]))) / ((((0 ? 41465 : 1265350190))))));
                }
            }
        }
    }
    #pragma endscop
}
