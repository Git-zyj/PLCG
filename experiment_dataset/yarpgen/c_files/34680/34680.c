/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (659606797 ? var_17 : (max((var_1 / 7219987651112981618), (3635360499 < 63161))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_2] = 242996855;
                    var_19 = (max(var_19, (arr_9 [i_1] [i_1] [i_1])));
                    var_20 = ((!(((-32 ? (~4051970440) : ((((!(arr_3 [2] [i_1]))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 += (max(((!(2129011289 >= 3675760616))), 1));
                                arr_17 [i_2] = 235;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = (((132 | 242996870) << (((max(((-10070298 ? (arr_12 [i_3] [i_3]) : 49823)), 1151947943)) - 14286821126846206359))));
                            }
                        }
                    }
                }
            }
        }
        var_22 -= 1151947945;
        arr_19 [i_0] = ((((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < -576133305))) - ((~((32 ? (arr_9 [i_0] [i_0] [i_0]) : -764542992))))));
    }
    #pragma endscop
}
