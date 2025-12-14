/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240197
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
    var_14 |= ((/* implicit */unsigned short) (-(var_4)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_0 [i_0]))) >= (((/* implicit */long long int) ((unsigned int) 4294967295U)))))))))));
        var_16 = ((/* implicit */int) ((arr_0 [i_0]) - (((/* implicit */long long int) 2638362839U))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_17 += var_2;
        var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (1656604457U))));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_19 = ((((/* implicit */int) arr_5 [i_2])) / (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_6 [i_2])))));
        var_20 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned int) arr_6 [i_2])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (1656604454U))))));
        var_21 += ((/* implicit */unsigned int) ((-5909354219413153459LL) / (((/* implicit */long long int) 2638362831U))));
        var_22 = ((/* implicit */short) max((var_22), ((short)11145)));
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned int) ((short) ((((var_9) << (((arr_8 [i_3]) - (4261122354U))))) << ((((-(1656604440U))) - (2638362828U))))));
        var_23 = ((/* implicit */int) max((((((((/* implicit */_Bool) (short)-17161)) ? (((/* implicit */unsigned long long int) arr_8 [i_3])) : (var_8))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26145))) : (var_7))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_3]))))))))));
        arr_10 [i_3] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_3])) ? (2939935756166602171LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))))), (((/* implicit */long long int) ((unsigned short) var_12)))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((int) 2638362825U)))));
    }
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) -1318235197)) ? (((/* implicit */long long int) 1656604457U)) : (576460202547609600LL))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_12)))))))))));
}
