/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-32767 - 1);
    var_12 = (max(var_5, ((((!var_2) ? ((var_0 ? 27259 : 27257)) : var_4)))));
    var_13 = ((((var_3 <= (max(var_7, var_3)))) ? ((((1048575 || (var_9 % 9007507285028834981))))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(-1048599, 448154585194407681));
                var_15 = (((var_7 ? var_6 : 9939547562118716154)));
                var_16 = ((4409 * ((-27260 ? (max(var_1, (arr_1 [i_0]))) : (arr_3 [i_0] [i_1])))));
                var_17 = (max((((27258 ? -5707442324465068744 : -27260))), (min(-35733, ((-5707442324465068744 ? 29803 : 7504104402516736839))))));
            }
        }
    }
    #pragma endscop
}
