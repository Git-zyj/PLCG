/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29717
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    arr_6 [i_0] [(short)6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20605)) ? (((/* implicit */int) (short)-8537)) : (((/* implicit */int) (short)-8537))));
                    var_10 |= ((/* implicit */int) var_2);
                }
                var_11 = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)183)) < (((/* implicit */int) (short)-8537))))) < (((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                arr_7 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_4 [i_1] [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (var_4)))))))) : (((arr_4 [i_0] [i_1] [i_1] [i_1]) >> (((arr_3 [i_1]) - (4215986305333545453ULL)))))));
                var_12 = ((/* implicit */short) (unsigned short)14380);
            }
        } 
    } 
    var_13 = var_4;
    var_14 = ((/* implicit */unsigned short) ((((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)73))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_1))))) : (var_8)));
}
