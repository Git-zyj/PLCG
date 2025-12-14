/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24908
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) -8134371293681865377LL);
        var_15 |= ((/* implicit */unsigned long long int) 3367375901742210529LL);
    }
    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) 650718715U));
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (-3367375901742210529LL))));
                arr_7 [i_1] [2ULL] [8U] = ((/* implicit */unsigned char) (((+(max((11121297896564022494ULL), (((/* implicit */unsigned long long int) var_3)))))) + (((unsigned long long int) arr_5 [i_1] [i_2]))));
                var_19 -= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]);
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 3367375901742210529LL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_0)));
                    arr_13 [i_1] = ((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_2]);
                }
            }
        } 
    } 
}
