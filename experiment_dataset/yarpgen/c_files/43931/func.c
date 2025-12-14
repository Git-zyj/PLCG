/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43931
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (max((((/* implicit */int) var_7)), (((((((/* implicit */int) var_5)) + (2147483647))) >> (((2147483627) - (2147483621)))))))));
    var_19 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)208)) - (((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */_Bool) min((((unsigned int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) > (((((/* implicit */_Bool) (unsigned short)11615)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (unsigned short)11615)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29107)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)1))))) & (((((/* implicit */unsigned long long int) -3636598424801263687LL)) * (((((/* implicit */_Bool) -5320877874111591352LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (3458339050129247170ULL)))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_1]), (arr_0 [i_1])))) && (((/* implicit */_Bool) 960))))) - (((/* implicit */int) max((((/* implicit */short) max((arr_0 [i_1]), (arr_0 [i_1])))), (var_4))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2])))) <= (arr_9 [i_2]))));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 3458339050129247183ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14185))) : (641785129U)));
        var_23 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_7 [i_2]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)91)) >= (((/* implicit */int) arr_5 [i_2]))))))));
        var_24 = ((/* implicit */unsigned char) ((signed char) min((max((arr_5 [i_2]), (var_6))), (arr_0 [i_2]))));
    }
}
