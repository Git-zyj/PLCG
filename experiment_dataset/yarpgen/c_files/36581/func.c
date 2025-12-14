/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36581
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [0U]))))) : (((/* implicit */unsigned long long int) ((((long long int) var_8)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1] [(signed char)8] [6U] = ((/* implicit */int) 8132285544777942193ULL);
            var_13 *= ((((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */short) var_5)))))) : (min((((/* implicit */unsigned int) arr_1 [i_1] [i_1])), (502535377U))))) - (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) arr_0 [i_0])))), ((-(var_10)))))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) min(((!(((/* implicit */_Bool) var_11)))), (((_Bool) var_5))))), ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1])))))))));
            arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_1])))), ((~(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) var_12)) : (8132285544777942175ULL)));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_15 *= ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_2]))))));
        arr_10 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_4 [i_3] [(_Bool)0] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))) ? (((arr_4 [i_3] [i_3] [i_3]) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) arr_1 [(signed char)10] [i_3])))) : (((arr_4 [(signed char)0] [i_3] [i_3]) ? (((/* implicit */int) arr_4 [i_3] [i_3] [0U])) : (((/* implicit */int) arr_0 [i_3]))))));
        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned short)1796))) ? (((/* implicit */int) (signed char)-50)) : (((int) arr_8 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))))))) : (min((((/* implicit */unsigned long long int) (unsigned char)255)), (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 9; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4 + 4])) ? (((/* implicit */int) arr_0 [i_4 + 3])) : ((-(((/* implicit */int) var_4))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) 1490233579U))));
    }
    var_19 = ((/* implicit */short) var_0);
}
