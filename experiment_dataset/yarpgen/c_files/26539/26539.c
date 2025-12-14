/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_3 ? 15080121878662425034 : ((max(0, var_7))))))));
    var_19 = (702184609 > 3189196451139792052);
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((((arr_4 [i_1 - 1] [8] [i_1 - 1]) ? ((max(4294967277, (arr_2 [i_1] [i_1] [i_1 - 1])))) : 7478270321889675002)), ((min((((arr_3 [i_0] [12]) <= 17)), (arr_1 [i_0]))))));
                arr_6 [i_0] [i_0] = ((((min(-4097159598652482111, 15257547622569759566))) ? 5842450092678013926 : 702184608));
                arr_7 [12] [1] [1] &= 296097344;
            }
        }
    }
    #pragma endscop
}
