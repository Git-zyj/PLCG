/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((((6 ? 91 : 134217720)))) >> (var_4 - 12059)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = (max((max(((max(-91, 71))), (((arr_3 [i_0] [i_4]) ? 88 : var_4)))), ((((((arr_5 [i_0]) ? (arr_0 [i_3] [i_4]) : 11583)) != -var_0)))));
                                var_11 += ((var_3 ? ((-(-32767 - 1))) : (((min(1, (arr_1 [i_3] [i_1])))))));
                                var_12 = (max(var_12, ((((((min(-5395757914782659474, (arr_0 [7] [i_3]))))) ? ((min(((-39 ^ (arr_6 [i_0] [15] [i_4]))), (((arr_8 [2] [i_1] [i_2] [4]) ? 32760 : var_5))))) : ((~(max(var_8, var_9)))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = arr_2 [i_0];
                                var_13 = (max(var_13, (--17)));
                            }
                        }
                    }
                    arr_14 [i_2] [i_0] [i_0] = ((((((arr_4 [i_0] [i_0 + 2] [i_2 + 1]) ? (arr_4 [i_0] [i_0 - 1] [i_2 + 1]) : -15))) ? (((arr_4 [i_0] [i_0 + 2] [i_2 - 2]) ^ 16805030906868924590)) : ((((!(arr_4 [i_0] [i_0 - 1] [i_2 - 2])))))));
                }
            }
        }
    }
    var_14 = (((((var_9 ? ((var_4 ? 0 : var_2)) : (!-32767)))) ? (var_0 ^ var_4) : (((var_1 | (~var_9))))));
    #pragma endscop
}
