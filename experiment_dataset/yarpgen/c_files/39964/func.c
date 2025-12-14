/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39964
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) (signed char)114)))), (((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) ((long long int) var_11))) ? (max((((/* implicit */unsigned int) var_10)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */short) var_11)))))))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (var_11))))))) && (((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_3))))), (max((((/* implicit */short) var_10)), ((short)29337))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (((long long int) arr_6 [(signed char)8]))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (max((((/* implicit */long long int) (signed char)-89)), (arr_7 [i_0] [i_1] [i_2])))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_11)))))), (((((/* implicit */_Bool) ((-789976649) - (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))))))))));
                    arr_9 [i_2] [i_0] [(short)7] = ((/* implicit */signed char) ((short) (signed char)-126));
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) && (((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_12)))))))), (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0 + 1] [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0 + 2])))))));
                }
            } 
        } 
    } 
}
