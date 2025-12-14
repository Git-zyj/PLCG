/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(max((var_4 && var_15), (1 || var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_0 [i_1])));
                    var_18 -= (!80);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_1] [i_1] = (((arr_12 [i_0 - 3] [i_0 - 3]) ? (min((arr_11 [7] [i_0 - 2] [i_3 - 2] [i_3] [7]), (arr_4 [i_0 - 4] [i_1] [i_3 - 1]))) : ((min(1242671599, (max((arr_12 [i_1] [i_2]), 356724644)))))));
                                var_19 = ((~((((min(var_14, -2147483639))) ? (max(12536300777085445009, (arr_12 [4] [i_0]))) : ((((arr_13 [i_0] [i_0] [i_0] [i_3] [i_4]) >> (((arr_2 [i_4] [i_2] [i_2]) - 18253122524214592647)))))))));
                                arr_15 [i_1] [14] [i_2] [i_3] [i_4] [i_4] = 12536300777085445019;
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_2] = ((((min(7668625316328838360, (~1152921504606846976)))) ? 697596461 : 2147483638));
                    var_20 = (max(var_20, ((-8898465244573721983 >= (max(-471367654, 2716149442520089345))))));
                }
            }
        }
    }
    #pragma endscop
}
