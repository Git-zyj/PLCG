/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max((!var_13), (min(var_5, var_9)))), (max(var_12, ((var_14 ? -64 : 24996))))));
    var_20 = ((((var_17 ? (32767 <= 232) : (var_13 + var_12)))) ? ((((((50095 ? var_12 : 15440)) > (max(-20, 2147483647)))))) : (((((var_18 ? var_5 : 59))) ? (((var_7 ? 2147483646 : 25893))) : (min(var_2, var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (((arr_1 [i_0] [i_0]) ? (((((var_8 % (arr_0 [i_0])))) ? (var_17 == var_10) : var_13)) : 50095));
                var_22 = ((((max((-97 && var_12), (((arr_2 [i_0] [i_0] [i_1]) & 1))))) ? (1 <= -119) : ((((((arr_2 [i_0] [i_0] [i_1]) ? 0 : 14796529547067853029))) ? 0 : ((var_9 ? -13619 : -14))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, (((~(((!(arr_10 [i_4] [i_4] [i_3] [i_2])))))))));
                    var_24 = var_5;
                    var_25 = (max(var_25, (((((((((var_10 ? 23 : -77))) ? (arr_11 [i_3] [i_3] [i_3] [i_3]) : -var_6))) ? (max(((((arr_0 [i_2]) <= (arr_0 [i_2])))), (~var_4))) : (((arr_3 [i_2]) >> ((25893 ? 0 : 49075)))))))));
                    var_26 = ((-2147483647 ? (((var_1 ? ((max(var_0, var_0))) : -318543710))) : ((((min((arr_1 [i_2] [i_2]), var_16))) ? ((0 ? 8989607068696576 : 1)) : ((((arr_2 [i_3] [i_3] [i_4]) ? var_2 : var_15)))))));
                }
            }
        }
    }
    #pragma endscop
}
