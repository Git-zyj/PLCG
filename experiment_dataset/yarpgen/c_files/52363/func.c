/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52363
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
    var_10 |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) < (((/* implicit */int) ((signed char) var_0))))) ? (((((((int) 9223372036854775807LL)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-25))))))) : (((((/* implicit */int) ((unsigned short) var_8))) * (((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)22854))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))))))));
        arr_4 [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (signed char)-45))))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (signed char)-33))))) : (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2]))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), ((unsigned char)28))))) + (((((/* implicit */_Bool) (signed char)-32)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    }
}
