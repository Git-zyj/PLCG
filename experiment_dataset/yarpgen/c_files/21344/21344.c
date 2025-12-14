/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_5 >= 2414631182681436935) >= (-6776421714597110318 >= 16095152539767102557))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((+((((max((arr_2 [i_0] [i_1]), (arr_5 [i_1] [i_1 - 1] [i_1 - 1] [i_2])))) ? var_1 : ((var_8 / (arr_3 [17] [i_1 - 1] [i_1])))))));
                    var_20 ^= (max((max((max(16873687508583094022, 16095152539767102545)), (((18446744073709551615 && (arr_0 [i_2])))))), (((((min(var_11, 16095152539767102522))) ? var_17 : (arr_1 [i_0 + 3]))))));
                    var_21 = (((max((16873687508583094012 / 17503049595979513579), ((min(108, (arr_3 [13] [8] [i_1])))))) / (((((min((arr_1 [i_1]), var_15))) ? (arr_0 [i_1 - 1]) : (((arr_2 [i_2] [i_1]) / var_6)))))));
                }
            }
        }
    }
    #pragma endscop
}
