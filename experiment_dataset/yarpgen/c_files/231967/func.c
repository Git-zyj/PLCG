/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231967
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) 1928499076U);
            var_21 |= min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned char)36))))), (var_6));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)-112)))))) <= (arr_4 [i_1 - 3] [i_1]))))) ^ (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (3638968405478157072LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        }
        arr_6 [(unsigned short)5] = ((/* implicit */unsigned short) min((((max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)82)))) ^ (((/* implicit */long long int) -71171161)))), (arr_4 [i_0] [i_0])));
    }
    var_23 = var_18;
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (var_10))))));
}
