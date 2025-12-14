/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39280
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) -1283613632)) || (((/* implicit */_Bool) (short)31)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((13852768495946098098ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0]))))));
        arr_5 [i_0] [(signed char)10] = ((/* implicit */short) arr_1 [i_0]);
    }
    var_14 = ((/* implicit */signed char) ((1266044305656925617LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63563)))));
    var_15 -= ((/* implicit */unsigned short) ((short) var_6));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) - (8487091304796667486LL))))));
        var_17 ^= ((/* implicit */signed char) ((655445495U) + (((/* implicit */unsigned int) arr_1 [i_1]))));
        var_18 = ((/* implicit */short) ((long long int) (short)(-32767 - 1)));
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_19 = ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_9 [i_2]))))) ^ (arr_8 [i_2]));
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            var_20 += ((/* implicit */unsigned long long int) arr_2 [i_3]);
            var_21 |= ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_3])) + (((/* implicit */int) max(((unsigned short)35613), (((/* implicit */unsigned short) (signed char)0))))))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)63563)) < (((/* implicit */int) (short)20568)))))));
            var_22 *= ((/* implicit */signed char) ((arr_8 [i_3]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)2] [i_3 - 1])))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) (short)20568);
            arr_16 [i_2] [(short)15] [i_4] = ((/* implicit */short) var_4);
        }
    }
}
