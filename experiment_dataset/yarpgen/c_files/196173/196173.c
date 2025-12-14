/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((4095 ? (((((40 ? (arr_6 [i_0]) : 3480081436538579960)) == ((max(-1869354013594589013, 19)))))) : 1)))));
                    var_18 = (min((((((max(var_10, 2627830421))) ? ((1341405116230625415 ? 1 : 4294967294)) : (arr_4 [i_1] [i_2] [i_2])))), (((5663842591485408263 + var_11) ? (arr_0 [i_1] [i_0]) : var_8))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (((arr_2 [i_0]) == (arr_5 [9])));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((min(((min((arr_0 [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_0])))), (max((arr_1 [4] [i_2]), var_12)))) & (min(((var_7 ? -2229841914179645163 : -46)), (7 + 0)))));
                }
            }
        }
        arr_9 [i_0] = ((((min((arr_4 [i_0] [6] [i_0]), var_4))) ? (min(var_12, (arr_4 [4] [i_0] [i_0]))) : (((((arr_2 [i_0]) < 9223372036854775807))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_19 = arr_6 [i_3];
                    arr_17 [i_3] [i_4] [i_5] = (min((((!-20) ? ((((arr_16 [i_4]) ? (arr_13 [i_4] [i_5]) : var_7))) : (arr_12 [i_3 - 1] [i_3] [i_3 + 1]))), ((min((arr_13 [i_3 + 1] [i_3 - 3]), ((var_2 ? var_10 : var_4)))))));
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = var_1;
    #pragma endscop
}
