/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((min((min(4237238225, var_2)), ((max(var_7, (arr_0 [5]))))))) ? var_6 : ((((((arr_3 [i_0]) < (arr_2 [i_0])))) | (arr_3 [i_1 + 1])))))));
                var_11 = (arr_4 [11]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                var_12 = (min(var_12, (((((min((arr_3 [i_2 - 1]), ((max((arr_6 [3]), var_7)))))) ? 249 : ((~(arr_4 [7]))))))));
                arr_12 [i_2] = ((((-((1 ? 57729090 : 1)))) + (((var_3 != 20) ? (arr_5 [i_2] [i_3]) : (((max((arr_10 [i_2]), 32756))))))));
            }
        }
    }
    var_13 = ((((((((var_6 ? var_1 : var_3))) ? (((min(var_8, var_1)))) : 6527783948874563847))) ? var_3 : var_0));
    var_14 = (1 >= -3349687594239644618);
    #pragma endscop
}
