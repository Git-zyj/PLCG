/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213067
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
    var_15 *= ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 2] [i_1 - 1])) > (((/* implicit */int) arr_0 [i_2])))))) >= (min((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_14))), (((/* implicit */unsigned long long int) max(((signed char)-42), ((signed char)-1)))))))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-43)) - (((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((-706046539) / (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 + 1])) ? (arr_1 [i_0] [i_1 + 1]) : (arr_1 [i_1 + 1] [i_1 + 2])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [24U] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)148))))) ? (((/* implicit */int) arr_3 [i_2] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_6 [i_1 + 2])))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)124)) < (((/* implicit */int) (unsigned char)142)))))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)30)))))));
                        var_19 = ((/* implicit */short) ((var_12) ? (((/* implicit */unsigned long long int) (~(var_11)))) : ((~((~(arr_1 [i_1] [(unsigned char)20])))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)209)))) : (((/* implicit */int) (unsigned char)150)))), (((/* implicit */int) max(((unsigned char)139), (((/* implicit */unsigned char) (_Bool)1)))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 909865916)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)197)) : (var_11)))) : (((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) (_Bool)1)))))));
    var_22 = ((/* implicit */unsigned int) max((var_2), (var_2)));
}
