/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233777
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
    var_20 = ((/* implicit */int) (~(-5271527440640085167LL)));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_0 [14ULL]))), (((/* implicit */unsigned long long int) var_15))))))));
        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 - 2] [(unsigned short)14]))) ? (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0] [i_0])))) <= (((/* implicit */int) var_10))))) : (min((((/* implicit */int) (_Bool)1)), (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_23 ^= ((unsigned char) ((unsigned short) arr_1 [i_0] [i_1]));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8487143057865323367LL)) && (((/* implicit */_Bool) ((short) var_17)))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7193853424773522195LL)) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) var_9))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                var_25 -= ((/* implicit */unsigned int) arr_3 [(_Bool)1] [(unsigned char)11] [(_Bool)1]);
                var_26 = ((unsigned long long int) var_15);
            }
            var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) -6381232732630292107LL))))));
        }
    }
}
