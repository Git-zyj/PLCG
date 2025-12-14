/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249631
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
    var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2296853770U) : (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 9U)) : (var_2)))) : (var_0)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))) : (arr_6 [i_0 + 1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_6 [3LL] [i_0] [i_0]) : (4294967287U)))) : (-4885528450250862091LL)));
                    var_15 = ((/* implicit */short) arr_9 [i_0] [i_1 + 1] [i_1] [i_2]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0] [8])) ? (((/* implicit */long long int) 4294967287U)) : (var_7)));
        arr_12 [i_0] = ((/* implicit */unsigned char) 4294967295U);
        arr_13 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967287U))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((arr_17 [i_3]) - (arr_17 [i_3])));
        var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)135))))) ? (var_12) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) 4294967290U)) : ((+(var_3)))))));
}
