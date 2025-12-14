/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32617
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_17)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (arr_2 [i_0 - 1])));
        arr_4 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0 + 3] [0]) | (arr_2 [3LL])));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_7 [0LL] [17] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_16) % (arr_1 [11ULL]))))));
            var_21 *= ((/* implicit */unsigned int) (-(arr_5 [i_0 - 1] [i_0 - 2] [i_0 + 3])));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
            var_22 += ((arr_0 [i_0 + 1] [i_0]) >> (((arr_0 [i_0 - 2] [i_0]) - (16593140035732776417ULL))));
        }
    }
    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max(((~(max((((/* implicit */int) arr_15 [i_3])), (var_9))))), (((/* implicit */int) arr_14 [18LL])))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) max(((~(var_15))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)19218)))))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) min((((unsigned long long int) (-(((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) arr_14 [(signed char)20]))));
        var_25 = ((/* implicit */unsigned long long int) (~(((long long int) (~(arr_6 [i_4 + 2]))))));
        var_26 = ((/* implicit */unsigned char) (~(((long long int) var_13))));
        arr_20 [i_4] = ((/* implicit */unsigned long long int) ((short) max((arr_9 [i_4] [i_4 + 1]), (arr_9 [i_4] [i_4 - 1]))));
    }
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16))))))));
}
