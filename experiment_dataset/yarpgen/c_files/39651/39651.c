/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((~var_15) ? 80 : var_4)), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 60;
                var_18 = (!((!(arr_4 [i_1]))));
                var_19 = ((((~(-61 ^ 106))) - 16384));
                var_20 += var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_21 = arr_2 [6] [i_2];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4] [1] = (((((((((arr_8 [20]) ? -32750 : 229))) ? var_3 : ((~(arr_18 [i_3])))))) ? -215 : ((~((min(-80, var_6)))))));
                            var_22 = (198 && -16385);
                        }
                    }
                }
                var_23 += ((((max((~var_3), (arr_18 [i_2])))) ? ((16374 ? (7402727447396533920 < var_10) : (!2147483647))) : ((~((min(var_4, -60)))))));
            }
        }
    }
    #pragma endscop
}
