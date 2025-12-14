/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -4407044476853294731;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [11] [i_0] = (max(((((arr_3 [i_0] [i_1] [i_1]) * var_2))), var_9));
                var_17 = (((var_6 ? -4407044476853294715 : (arr_4 [i_0] [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_18 ^= (min(-4407044476853294737, 6707463608092750999));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [i_4] [14] [10] = var_0;
                            var_19 = (((var_14 & var_1) ? ((-3830065713992741973 ? 4407044476853294741 : 6067367667293864667)) : 4407044476853294744));
                            var_20 += (~(min((~-10), ((-5388707528023185500 ? 6067367667293864682 : var_10)))));
                            var_21 = (max(var_21, var_7));
                        }
                    }
                }
                var_22 = ((1 ? 3830065713992741972 : -4407044476853294726));
            }
        }
    }
    var_23 &= var_9;
    var_24 = var_15;
    #pragma endscop
}
