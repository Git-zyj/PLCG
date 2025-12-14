/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39168
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) max(((+(11817087362405808593ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((((((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)60559)), (arr_1 [i_0] [i_0]))) : (arr_1 [i_0 + 1] [i_0]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11817087362405808584ULL)) ? (((/* implicit */int) (unsigned short)4977)) : (((/* implicit */int) (unsigned short)57663))))));
        var_15 = ((/* implicit */unsigned long long int) (unsigned char)116);
        var_16 = ((/* implicit */unsigned short) var_6);
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) max(((-(15569160537356089069ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))));
        arr_6 [i_0] = ((/* implicit */long long int) max((((int) (!(((/* implicit */_Bool) 10881969155691119818ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_9 [(unsigned short)14] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) ((long long int) arr_2 [i_1 + 3]))));
        arr_10 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11665))) : (arr_0 [i_1 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1])))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(6585384553890509122LL))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        arr_14 [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_8 [i_2])))) ? (((-2189903532413115935LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))))));
        arr_15 [(unsigned short)2] = ((/* implicit */unsigned char) 10377270494787645090ULL);
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_18 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
        var_19 -= ((/* implicit */unsigned short) var_11);
    }
    var_20 += ((/* implicit */unsigned char) var_2);
}
