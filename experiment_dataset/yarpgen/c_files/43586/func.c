/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43586
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
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)103)) > (((/* implicit */int) (short)4471)))))) : (((((/* implicit */int) (short)14336)) - (((/* implicit */int) (signed char)1)))));
        var_13 &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (((+(((/* implicit */int) ((unsigned char) var_2))))) & ((-((~(((/* implicit */int) var_6))))))));
                    var_15 = ((/* implicit */unsigned int) (((+(((unsigned long long int) arr_4 [i_0] [i_0] [i_1])))) >= (((unsigned long long int) arr_0 [i_2 - 3]))));
                    var_16 &= ((/* implicit */long long int) var_11);
                    var_17 += ((/* implicit */signed char) var_11);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */signed char) ((int) var_9));
        arr_11 [i_3 - 3] = ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) arr_8 [i_3 - 3])));
    }
}
