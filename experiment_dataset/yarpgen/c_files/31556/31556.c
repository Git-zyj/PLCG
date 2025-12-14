/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (max((max(((max(40, 1))), (31 / 150))), ((max(-120, 39020)))));
                    arr_8 [i_0] [i_2] [i_1] [i_0] = (max(((14749146316549973778 ? -123 : 243)), -126));
                    var_19 = (max((max(10, -121)), (((((max(33, -13))) == -31)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((((max(14749146316549973778, ((13083559471171011225 ? -8611297577367084555 : 11544063591648110353))))) ? (2037460150 & -8611297577367084555) : ((max((3648891602 + 33), ((max(1, 9))))))));
                                var_20 *= (max((max(1, (max((-32767 - 1), -3831105275163974354)))), ((max(-16938, (1 - 35728))))));
                                arr_14 [i_1] [i_0] [i_3] [i_0] [i_2] [i_1] [i_0] = (((max(((1 ? 3697597757159577821 : 16342257579604748589)), 143)) + (0 | -1975007536341474859)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = max(((((max(2057983279648270344, 1)) <= (((max(100, -93))))))), (max((((3697597757159577821 ? (-127 - 1) : 83))), (max(14749146316549973778, -110)))));
    #pragma endscop
}
