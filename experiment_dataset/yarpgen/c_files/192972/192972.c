/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((((((max(var_2, var_5))) & ((((arr_3 [i_0] [i_0] [22]) >= (arr_1 [i_0])))))) / var_1));
                    var_12 = (((((2789598400349995058 ? -1763 : 177))) ? (((arr_1 [i_0]) ^ var_0)) : (((-2147483647 - 1) | (arr_1 [i_1])))));
                    var_13 *= ((((((((arr_1 [13]) ? 692671133 : (-2147483647 - 1)))) >= (arr_4 [i_2] [20] [i_2] [i_2]))) ? -4975 : var_8));
                    var_14 = (max(var_14, ((((arr_2 [i_2] [i_2]) ? (arr_4 [i_2] [i_1] [i_2] [i_2]) : (max(11345248014359247548, var_4)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_15 -= (max(-23023, 200));
                    arr_13 [i_3] [i_4] [i_4] [i_4] = ((+(max((arr_0 [i_4] [i_5]), 2147483647))));
                    var_16 = (max((arr_9 [i_3]), (min(((min((arr_2 [i_4] [i_4]), var_0))), var_8))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 7;i_8 += 1)
                        {
                            {
                                var_17 = (min(var_17, 37));
                                arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] = -119;
                                var_18 = ((var_2 ? var_3 : 3037705041424884115));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= ((((((var_8 >> (17039699816503487464 - 17039699816503487464))) ? ((((var_7 + 2147483647) >> (13319681299793618348 - 13319681299793618327)))) : (max(35438, var_9))))));
    var_20 = (var_9 < var_4);
    #pragma endscop
}
