/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 ^= (min(((-var_8 ? (max(17350058749856212947, 17350058749856212972)) : (((var_2 ? -3174561376905790258 : var_11))))), (17350058749856212972 / 1096685323853338670)));
                    arr_9 [i_0] [i_1 + 1] [i_0] = ((~(((!(arr_7 [i_0] [i_2 - 1] [i_2]))))));
                    var_16 = var_9;
                    var_17 = (min(var_17, 11486895335415961017));
                    arr_10 [i_0] = (!12777983995140382552);
                }
            }
        }
    }
    var_18 = ((-((((min(var_3, var_10))) ? 31 : 4294967261))));
    var_19 = var_5;
    #pragma endscop
}
