/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((((15490007367967827335 == (((max(48, (-32767 - 1))))))) ? (min(-2956736705741724281, 2956736705741724281)) : var_18));
    var_21 = (max(var_21, ((-1 ? var_8 : var_17))));
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_23 = ((~((((1048572 ? -5846531433961939433 : 18446744073708503023))))));
                            arr_8 [i_0] [i_0] [2] [i_3] = 15490007367967827334;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_24 = (max((!15490007367967827334), 5846531433961939432));
                            var_25 = (max(var_25, -7848460113041459635));
                            var_26 += ((!(((-7456 ? 67 : -85)))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (+-2956736705741724282);
            }
        }
    }
    var_27 &= ((((((2956736705741724281 ? (-127 - 1) : 21561))) ? (3300 && 3300) : (~2956736705741724258))));
    #pragma endscop
}
