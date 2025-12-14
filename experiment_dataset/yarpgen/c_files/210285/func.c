/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210285
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (((~(((/* implicit */int) var_2)))) + (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_15 *= ((/* implicit */_Bool) ((((int) ((-1LL) >= (var_12)))) << (((((/* implicit */int) max(((unsigned short)65533), (((/* implicit */unsigned short) var_2))))) - (65509)))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (0LL))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2)) || (((/* implicit */_Bool) var_8)))))))), ((unsigned short)61069)));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned short)6016))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_0] [i_2] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)26546))) / (12LL)));
            var_19 |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (signed char)-90))));
            var_21 *= ((/* implicit */short) arr_4 [i_0]);
        }
    }
    var_22 = ((/* implicit */short) var_11);
}
