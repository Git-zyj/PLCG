/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [i_0 - 1] [i_1] [i_2] [i_2] = 14445442522362434846;
                    arr_12 [1] [i_1] [i_1] = 1;
                    var_20 = (178526888 ? 178526888 : 124);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {

                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    var_21 = (((min(var_10, 1)) != (((((var_8 ? var_9 : var_18)) != 335895313)))));
                    var_22 = ((((((min((arr_0 [i_3]), 14445442522362434846))) ? var_12 : (((max(141, 741)))))) | (((arr_16 [i_3] [i_5 - 2] [i_3]) ? (-6626157302955867733 | 10595) : (((75 << (var_14 - 52))))))));
                    var_23 = (max(var_23, ((((((1 ? -24 : 1)) * (34 / var_14)))))));
                }
                var_24 = (max(2147483647, -86));
            }
        }
    }
    #pragma endscop
}
