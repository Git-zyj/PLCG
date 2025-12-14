/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_9 ? var_7 : (!5705452123632079748)))) ? var_3 : (((((var_10 ? var_8 : -8570059771816247363))) ? ((var_2 ? -295015777 : -8744037597277842364)) : ((var_0 ? var_6 : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((~(((min(var_5, 647526575)) + ((~(arr_1 [i_0])))))));
                var_17 += (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = var_3;
                            var_19 = (3034236665002159707 ? -850356129263329824 : -6140134233657618649);
                        }
                    }
                }
                var_20 = (max(((282899219802374955 ? (arr_4 [i_1 + 3] [i_0 + 1] [i_0 + 1]) : (arr_7 [i_1 + 3] [i_1 - 3] [i_0] [i_0 + 1]))), ((((((850356129263329823 ? var_9 : 850356129263329824))) ? ((((arr_10 [i_0] [i_1] [i_1] [i_1 + 3]) < 850356129263329823))) : (((!(arr_10 [i_0] [i_0] [10] [i_1])))))))));
                var_21 = ((((((-850356129263329823 + 9223372036854775807) >> (((arr_6 [i_0]) + 810707008))))) ? (-3805651407906785312 | 16) : (arr_6 [i_0 + 1])));
            }
        }
    }
    var_22 += -var_8;
    #pragma endscop
}
