/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233413
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 3; i_1 < 7; i_1 += 1) /* same iter space */
    {
        var_10 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_2)) >= (arr_4 [0LL]))) ? (arr_4 [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_1])) - (((((/* implicit */int) (signed char)-83)) / (438230832))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_1 - 3] [18LL]))))) == ((+(arr_4 [i_1]))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 7; i_2 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) ((signed char) var_2));
        arr_10 [i_2] = ((/* implicit */signed char) arr_7 [i_2 + 1]);
    }
    var_12 = ((/* implicit */unsigned char) ((max((var_1), (((/* implicit */unsigned long long int) ((_Bool) -3167030922137746756LL))))) > (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) + (((((/* implicit */unsigned long long int) var_4)) / (var_6)))))));
    var_13 = 8070450532247928832ULL;
}
