/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33408
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_1 + 3])))));
            arr_6 [i_1] = ((/* implicit */unsigned char) var_14);
        }
        for (long long int i_2 = 3; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned int) var_5)), (((/* implicit */unsigned int) max(((signed char)35), (var_8))))))) ? (((((/* implicit */_Bool) max((arr_4 [i_2] [i_2 - 1]), (((/* implicit */int) (unsigned char)127))))) ? (max((var_0), (arr_8 [i_2] [i_2] [i_2 - 3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2130415020)) ? (3970437578U) : (((/* implicit */unsigned int) arr_7 [i_2 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-36)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))))));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_2]))) ? (((((/* implicit */_Bool) 2130415049)) ? (arr_8 [i_0] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_8))))))))))));
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5751311477096299431LL)) ? (((int) max((31U), (1188411441U)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) ((((/* implicit */int) (signed char)-13)) != (2147483647)))))))));
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (max((arr_4 [i_0] [i_0]), (arr_2 [i_3]))) : (((/* implicit */int) arr_0 [i_0])))))));
        }
        var_22 = ((/* implicit */unsigned char) ((((arr_8 [i_0] [i_0] [20U]) ^ (((/* implicit */long long int) arr_2 [i_0])))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_2 [i_0]))))))));
        var_23 = max(((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) var_18)))))), (max((((1958381142) & (2147483647))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0])), (arr_11 [i_0])))))));
    }
    var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1958381142)) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((var_7) | (var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))));
}
