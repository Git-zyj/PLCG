/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43914
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
    var_18 ^= ((/* implicit */short) ((((/* implicit */int) var_17)) % ((+(((/* implicit */int) (signed char)-112))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 *= (((((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) + (2147483647))) >> (((arr_0 [i_0]) - (1860462883U))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_1]))));
            var_21 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_1]));
            var_22 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
            var_23 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_1 [i_1])) + (arr_3 [i_0] [22ULL] [i_1]))) - (((((/* implicit */_Bool) -1)) ? (2972763968755159276ULL) : (((/* implicit */unsigned long long int) 49572671))))));
        }
        var_24 = arr_1 [i_0];
        var_25 = ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_1 [i_0])), (((unsigned int) arr_0 [i_0])))), (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : ((~(arr_0 [i_0])))))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_6 [(unsigned char)18] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) max((arr_5 [i_2]), (arr_5 [i_2]))))), (min((((/* implicit */unsigned int) arr_2 [i_2])), ((-(arr_0 [i_2])))))));
        var_26 = ((/* implicit */short) arr_1 [i_2]);
        var_27 = ((/* implicit */short) min((var_27), (arr_2 [i_2])));
    }
}
