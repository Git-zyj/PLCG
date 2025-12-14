/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31010
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) * (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))));
        var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */unsigned int) var_6)))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))))) ? ((-(134217727))) : (((((/* implicit */int) arr_3 [i_1 + 1])) * (((/* implicit */int) arr_3 [i_1 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_14 [i_1 + 1] [i_2 - 2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27664)) ? (1948664252) : (((/* implicit */int) (signed char)104))));
                    var_17 = ((/* implicit */short) min((var_17), (min(((short)-9264), (((/* implicit */short) (_Bool)1))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_11 [1] [i_2 - 1]), (((/* implicit */unsigned int) arr_8 [(unsigned char)7] [i_2]))))))) && (((/* implicit */_Bool) (-(9223372036854775807LL))))));
                }
            } 
        } 
    }
}
