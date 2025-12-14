/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230172
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
    var_20 += ((/* implicit */signed char) (-((-((-(33554431)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [i_0] [i_0 + 1])))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0] [i_0 - 2]))))));
        arr_5 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
        arr_6 [i_0 - 2] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (((((/* implicit */_Bool) arr_2 [(short)2] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) var_19)))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_16))))))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (((~(arr_8 [i_1 - 1]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_3 [(signed char)5]))))) - (((arr_8 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))))));
        var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) -33554431)) ? (min((min((((/* implicit */unsigned long long int) (_Bool)0)), (11832637151006266510ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [(signed char)7])) || (((/* implicit */_Bool) -766473102))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        var_23 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 33554437)) ? (((/* implicit */unsigned long long int) arr_7 [i_1])) : (var_14))), (((/* implicit */unsigned long long int) -7027037596618726990LL)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_1] [i_1])), (arr_2 [i_1 + 1] [i_1])))))))));
        arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554414)) ? (arr_8 [i_1 + 1]) : (((arr_8 [i_1]) + (((/* implicit */unsigned long long int) var_18))))))) ? (min((((/* implicit */unsigned long long int) -1LL)), (arr_8 [i_1 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))));
    }
}
