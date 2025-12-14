/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201969
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))))) / (max((((/* implicit */long long int) ((((((/* implicit */int) (short)-3226)) + (2147483647))) << (((((-7081371490752820184LL) + (7081371490752820197LL))) - (13LL)))))), (max((7081371490752820170LL), (7081371490752820159LL)))))));
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (16777215ULL) : (((/* implicit */unsigned long long int) var_3))))) ? ((((_Bool)1) ? (-7081371490752820200LL) : (((/* implicit */long long int) arr_0 [i_0])))) : (max((var_3), (((/* implicit */long long int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_5 [4LL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) ^ (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) -7081371490752820154LL))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((11905490397681680059ULL) > (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (18446744073692774418ULL)))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_2]), (((/* implicit */unsigned int) arr_8 [i_2]))))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_2]) >> (((var_2) - (3443654101U)))))) : (max((1125899906842623ULL), (((/* implicit */unsigned long long int) arr_7 [i_2]))))))) ? (max((((((/* implicit */_Bool) (signed char)-1)) ? (-7081371490752820146LL) : (((/* implicit */long long int) 3841517916U)))), (((/* implicit */long long int) arr_7 [i_2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16777193ULL)) ? (arr_3 [i_2]) : (arr_3 [i_2]))))));
        var_13 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3841517925U)) != (2585559801348041630LL)))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) : (var_6)))))));
        arr_10 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) - (((/* implicit */int) arr_4 [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3811673421U)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_9))))) : (((var_8) + (arr_3 [i_2]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)5])))))))));
        arr_11 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_2])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) / (arr_3 [i_2])))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_2)) : (var_3)))))) > (var_8)));
}
