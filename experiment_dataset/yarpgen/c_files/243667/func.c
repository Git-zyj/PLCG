/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243667
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
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-33))))))) ? ((+(var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (var_18)));
        var_23 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_24 *= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
        var_25 *= ((/* implicit */unsigned long long int) (-((~(var_7)))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
        arr_4 [(_Bool)1] [i_1 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)33))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_3 [i_2]))));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1] [i_2]) - (((/* implicit */unsigned int) arr_3 [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (short)-7737)))))));
        }
        arr_9 [i_1] = ((/* implicit */signed char) (+(var_0)));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (arr_2 [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1 - 1])));
    }
}
