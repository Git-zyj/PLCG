/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1125899906841600;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 += 1125899906841608;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] = ((1125899906841600 ? 2357239180 : 52706));
                                var_15 = (min(var_15, ((((max(65511, (arr_9 [i_3] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 3])))) ? ((var_3 ? ((6050202221148321661 >> (var_11 - 1783862088))) : -1125899906841601)) : 3613209093))));
                                var_16 = ((((((((-127 - 1) ? (arr_15 [i_0] [i_1] [i_0] [i_3] [i_4]) : (arr_4 [i_1])))) ? (((arr_5 [i_0] [i_1] [i_0]) ? var_7 : 1125899906841608)) : 2840032444))) ? ((max((arr_6 [i_0] [i_0]), (((arr_0 [i_3] [i_1]) ? 15087 : 3758096384))))) : (((arr_11 [i_0]) << (((((arr_10 [i_2] [i_3 + 3] [i_3 - 1] [i_3] [i_3 + 3]) + 5542244177786115497)) - 42)))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] |= (+(min(-124, (((arr_8 [i_1] [i_1] [i_1]) ? var_10 : (arr_15 [i_1] [i_1] [i_2] [i_0] [i_1]))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_0] = ((127 << (((-127 - 1) + 129))));
                            var_17 = (min(var_17, ((((((+(((arr_20 [i_8] [i_5]) ? var_1 : 9223372036854775807))))) ? (~var_3) : 2629)))));
                            arr_30 [i_0] = (!122);
                        }
                    }
                }
            }
            var_18 = var_0;
            var_19 = (min(var_19, (128 < -48)));
        }
    }
    #pragma endscop
}
