/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((15381522101058622932 >= (1944048049 >= var_9))) ? -var_1 : ((-1944048038 ? (!13473) : (~-80)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (min(14049459270389848488, (((!(!1))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] [i_0] [i_1] = (((((-((9016307805435624085 ? var_7 : -1944048032))))) || (!1412238264)));
                    arr_13 [i_0] [i_1] [i_0] = max((((-1944048042 ^ var_18) ? ((3778789032720122164 ? 28973 : 1944048042)) : -1944048046)), (1944048039 || -6454));
                    arr_14 [i_0] [i_0] [i_2] = (max((((max(var_6, -1432312200)))), 1432312183));
                }
            }
        }
        arr_15 [i_0] [i_0] = ((((((!var_9) ? (!var_6) : ((var_2 ? -1944048027 : var_1))))) ? var_5 : (((((max(1, -16584))) || (((var_15 ? -1944048050 : var_6))))))));
    }
    var_21 = ((((-(23 >= var_17)))) >= ((9430436268273927530 ? (((-43525757 ? 1 : 21199))) : 9016307805435624086)));
    var_22 ^= (7013 / 21202);
    #pragma endscop
}
