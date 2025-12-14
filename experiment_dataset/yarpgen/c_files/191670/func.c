/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191670
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) max((var_14), (max((((/* implicit */int) ((signed char) var_7))), (var_10)))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 2] = ((/* implicit */unsigned char) (((-(2785929933U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2785929933U)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (2147483647))))));
                        arr_12 [i_0 - 1] [i_0 - 2] [i_2] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 2] [i_0 + 1]);
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) 2147483647)) : (arr_8 [i_2] [i_2] [i_2]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (4105134946U)))))))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0 - 1] [i_0 - 2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_0 - 2])), (max((((/* implicit */long long int) 2147483647)), (arr_9 [i_0 - 1] [i_0 - 1] [(unsigned char)10] [i_0 + 1])))));
        arr_14 [i_0 - 2] = ((/* implicit */int) (~((~(arr_2 [i_0 - 1] [i_0 + 1])))));
    }
    for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        var_16 = ((/* implicit */_Bool) max((((arr_15 [i_4 + 3]) & (arr_15 [i_4 + 3]))), (arr_15 [i_4 - 1])));
        var_17 = ((/* implicit */int) (~(((min((((/* implicit */unsigned int) (unsigned char)122)), (2519602686U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
}
