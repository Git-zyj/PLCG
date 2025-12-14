/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_11 = ((((((arr_1 [i_1]) ? var_1 : var_6))) ? ((((arr_0 [i_0] [i_1]) >> 0))) : (arr_3 [i_1] [i_0] [i_0])));
            var_12 = ((1411141898 ? (((arr_0 [i_0] [i_1]) ? var_10 : 1411141898)) : (!-2955889617000751755)));
        }
        var_13 = ((((((arr_3 [i_0 + 4] [i_0 + 3] [i_0 + 3]) ? 1840836763 : 58598))) ? -var_9 : ((15050696655268809730 ? 0 : (arr_1 [i_0])))));
        var_14 &= ((~(var_4 || 1411141898)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_15 &= ((-902774846 <= ((2718089339 ? 1 : 3396047418440741888))));
        var_16 = (((8658230659292172223 ? 902774854 : -1)));
        var_17 = (((((1 ? 255 : 16))) ? ((6937 ? (arr_4 [i_2]) : 12292286124200460177)) : (-902774854 != 35184372088831)));
        var_18 = (9123264962229442030 ? (arr_6 [i_2]) : (arr_6 [i_2]));
        arr_7 [i_2] = ((var_1 ? (!-6) : ((241 ^ (arr_4 [i_2])))));
    }
    var_19 ^= (((((-((5254293960796813836 ? 17592186044415 : -902774869))))) ? (min(((min(var_5, -17))), var_1)) : (((var_8 ? var_8 : ((var_7 ? 18 : 240)))))));
    #pragma endscop
}
