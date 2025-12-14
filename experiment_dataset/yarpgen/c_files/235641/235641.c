/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max((((min(var_7, var_11)) == (!152))), (1 && 61636)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (max(797, 2779765652540923781));
                var_14 = (((((!29) ? (((!(arr_3 [i_0] [i_1])))) : (((arr_4 [1] [i_0] [i_0]) ? var_9 : (arr_3 [i_1] [i_0])))))) ? (((((((~(arr_4 [i_0] [i_0] [i_1])))) || (((78897351217870512 ? 0 : 36))))))) : ((((min((arr_3 [1] [1]), (arr_4 [12] [i_0] [i_0])))) ? (arr_5 [i_1] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_0]))));
                var_15 |= (2170221631438721671 + 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] [i_2] = (((((-(arr_0 [i_3] [i_2])))) ? (max(var_5, (((-24761 ? 1563923657 : (arr_10 [2])))))) : ((((3899 + 3092699554) - 1)))));
                var_16 = (max(var_16, (arr_1 [i_2] [i_3])));
            }
        }
    }
    #pragma endscop
}
