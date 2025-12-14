/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 45764;
    var_16 = ((45737 ? 19771 : (((((-64 ? 6875829253795498483 : 28478))) ? 64707 : 7702753725253731617))));
    var_17 = (((((min(-25, 45782))) ? ((min(-65, 2903583712772639856))) : (min(7119961216024708699, -8876737130604069492)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~((-(arr_3 [i_0])))));
                arr_7 [3] [i_1] = (((((-(((arr_0 [i_1 + 1]) ? -26801 : -26801))))) ? (((18446744073709551612 ? 2863413690 : (arr_5 [i_0] [i_0] [i_1 + 1])))) : (max((((988874140 ? -26801 : -8876737130604069492))), ((222 ? 493175438 : 11570914819914053134))))));
            }
        }
    }
    var_18 = -98;
    #pragma endscop
}
