/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50590
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (var_6))) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)8184)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (unsigned short)57351)))));
        var_16 = ((/* implicit */_Bool) max((14765851790559692108ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) var_13)), (-117376000)))) <= (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (2594693777406349033LL))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) (unsigned char)134)), (var_1))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-96)), ((unsigned char)198)))))))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) var_12)) & (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))))))));
}
