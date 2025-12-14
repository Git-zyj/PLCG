/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_21 *= (arr_0 [i_1] [i_1]);
                var_22 = (((~(arr_3 [i_0]))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_23 *= (((240 < -31748) ? ((((!((max(-12048, -434644671))))))) : ((var_3 ? -6601397251764630268 : (31747 * 31731)))));
                    var_24 |= var_8;
                    var_25 = (min(var_25, ((max(((-(arr_1 [i_1 - 1]))), (arr_3 [1]))))));
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_26 = (min(var_26, ((min(12054, var_2)))));
                    var_27 ^= (max(-13130, (~128)));
                }
                var_28 = (max(var_28, -23111));
            }
        }
    }
    var_29 = (+-8922719575023117822);
    var_30 = (min(var_30, var_0));
    #pragma endscop
}
