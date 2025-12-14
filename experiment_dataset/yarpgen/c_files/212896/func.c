/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212896
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
        var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)10)) * (((/* implicit */int) (short)-7861)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_0))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-7861)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7861))))) : (18446744073709551615ULL))))));
            var_13 = ((/* implicit */signed char) (short)-1104);
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)32))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-1114)) && (((/* implicit */_Bool) (short)-1099)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551594ULL)))))))))))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_2))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13657)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : ((-(arr_6 [i_2])))))) && (((/* implicit */_Bool) var_6)))))));
        }
        var_17 = ((/* implicit */short) var_2);
        var_18 = var_6;
    }
    var_19 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967287U))))) << (((var_3) - (1065407909U)))));
}
