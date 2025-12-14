/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? var_12 : ((min(((67 ? -8983 : -67)), 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = (17921 < -67);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 ^= (+((((max((arr_4 [1] [1] [0]), var_12))) ? var_7 : var_8)));
                    arr_10 [i_0] [i_0] [6] = (((arr_3 [i_0] [i_0]) >> (var_7 - 2564077343804904888)));
                    var_19 = var_5;
                }

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_20 = (max(46582, 65));
                                var_21 ^= max((min((!25214), (arr_2 [1]))), (arr_4 [i_0] [i_0] [14]));
                                arr_19 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = (min(-191, ((-(arr_16 [i_3] [i_4 - 1] [i_5] [i_4 - 1] [8] [0])))));
                            }
                        }
                    }
                    arr_20 [i_0] [11] [i_0] [i_0] = 2147483647;
                }
            }
        }
    }
    #pragma endscop
}
