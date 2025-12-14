/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((((!(arr_4 [0] [i_0])))));
                arr_5 [i_1] &= (((!7) ? (((~((var_7 ? var_10 : var_4))))) : (max(14502549292750428286, ((((arr_1 [i_0]) ? 1 : 3)))))));
            }
        }
    }
    var_13 = ((-((max(var_9, (min(var_9, 1)))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            {
                var_14 ^= (((((var_5 ? (var_2 - var_5) : (!var_4)))) ? ((-((max(1, var_8))))) : (arr_8 [i_3 + 1] [i_3 + 1])));
                var_15 = (min(var_15, (~-var_3)));
                var_16 = (min(var_16, (((+((((arr_11 [2]) && (!var_3)))))))));

                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    var_17 = (min((max(906686881, ((min(33899, var_8))))), ((-(arr_11 [i_3])))));
                    var_18 = (min(var_18, var_9));
                    var_19 = (min(var_19, ((((-(arr_10 [22])))))));
                }
                arr_14 [i_3] [i_3] [i_2] = ((((((min(-298313600, 0)) == (var_8 == var_4)))) % ((((((arr_10 [i_3]) ? (arr_9 [i_3]) : var_7))) ? ((497763870 ? var_7 : var_5)) : ((-(arr_11 [i_3])))))));
            }
        }
    }
    var_20 = ((((((var_8 ? var_6 : var_11)))) ? ((((1 ? var_4 : var_2)))) : ((((min(-906686897, var_8))) ? var_1 : var_10))));
    #pragma endscop
}
