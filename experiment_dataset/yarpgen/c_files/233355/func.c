/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233355
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((2751127461665908110LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_9) < (((/* implicit */int) var_13))))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4516))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_1 [i_0]))))) : (((161877316U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)63)))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) -164605558)))))))) : (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-5173)), (((long long int) var_9))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) var_7);
        var_20 = ((/* implicit */unsigned int) min((arr_0 [i_1] [i_1]), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)1)))))))));
        var_21 = ((/* implicit */long long int) var_3);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */long long int) var_17))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_7 [(unsigned short)1] [i_2 + 1]) : (arr_7 [i_2] [i_2 - 1]))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
    {
        arr_11 [14U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
        var_24 = ((/* implicit */int) arr_0 [i_3] [i_3]);
        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 4294967283U)))));
        arr_12 [i_3] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_17))));
    var_27 = ((/* implicit */unsigned int) var_12);
    var_28 = ((/* implicit */long long int) max((max((-1430819290), (((/* implicit */int) var_16)))), (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5)))) / ((+(((/* implicit */int) var_10))))))));
}
