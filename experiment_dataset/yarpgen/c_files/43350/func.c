/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43350
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)32767))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-21604)))))))))));
    var_12 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (short)4918))))), (max((var_1), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) (short)0);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [(_Bool)1] [i_2 - 1] [i_2 + 4])) ? (arr_3 [i_1 - 1] [i_2 + 4]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_1))))))));
                    var_15 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-21604))));
                    var_16 += ((/* implicit */unsigned int) (~(-1)));
                    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2 + 4])) ? (((/* implicit */int) (unsigned short)11820)) : (2131511919)));
                }
            } 
        } 
        arr_9 [(unsigned char)10] = ((/* implicit */signed char) ((short) (unsigned char)16));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(short)13] [(unsigned short)13])) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned short)33285))))));
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_12 [(short)12] [i_3] = max((((/* implicit */long long int) (short)17562)), (-6670553293167639028LL));
        arr_13 [i_3] = ((/* implicit */short) min(((~(((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53697))) : (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5749)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned char) arr_6 [(short)6] [i_3] [7ULL]))) : (((/* implicit */int) max(((short)7), (((/* implicit */short) (unsigned char)119))))))))));
    }
}
