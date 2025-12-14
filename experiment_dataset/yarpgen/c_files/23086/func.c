/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23086
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned int) var_9)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((unsigned char) ((signed char) max((16059293119566589420ULL), (((/* implicit */unsigned long long int) (unsigned char)146))))));
        var_17 = ((/* implicit */unsigned int) max((max((((arr_1 [11]) - (arr_1 [i_0]))), (((/* implicit */long long int) 687182058U)))), (((/* implicit */long long int) max((3607785245U), (3607785249U))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))), (((min((arr_1 [i_0]), (arr_1 [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((16059293119566589451ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4471)) > (((/* implicit */int) arr_0 [4LL])))))) : (687182054U)))) ? (max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (11125043214761859762ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1269565217U)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        arr_5 [i_1] = (+(((/* implicit */int) ((short) (_Bool)0))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_13 [i_3] [i_3] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) arr_10 [i_1 + 1] [i_2 - 1] [(unsigned short)9] [i_3] [i_4] [i_4]);
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -64)) ? (((/* implicit */int) arr_9 [10ULL] [8U] [11U] [i_4])) : (((((-63) + (2147483647))) << (((587350404072336823ULL) - (587350404072336823ULL))))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1 - 4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_4 [3U])))))));
    }
    var_20 |= ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)35)), (var_13))))) : (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
