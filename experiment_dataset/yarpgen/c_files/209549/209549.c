/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (min(((((1954316601 && 128) < (min(217, -5025394477066625735))))), 116));
                    arr_9 [i_0] [i_0] [i_0] = 65535;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_5] [i_7] [i_7] [i_4] [i_3 - 1] = (-955729198952441614 ? 3399758661 : -1683054890480345817);
                                var_14 = ((((min(71, ((28613 ? 36928 : 1480460318))))) || (((((max(133, 2819569101114442380))) ? (95 || 28613) : ((max(-68, 107))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_15 = (max((((((max(16967, 2184192538420834206))) && 2184192538420834206))), ((~(max(8076598699096157360, -1557810452))))));
                                var_16 = (max(var_16, (min((((((2184192538420834206 ? 8188 : 36917))) ? (-9223372036854775807 - 1) : (max(-5646134856784410671, -96)))), (min(((28619 ? 1557810427 : -2184192538420834206)), (!6436933109663230587)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
