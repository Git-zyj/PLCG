/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(1065353216, (((93485652 ? 4970140175673498176 : 40970))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_0] [i_2] = (2234385059 / -26549);
                    arr_8 [16] [16] = (-12974092849701564384 / -1065353218);
                    arr_9 [i_1] [i_1] = (((((~(max(-1065353217, 255))))) ? 0 : -1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_23 [3] [i_4 - 3] [i_5] [i_3] [3] = (min((((40970 ? 2147483643 : -2147483632))), 2234385060));
                                arr_24 [i_6] [i_4] [i_5] [i_5] = (((min((min(2234385059, -1065353216)), (((6797819732261595973 ? 14700 : 15935)))))) ? -1065353220 : (((24250 ? 9511280208155345320 : 2234385039))));
                            }
                        }
                    }
                }
                arr_25 [i_3] = ((2944167646 ^ (~-1739580816918518093)));
            }
        }
    }
    #pragma endscop
}
