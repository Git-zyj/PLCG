/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21967
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)52045), ((unsigned short)52031))))) > (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)12])) ? (6853141834941770804LL) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))) - (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) arr_2 [(unsigned short)5] [i_0])), ((unsigned short)13490)))))));
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 3; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -9223372036854775801LL)), (arr_3 [i_1 - 2])))) ? ((~(arr_3 [(unsigned short)8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [13])))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)8192)), (arr_4 [(unsigned short)10]))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
        arr_6 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (min((arr_3 [i_1 - 1]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) (((+(arr_4 [i_1]))) >= (((/* implicit */long long int) ((int) (unsigned char)161))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 24; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) var_2);
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 1723466977U))));
    }
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
    var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (var_14)))))) : (max((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (unsigned short)37326))))));
}
