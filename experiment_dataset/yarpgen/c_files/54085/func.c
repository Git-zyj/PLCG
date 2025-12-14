/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54085
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (arr_0 [i_0]));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [(signed char)11] [(signed char)18] = ((/* implicit */signed char) ((((var_2) << (((12733189700842381289ULL) - (12733189700842381270ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))));
            var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 12733189700842381280ULL)) ? (17232383797859947516ULL) : (14396157508179627862ULL))));
            var_20 = (-(8393215854798263943ULL));
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] = (~(14396157508179627882ULL));
            var_21 = (signed char)71;
            arr_10 [i_0] [i_2] = (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_18) : (var_2))));
            var_22 = ((/* implicit */unsigned long long int) (signed char)40);
        }
        arr_11 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        var_23 ^= ((/* implicit */signed char) arr_2 [i_3]);
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) 5192240362631590558ULL))));
        arr_14 [i_3] [i_3] = var_13;
        var_25 ^= ((/* implicit */signed char) (-((-(var_3)))));
    }
    var_26 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((signed char)80), (((/* implicit */signed char) ((((/* implicit */int) (signed char)67)) >= (((/* implicit */int) (signed char)-62)))))))), (var_8)));
    var_27 += ((/* implicit */signed char) (~(4739593730988685005ULL)));
    var_28 = ((/* implicit */signed char) var_15);
    var_29 = ((/* implicit */unsigned long long int) var_9);
}
