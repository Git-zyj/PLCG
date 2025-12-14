/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max(21738, (34617 | 42))))));
                                var_21 &= (max((max(55, (min(0, 3348537416401512690)))), 0));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = ((12 < (15072537068836141822 | 9)));
                    arr_15 [i_2] [i_0] [i_0] [i_0] = ((((((9007130535264256 | 4847541966672121636) | (min(3374207004873409811, 112))))) ? (min(1416917393, (((29956 ? 0 : -6))))) : 44));
                }
            }
        }
    }
    var_22 &= 7619591618097078865;
    #pragma endscop
}
