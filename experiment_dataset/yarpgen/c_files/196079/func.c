/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196079
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_13 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [(signed char)9] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        var_14 ^= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 ^= ((/* implicit */signed char) (((((~(((/* implicit */int) arr_4 [0LL])))) + (2147483647))) << (((((425133568574868124LL) << (((((/* implicit */int) arr_4 [(signed char)8])) - (34))))) - (850267137149736248LL)))));
            var_16 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_0] [10LL] [i_0]));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_16 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2])))) ? ((-(((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)3] [i_0])))) : ((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0]))))));
                        var_17 = ((/* implicit */signed char) ((((_Bool) 15876409063769575518ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (3458385962U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [(short)10] [i_1] [i_1])))));
                        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) (unsigned char)177)) >> (((/* implicit */int) arr_14 [i_0] [i_1] [0ULL] [0ULL]))))));
                    }
                } 
            } 
        }
    }
    var_19 = ((/* implicit */int) ((signed char) (unsigned char)78));
}
