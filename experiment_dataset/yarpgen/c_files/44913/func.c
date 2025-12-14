/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44913
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)146)) << (((arr_0 [i_0]) - (17571862098252162909ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_11 = ((/* implicit */int) arr_0 [6LL]);
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                arr_10 [i_1] [i_2] [i_3] = max((((/* implicit */int) ((arr_5 [i_2]) < (((/* implicit */long long int) ((((/* implicit */_Bool) 8890132881459781411LL)) ? (((/* implicit */int) (short)25579)) : (((/* implicit */int) (unsigned char)11)))))))), (((((/* implicit */_Bool) arr_5 [i_3 - 1])) ? (((/* implicit */int) arr_4 [i_2 + 2] [i_1])) : (((/* implicit */int) arr_4 [i_2 + 1] [11LL])))));
                arr_11 [(unsigned short)3] [i_2] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_3 [i_2])) / (arr_5 [i_2])));
                arr_12 [i_3] [i_2] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_4 [i_1] [i_2 - 1])))));
            }
            arr_13 [16LL] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (arr_5 [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2] [i_2] [0U])) ? (((((/* implicit */_Bool) arr_7 [i_1] [(short)1] [i_2] [i_1])) ? (arr_5 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : ((+(var_2))))) : (((/* implicit */long long int) ((int) arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2]))));
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_2 + 2])) ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 1]))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 - 1]))))))))));
            arr_14 [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) (short)-13043);
        }
        arr_15 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((3584) / (arr_3 [i_1])))) * (arr_6 [i_1])))));
    }
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) 3584))));
}
