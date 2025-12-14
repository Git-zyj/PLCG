/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232243
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
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) (unsigned short)23179)), (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11638)))))) ? (((((/* implicit */unsigned long long int) var_7)) ^ (9551511333412050693ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0 - 1];
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9551511333412050691ULL), (9551511333412050682ULL)))) ? (max((((/* implicit */long long int) 643677042U)), (arr_1 [i_0]))) : (arr_1 [i_0])))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (9551511333412050682ULL)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((320098756610249237ULL) >> (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */long long int) arr_4 [i_1])) : (((((/* implicit */long long int) arr_4 [i_1])) - (8759210601594542097LL))))))));
        var_20 *= (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((4294967295U) + (((/* implicit */unsigned int) arr_4 [(unsigned char)8]))))) - (((9551511333412050682ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)20109)), (((((/* implicit */_Bool) 16861722221816912907ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45250))) : (9551511333412050682ULL)))));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_21 += (((!(((/* implicit */_Bool) 8895232740297500921ULL)))) ? (arr_0 [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1112819799U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)103))))));
        var_22 ^= ((/* implicit */long long int) min((((/* implicit */unsigned short) var_12)), (max((((/* implicit */unsigned short) (signed char)-17)), ((unsigned short)18058)))));
        var_23 = ((/* implicit */unsigned long long int) arr_6 [i_2]);
    }
}
