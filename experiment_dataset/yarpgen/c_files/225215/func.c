/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225215
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
    var_15 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) (signed char)-2)), (-1084380713)))), (var_3)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((long long int) max((var_3), (((/* implicit */long long int) var_10)))));
        var_17 = max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (-361861113265793355LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) 1084380712)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)23099))))), (((((/* implicit */_Bool) 1010367708580639527ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13929))) : (3064886501U)))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_0 [i_0])))))))) ? ((~(var_10))) : (((/* implicit */unsigned int) (((((-(var_13))) + (2147483647))) << (((max((-361861113265793356LL), (((/* implicit */long long int) (signed char)127)))) - (127LL)))))))))));
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) (~(((1084380725) ^ (((/* implicit */int) (short)0)))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_19 = max((min((((/* implicit */unsigned long long int) (unsigned short)23082)), (13252034560228546426ULL))), (((/* implicit */unsigned long long int) max((arr_3 [i_1 + 1] [i_1 + 3]), (arr_3 [i_1 + 4] [i_1 + 4])))));
        var_20 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)13] [i_1 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) ((int) -1258645783))) : ((-(var_3))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1])) >= (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 4]))))))));
        var_21 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) (short)-4020)))) <= (((((/* implicit */_Bool) 3221225472U)) ? (min((((/* implicit */int) (unsigned char)203)), (var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
        arr_5 [6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1 + 1] [i_1 + 3]), (arr_3 [i_1 - 1] [i_1 + 4]))))) * (var_9)));
    }
}
