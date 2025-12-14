/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26070
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)126))))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_13), (((/* implicit */short) var_7))))), (((unsigned short) (signed char)53)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (1320584398U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 790351866U)) ? ((+(2047))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : ((~(((long long int) 18446744073709551615ULL))))));
            var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)152)) <= (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)2])) ? (2970872670570330367LL) : (((/* implicit */long long int) arr_0 [2U] [14LL]))))));
            var_19 = ((/* implicit */short) min((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)50707)))) & (arr_0 [i_1] [i_0])))), (max((((-2970872670570330367LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14828))))), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))));
        }
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 5737651943864273887LL)) < (arr_6 [i_2] [i_2]))) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) var_8);
    }
}
