/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52467
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
    var_11 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 *= ((/* implicit */unsigned char) ((long long int) arr_2 [i_0]));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)148)))))));
            arr_9 [i_0] = ((/* implicit */unsigned char) (~(arr_6 [i_1] [i_0] [i_0])));
            var_13 = ((/* implicit */signed char) var_4);
        }
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_14 = ((/* implicit */signed char) (~(((unsigned long long int) arr_13 [i_0] [i_2 - 1] [i_2]))));
            arr_14 [i_0] [i_0] = ((/* implicit */short) (unsigned char)16);
            arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) var_3);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            arr_20 [i_0] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_3]);
            var_15 = ((/* implicit */signed char) ((((long long int) var_6)) * (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_0] [i_3]))) ? (var_4) : (((/* implicit */int) ((arr_11 [i_3 - 1] [i_0]) == (((/* implicit */int) var_5)))))));
            arr_21 [i_0] = ((/* implicit */unsigned int) var_9);
            var_17 -= ((/* implicit */_Bool) ((unsigned char) arr_11 [i_3] [i_3 + 3]));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_24 [i_4] = ((/* implicit */signed char) max((((((unsigned long long int) arr_23 [i_4])) << (((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) -2441797491452623655LL)))) - (2441797491452623612ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)181))))) && (((/* implicit */_Bool) arr_23 [i_4])))))));
        arr_25 [i_4] = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)112)), (var_10)))), (((arr_23 [i_4]) & (arr_23 [i_4])))));
        arr_26 [i_4] = ((/* implicit */long long int) ((_Bool) ((arr_23 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))))));
    }
    var_18 = ((/* implicit */signed char) var_8);
    var_19 = ((/* implicit */unsigned short) (-(var_9)));
    var_20 |= ((/* implicit */long long int) var_4);
}
