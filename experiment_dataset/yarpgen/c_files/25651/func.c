/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25651
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
    var_19 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) max((((unsigned long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)156))))), (((/* implicit */unsigned long long int) (~(arr_0 [i_0] [(signed char)1]))))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1]))) ? ((-(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((unsigned short) (signed char)31)))));
        arr_7 [(signed char)8] &= ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */unsigned long long int) arr_4 [6LL] [6LL])) : (min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1])))))) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_5 [i_1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_3 [i_1])))))))));
    }
}
