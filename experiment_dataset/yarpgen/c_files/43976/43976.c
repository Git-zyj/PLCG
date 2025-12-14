/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((~(max(((var_1 ? 1 : 114)), -var_4))));
    var_17 = (max((min(0, (~var_7))), ((0 ? 281373417 : 1))));
    var_18 = ((var_0 ? (!var_5) : var_15));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 += ((~(((arr_4 [i_0] [i_0]) ? ((((arr_5 [17] [17] [0]) % (arr_0 [8])))) : (((arr_4 [i_1] [i_0]) / (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] = (arr_4 [i_0] [19]);
                var_20 = (((((((max((arr_4 [i_1] [13]), (arr_5 [i_0] [i_1] [i_0])))) * ((min(0, 37173)))))) ? (arr_0 [i_1]) : ((((arr_3 [i_0] [i_0 + 2]) ? (242 % 37175) : (arr_1 [i_0] [i_0]))))));
                arr_7 [i_0] = ((~((((arr_1 [i_0 - 1] [i_0 - 1]) || ((((arr_0 [i_1]) ? (arr_5 [i_1] [i_0] [i_0]) : var_9))))))));
            }
        }
    }
    #pragma endscop
}
