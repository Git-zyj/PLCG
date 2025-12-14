/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240644
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
    var_10 = ((/* implicit */unsigned short) (+(max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (469209273310743852LL) : (((/* implicit */long long int) var_1)))))))));
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 1]))))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65516))) : (arr_5 [i_0] [i_1])))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_2 [i_0])))));
                var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_3 [14]) > (((/* implicit */long long int) arr_6 [18] [18] [i_1 - 1])))) ? (max((((/* implicit */unsigned long long int) (unsigned short)65516)), (13827718481213003891ULL))) : (((/* implicit */unsigned long long int) (+(var_0))))))) ? (((/* implicit */unsigned long long int) min((max((arr_3 [(unsigned char)14]), (((/* implicit */long long int) arr_2 [10U])))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [12U]))) - (arr_5 [3] [i_1])))))) : (max((arr_4 [(_Bool)1]), (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [(unsigned short)6])))))));
                var_13 &= ((unsigned short) ((((/* implicit */_Bool) arr_0 [10LL])) ? (min((var_0), (((/* implicit */unsigned int) arr_2 [14LL])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(unsigned short)6])))))));
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20))) - (1152921504606846975LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) (unsigned short)65516))))))))));
    var_15 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)26566)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) 865246513)))))))));
}
