/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191146
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (var_7)))) ? (min((8388607ULL), (((/* implicit */unsigned long long int) (unsigned char)189)))) : (min((var_0), (((/* implicit */unsigned long long int) var_6)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_12)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)124))))), (var_10))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_12)) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) (-(min((var_1), (((/* implicit */long long int) var_9))))))) : (max((var_4), (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) var_2)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14119217424479270381ULL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)72))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0))))))));
        arr_7 [i_1] [(unsigned short)17] = ((/* implicit */unsigned long long int) var_2);
    }
    var_15 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) var_0))), (var_0)));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
}
