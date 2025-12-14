/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249264
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [13U])), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        var_15 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (arr_2 [(short)5] [17])))), (arr_0 [12] [12]))), (min((min((144112989052600320ULL), (((/* implicit */unsigned long long int) -882623331)))), (((/* implicit */unsigned long long int) arr_1 [11]))))));
        var_16 = ((/* implicit */unsigned char) arr_1 [16LL]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_17 *= ((/* implicit */_Bool) min((max((arr_3 [i_1] [(unsigned char)12] [i_1]), (arr_5 [i_0]))), (arr_5 [i_0])));
            var_18 ^= ((/* implicit */int) arr_4 [i_0]);
            var_19 = ((/* implicit */long long int) arr_5 [i_1]);
        }
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_1 [i_2]))));
        var_21 = ((/* implicit */int) arr_7 [i_2]);
        var_22 -= ((/* implicit */unsigned int) arr_4 [i_2]);
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_1 [i_3])), (max((min((arr_0 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_10 [i_3] [11U])))), (((/* implicit */unsigned long long int) max((-882623331), (2130631745))))))));
        arr_13 [10] &= ((/* implicit */unsigned short) arr_10 [i_3] [i_3]);
    }
    var_23 *= ((/* implicit */signed char) var_0);
}
