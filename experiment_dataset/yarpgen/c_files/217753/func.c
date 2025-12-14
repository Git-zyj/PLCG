/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217753
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) < (9223372036854775807LL)));
        var_13 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_14 = (unsigned short)60;
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) arr_3 [i_1]);
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1]))));
            var_17 ^= ((/* implicit */int) (unsigned short)60);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_18 = ((((/* implicit */_Bool) ((short) 985071733U))) ? (((((/* implicit */int) var_7)) << (((var_3) - (65318058))))) : (((/* implicit */int) arr_5 [i_1] [i_3] [(unsigned short)4])));
            arr_11 [i_3] [i_1] = ((/* implicit */_Bool) ((arr_8 [i_1] [i_1] [i_1]) % (arr_8 [i_1] [i_3] [i_3])));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_1])))));
        }
        arr_12 [i_1] = ((((/* implicit */_Bool) max((16538505124504752672ULL), (((/* implicit */unsigned long long int) (signed char)37))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_1])), (1152921504606846976LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (1908238949204798944ULL))));
    }
    var_20 -= ((/* implicit */short) min((2931504389U), (((/* implicit */unsigned int) (+(-1659041772))))));
    var_21 = max((((/* implicit */int) var_7)), (min(((~(((/* implicit */int) var_2)))), ((~(((/* implicit */int) (short)8426)))))));
}
