/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((((9223372036854775807 ? 680561340 : ((40251 ? 9223372036854775807 : 1))))) ? -var_9 : var_14)))));
                var_20 = (max(var_20, (((((min((arr_1 [i_0 + 2] [i_1]), -634505344))) >= (((var_7 ? 16088262675225753930 : 0))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    var_21 = (arr_11 [i_2] [i_3] [i_3] [i_4]);
                    var_22 = (((-32767 - 1) ? (704322086 / 387186901934562922) : 1));
                }
            }
        }
    }
    #pragma endscop
}
