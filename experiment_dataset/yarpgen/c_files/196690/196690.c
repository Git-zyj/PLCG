/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 1382001038;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, 536870911));
                            arr_9 [i_1] [i_0] = 3758096385;
                            var_22 = (max(var_22, ((min((((7272 ? -11706 : 191620020))), (max(4103347284, -6412857936445164654)))))));
                            arr_10 [10] [i_1] [i_2] [i_2] &= (max((((846178589 ? 260046848 : -260046868))), ((65535 ? 571569364 : -77))));
                            var_23 = 260046833;
                        }
                    }
                }
                var_24 = (((min((((17464 ? -1 : 65512))), ((541 ? 65535 : 260046871))))) ? 1 : 28);
                arr_11 [i_0] [5] [i_1] = (max((max(3072, 56)), 0));
            }
        }
    }
    var_25 = var_5;
    var_26 = ((((max(var_0, ((1 ? 1048575 : 1))))) ? 0 : -6513500613349510333));
    #pragma endscop
}
