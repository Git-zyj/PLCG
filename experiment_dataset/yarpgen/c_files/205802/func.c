/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205802
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_0 [i_0 + 1])));
        var_11 ^= ((/* implicit */unsigned long long int) arr_0 [i_0 + 2]);
        var_12 = ((/* implicit */signed char) ((unsigned long long int) (-(var_10))));
        var_13 = ((/* implicit */signed char) ((arr_3 [i_0 - 1]) << (((arr_3 [i_0 + 2]) - (5563093022318456049LL)))));
    }
    var_14 = ((/* implicit */int) (((~(((/* implicit */int) ((_Bool) var_8))))) >= ((((+(var_0))) + (var_6)))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~((~(var_2)))))) | (var_7)));
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_15 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_14 [i_1]);
                    var_16 = ((/* implicit */unsigned long long int) (-(max((arr_13 [i_1] [i_1] [i_2 - 2]), (arr_13 [i_1] [i_1] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
}
