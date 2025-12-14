/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233152
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
    var_18 = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))), (((/* implicit */long long int) min((var_8), (((/* implicit */short) var_7))))))) >= (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_13))) ? (min((((/* implicit */long long int) var_6)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_1 [(unsigned short)7]))) + (((/* implicit */unsigned long long int) 4457530110970271149LL))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_2 [i_0]))));
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (max((var_11), (((/* implicit */long long int) (unsigned short)60124)))))) << (((((max((var_1), (((/* implicit */long long int) var_15)))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5412))))))) - (7314092675995246453LL)))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) % (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) (signed char)-75))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_13)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (arr_1 [i_0]) : (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_0])))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((1589388441) >= (((/* implicit */int) var_6)))))));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_7 [i_1] [i_1]))));
        var_22 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_1]))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) ^ (max((((/* implicit */long long int) var_14)), (4457530110970271149LL)))))) * (arr_7 [i_1 + 2] [i_1 - 2])));
    }
    var_24 |= min((((/* implicit */long long int) (unsigned short)5411)), (4457530110970271149LL));
    var_25 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned short)0))));
}
