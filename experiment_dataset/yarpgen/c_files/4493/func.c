/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4493
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_11 = min((arr_1 [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-5307))))));
        var_12 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-1)) ? (2147483647) : (((/* implicit */int) (signed char)0))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_13 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_1 [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)128)), ((unsigned short)65535)))))));
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (arr_0 [(unsigned char)5]))) & (((/* implicit */long long int) max((arr_2 [i_1]), (-2147483630))))))));
    }
    var_14 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)115)))), ((-(0ULL))))), (((/* implicit */unsigned long long int) var_7))));
    var_15 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) : (var_5)))), (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8))))));
}
