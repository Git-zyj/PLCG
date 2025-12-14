/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] &= (min(916693324093398022, -1540158057));
                var_17 = (((((1540158066 ? (arr_0 [i_1 - 2]) : 916693324093398022)) | 66)) | ((~(~0))));
            }
        }
    }
    var_18 = (max(((var_11 * (((min(var_12, var_16)))))), (((8080229865078954717 > ((var_6 ? 101 : 10366514208630596915)))))));
    var_19 = (((var_10 + 2147483647) << ((((min(5524717565569297058, 916693324093398022))) - 916693324093398022))));
    #pragma endscop
}
