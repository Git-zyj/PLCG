/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(6600515782029223775, 6600515782029223775));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (max((min(((min(-858, 16777215))), (max(6600515782029223796, 1722133120050560430)))), ((min(((min((arr_3 [1]), var_0))), (min(-6600515782029223789, (arr_3 [i_1]))))))));
                var_15 = (min(6600515782029223782, (min(0, 16724610953658991176))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 *= (min((min((min(var_12, var_4)), (max(var_3, 17684933165194838320)))), (min(133693440, 16724610953658991185))));
                            var_17 = (min((min((max(var_11, 16724610953658991176)), (min(1722133120050560440, (arr_6 [i_0] [19] [i_2] [i_3]))))), (max((min(var_12, (arr_5 [i_0] [i_1] [i_2 - 1] [i_2]))), (max(var_3, var_9))))));
                            var_18 = (min(((max(101, 4278190081))), (min(((min(var_9, 6600515782029223788))), (max(65, 17684933165194838330))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (min((max((min(var_6, var_12)), (max(18446744073709551613, var_8)))), (min((min(var_4, 1722133120050560430)), ((min(120, -1)))))));
    #pragma endscop
}
