/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~1) == var_9));
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 += (max((min((-2147483647 - 1), (min(7522, (arr_3 [i_0] [i_0 + 4] [i_1]))))), (max(((((arr_2 [i_0]) & (arr_2 [i_1])))), (min((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_0] [i_0])))))));
                var_13 = ((-((var_8 >> (((arr_3 [i_0 + 4] [i_0 + 3] [i_0 - 1]) - 651256629))))));
            }
        }
    }
    var_14 = -var_7;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {
                arr_10 [14] [i_3] = (4216323883 ? ((((((((arr_7 [i_2] [i_2] [i_2 - 3]) ? (arr_6 [i_2] [i_3]) : (arr_7 [i_2 - 1] [i_3 - 1] [i_2])))) && var_7)))) : (arr_8 [i_2]));
                arr_11 [i_2] [i_3] = (max((((~(arr_9 [i_2 - 2])))), (((arr_6 [i_2] [i_3]) ? ((4093675391363577191 ? (arr_7 [i_3] [15] [i_2 + 3]) : (arr_8 [i_2]))) : ((((arr_6 [i_2] [i_3]) ? (arr_9 [i_2]) : (arr_6 [i_2] [8]))))))));
            }
        }
    }
    #pragma endscop
}
