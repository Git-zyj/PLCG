/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((~(max(3814152785, var_6))))) ? 50681 : var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 |= (((((arr_0 [i_2]) + 2147483647)) << (((arr_4 [i_1 - 1] [i_1 - 1] [i_0 - 2]) - 10498940478504423801))));
                    var_16 = (min(var_16, (((var_12 ? (((var_7 ? (arr_8 [i_0 - 2]) : (arr_8 [i_0 - 2])))) : (((arr_8 [i_0 - 1]) ^ (((arr_6 [i_2]) ? (arr_9 [i_0] [10] [10] [i_2]) : (arr_3 [i_2]))))))))));
                    var_17 = (min(var_17, -12));
                }
            }
        }
    }
    var_18 = min((!var_0), (((40646 + var_10) ? 985042543967995310 : var_11)));
    var_19 = (!((min(((var_3 ? 17461701529741556325 : var_0)), var_0))));
    #pragma endscop
}
