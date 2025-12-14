/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26000
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) | (7511833042553338475LL)))) ? (((/* implicit */long long int) min((-2085855969), (-1)))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))), (((/* implicit */unsigned int) min(((signed char)7), ((signed char)127))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((int) max((((arr_2 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((var_7) || (((/* implicit */_Bool) var_6)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) -228590047)), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))))) / (var_6)));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2085855979)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) arr_0 [i_0]))))) ? (19LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned char)85)))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))))));
            var_15 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) (signed char)-43)) + (87))))))))), (((((/* implicit */int) ((((/* implicit */int) (signed char)-123)) >= (-1420135931)))) - (((/* implicit */int) var_3))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) min(((+(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) arr_8 [i_2])) ^ (-1420135936)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_6);
        arr_12 [i_2] = ((/* implicit */unsigned char) arr_9 [i_2]);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_9 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) * (var_2)))))) ? (((/* implicit */int) arr_9 [i_2])) : (((((/* implicit */int) min((var_8), (((/* implicit */short) var_5))))) << (((/* implicit */int) max((arr_8 [i_2]), (((/* implicit */signed char) arr_9 [i_2])))))))));
        var_17 = ((/* implicit */unsigned int) ((((arr_9 [i_2]) && (arr_9 [i_2]))) && (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) (_Bool)1)))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_7) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-40)), (var_8)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) ^ (((max((((/* implicit */long long int) var_1)), (var_6))) & (((/* implicit */long long int) max((2586446358U), (((/* implicit */unsigned int) (signed char)-21)))))))));
}
