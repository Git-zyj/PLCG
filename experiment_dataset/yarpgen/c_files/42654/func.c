/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42654
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
    var_16 = var_10;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            arr_6 [i_1] [i_1] = ((int) arr_1 [i_0 + 1]);
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (arr_5 [i_1])))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)77)))) : (((/* implicit */int) (_Bool)0))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_9 [7ULL] [i_0] = ((/* implicit */short) var_0);
            arr_10 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_3)))) - (((/* implicit */int) arr_2 [i_0] [i_2] [i_2]))));
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((int) var_2)) == (((((/* implicit */int) arr_7 [(short)17] [(short)17])) - (((/* implicit */int) (short)-31281))))));
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) - (((/* implicit */int) var_15)))) + ((+(arr_3 [i_0] [14ULL])))));
            var_18 = ((/* implicit */unsigned short) ((var_10) ? ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_2]))));
        }
        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)-1)) % (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) min((arr_14 [i_3 + 4] [i_3]), (max((arr_14 [i_3 + 4] [i_3]), (((/* implicit */short) var_2))))));
        arr_16 [i_3] = ((/* implicit */_Bool) min(((-((-(var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) arr_13 [i_3] [(short)20]))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_5)))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_13 [i_3] [i_3 + 1]))))) ? ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_3] [i_3])))))) : (((/* implicit */int) ((short) arr_13 [i_3 + 4] [i_3 + 2])))));
    }
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) ((min((((/* implicit */int) var_0)), (var_8))) <= (((/* implicit */int) (unsigned short)11435))))) != ((~(((/* implicit */int) var_12)))))))));
}
