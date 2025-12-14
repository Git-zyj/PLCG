/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 8640;
    var_20 = (max(((~((min(8639, var_2))))), ((max((!var_0), (!1492169766959457385))))));
    var_21 |= (((56903 ^ 2301315518193818312) ? (((((((max(1, 1)))) == (~var_17))))) : 8640));
    var_22 += var_15;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (max((max((max(16145428555515733327, 8504091175680788955)), (arr_1 [i_0 + 1] [i_0 + 1]))), var_17));
        var_23 = (((arr_0 [i_0 - 1] [i_0]) ? (max(var_1, (arr_1 [i_0] [i_0 + 1]))) : (max(var_9, (arr_1 [i_0] [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max((var_8 < 17022316188598321701), (arr_0 [i_1] [i_1])));
        var_24 = (((max(var_11, var_6))));
    }
    #pragma endscop
}
