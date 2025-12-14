/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193281
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
    var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31559)) ? (((/* implicit */int) (short)-18041)) : (((/* implicit */int) (unsigned short)31559))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (signed char)95)) ? ((~(7595626555735995812LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) ((int) arr_0 [i_0]));
            arr_5 [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-69)), (615673239)))) != (arr_1 [i_1]))), (arr_2 [i_0] [i_1])));
        }
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))), (((((((/* implicit */_Bool) (short)0)) ? (-5130831684124700095LL) : (((/* implicit */long long int) 2097150U)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-116)) || (((/* implicit */_Bool) (signed char)-25))))))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0]))))))) == ((((_Bool)1) ? (-7329929817270227865LL) : (7595626555735995823LL)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) <= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) <= (2872912792U)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))) / (arr_7 [i_2] [i_2])))));
        var_20 = ((int) (-((+(((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))));
        var_21 += ((/* implicit */signed char) arr_6 [i_2]);
    }
}
