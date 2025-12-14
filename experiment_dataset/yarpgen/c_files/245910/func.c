/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245910
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
    var_10 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_7))) && (((/* implicit */_Bool) ((unsigned long long int) var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_11 |= ((/* implicit */long long int) ((_Bool) arr_3 [i_1 + 1] [i_0 + 1] [i_0 - 1]));
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned char) var_1)))));
            arr_7 [i_1] [i_1 + 2] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
            var_13 = ((/* implicit */short) var_8);
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) var_3);
        }
        arr_9 [i_0 - 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((arr_1 [i_0]) | (((/* implicit */unsigned long long int) var_8)))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) arr_5 [i_2])) : (((int) (_Bool)1))))) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_6 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (arr_12 [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (short)32766))) / (arr_12 [i_2] [(_Bool)1]))))))));
        arr_15 [i_2] |= ((short) ((var_7) << (((arr_6 [i_2] [i_2]) - (5313469117369445001ULL)))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((arr_6 [i_2] [i_2]) >> (((var_8) - (3321143750U)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_9) < (var_8)))), (((unsigned int) var_5))))) : (((unsigned long long int) arr_5 [i_2]))));
        arr_16 [i_2] = min((((/* implicit */short) var_0)), (arr_5 [i_2]));
    }
}
