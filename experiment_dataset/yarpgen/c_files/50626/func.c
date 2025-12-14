/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50626
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [(short)7] [5]);
        var_13 = ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 259319861)) <= (4486721509793341905ULL))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
    }
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (13960022563916209703ULL))), (((((/* implicit */unsigned long long int) var_3)) ^ (13960022563916209703ULL)))))) ? (var_3) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            {
                arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((var_5) / (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64512)) >= (((/* implicit */int) arr_5 [i_1] [i_1]))))), (max((13960022563916209726ULL), (13960022563916209703ULL)))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((4486721509793341905ULL) ^ (((/* implicit */unsigned long long int) 1039807478U))))) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_5 [i_2] [i_1])) + (33))))) : (max((arr_9 [i_1] [i_1] [i_2]), (((/* implicit */int) var_1))))));
            }
        } 
    } 
}
