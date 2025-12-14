/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((((max(var_15, 2))) + (((-((2487407236 ? (arr_1 [i_1] [11]) : var_7)))))));
                arr_6 [1] [10] = (arr_1 [i_1] [i_1]);
                var_19 = ((((!(arr_5 [1] [i_1 - 1]))) ? (32767 * 32767) : (((32767 ? -26627 : 1685458074)))));
                var_20 = ((((min((arr_5 [i_0 + 1] [i_0 + 1]), (~5438)))) ? -var_13 : ((((((var_3 ? var_12 : var_9))) ? (min(57, (arr_5 [i_0] [i_0 - 1]))) : -var_3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            {
                arr_14 [i_3] = (max(((var_16 << ((((32754 ? 125 : var_2)) - 123)))), ((-32755 ? var_4 : ((-32754 ? 35786 : 254))))));
                arr_15 [i_2] [i_3] = ((((min((!4254464979), ((68 ? 35286 : var_1))))) ? var_14 : ((((((arr_2 [i_3]) ? var_15 : 0))) ? (var_11 * 29749) : (arr_10 [i_3])))));
            }
        }
    }
    var_21 = -62;
    #pragma endscop
}
