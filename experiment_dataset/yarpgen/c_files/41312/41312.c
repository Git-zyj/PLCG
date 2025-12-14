/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((var_6 ? -1129455989470697681 : var_9))), (((var_5 >= ((max(var_4, var_11))))))));
    var_13 = ((((max(var_4, (min(var_11, 0))))) || ((((((-168396074 ? var_6 : var_1))) ^ ((19611 ? -168396044 : -2191704324060544508)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((min((((arr_1 [i_0] [i_3 - 1]) ? (arr_1 [i_4] [i_3 - 2]) : (arr_1 [i_0 - 2] [i_3 - 2]))), (((arr_1 [i_0] [i_3 - 2]) >> (arr_1 [i_0 - 4] [i_3 + 2]))))))));
                                var_15 = (max(var_15, var_3));
                                arr_12 [i_2] [i_2 + 1] [i_2] [i_2] [i_1] = -3914847366738266632;
                                arr_13 [i_4 + 1] [i_3] [i_1] [i_1 + 2] [i_0] = (min((min(((min(var_6, (arr_1 [8] [i_1])))), 1616488625)), (((((-3914847366738266632 ? -2191704324060544512 : 14252302230418479479)) <= (~var_7))))));
                            }
                        }
                    }
                    var_16 = (max(var_16, (arr_3 [i_0] [i_1 + 2] [i_0])));
                }
            }
        }
    }
    var_17 = (min((min(((-3914847366738266632 ? 18774 : var_9)), var_6)), ((var_2 ? -2191704324060544521 : (~168396074)))));
    #pragma endscop
}
