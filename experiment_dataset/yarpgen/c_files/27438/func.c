/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27438
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_0 + 1]);
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((max((((unsigned int) var_13)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3096)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_8 [i_2] &= ((/* implicit */short) (!((_Bool)0)));
        var_17 = ((/* implicit */_Bool) min((max((14970030014509851652ULL), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])))), (max((((/* implicit */unsigned long long int) arr_7 [i_2])), ((~(14991790096700737480ULL)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) max((arr_6 [i_2] [i_2]), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_13)))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) >> (((arr_6 [i_2] [i_2]) - (1400774321U)))))) < (arr_6 [i_2] [i_2])))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) | (arr_6 [i_2] [i_2])))) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (short)0))))));
        arr_10 [i_2] = ((/* implicit */short) ((6726868336223380390ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3]);
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (~(12313760515802882912ULL)));
        var_19 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (_Bool)0)))));
    }
}
