/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((min(-9469, 1)))));
                    var_14 -= (max((((((max(7303466153688282984, (arr_5 [i_0] [i_0] [i_0])))) ? var_7 : ((-194333556 ? 96 : var_8))))), (((((var_12 ? (arr_2 [i_0]) : -1367113444))) ? 0 : (min(1080940999, 1))))));
                    var_15 = (max(var_15, ((((((var_10 ? var_3 : (arr_5 [i_2] [i_2 + 2] [i_2 - 4])))) ? (((((var_3 ? var_9 : (arr_4 [i_0] [i_1])))) ? ((var_9 ? 1 : (arr_0 [i_1]))) : (((-127 - 1) ? (arr_1 [i_0]) : var_1)))) : (((arr_5 [i_2 + 3] [i_1] [i_0]) ? (((arr_4 [i_0] [i_2]) ? var_5 : var_1)) : ((max(var_12, (arr_3 [i_0])))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (max(21635, 7303466153688282976));
                                var_17 = (max(var_17, ((min((max(var_8, (arr_9 [i_3 - 1] [i_1] [i_0] [i_2 - 1] [i_1]))), ((var_12 ? 3265589511 : var_4)))))));
                                var_18 = (max(var_18, ((((((((65535 ? -23390459 : 7303466153688282984))) ? ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : 1))) : var_0))) ? (min((((arr_1 [i_0]) ? var_10 : (arr_8 [i_0] [i_0] [i_2] [i_0]))), ((min(-7154, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (max((((var_7 ? (arr_5 [i_0] [i_3 - 1] [i_4]) : (arr_1 [i_3])))), ((-13058 ? (-2147483647 - 1) : (arr_4 [i_1] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 -= ((var_10 ? (((((0 ? 1 : var_7))) ? (((var_4 ? 17193 : 14547))) : (min(var_10, 65535)))) : ((var_9 ? ((var_3 ? var_10 : 4193792)) : (((60450 ? var_2 : var_9)))))));
    var_20 = ((var_5 ? ((((min(var_6, var_0))) ? ((var_7 ? 173 : var_4)) : var_5)) : var_8));
    var_21 -= (max((((((var_8 ? var_2 : var_10))) ? (((-32767 - 1) ? -950243168 : 3557749282)) : var_8)), var_7));
    #pragma endscop
}
