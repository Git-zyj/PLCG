/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((min(((-16419 ? var_10 : 8126464)), ((min(var_10, var_4)))))) ? var_1 : ((13674654253830345809 ? 242833621 : -991942878)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max(((-((-(arr_1 [i_0]))))), (arr_3 [i_1] [i_1] [i_0]))))));
                var_13 = (arr_4 [i_1] [i_0]);
            }
        }
    }
    var_14 = (max(var_14, (((((!(var_8 % var_3))) ? ((((((var_4 ? var_7 : var_1))) == ((var_10 ? var_10 : var_2))))) : ((((min(var_1, 34394))) ? (var_7 > var_3) : ((var_5 ? var_5 : var_1)))))))));
    var_15 = ((!var_1) ? (((min(var_7, (!var_8))))) : (min(var_0, ((var_1 ? var_2 : 44393)))));
    #pragma endscop
}
