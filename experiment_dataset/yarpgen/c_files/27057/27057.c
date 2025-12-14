/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((var_2 - (min((min(var_13, var_9)), ((min(1, var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] |= ((-22466 ? 30 : -51));
                    var_15 = ((10387 ? -1583737441644810129 : 11531));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((10400 - ((min(-9223372036854775783, 1)))));
                                var_17 = (min(var_17, (((-20950 >= (min(46, 234881024)))))));
                                var_18 += ((((((((32757 ? 3417669230 : 1))) ? (arr_9 [i_0] [i_3] [i_2]) : (((min(var_0, (arr_1 [i_3] [i_2])))))))) ? var_3 : ((min((max(6, 10390)), 1)))));
                                var_19 = ((min(((-(arr_9 [i_0] [i_1] [i_4])), ((max(1239230705, (arr_2 [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (~var_6);
    #pragma endscop
}
