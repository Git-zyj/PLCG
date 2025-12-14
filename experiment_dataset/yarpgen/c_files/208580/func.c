/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208580
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) (unsigned char)28)) ? (9079256848778919936LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36002)) ? (1992624350) : (-569060887)))));
        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)28))));
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)4735)) : (((/* implicit */int) (unsigned char)8))));
        arr_8 [i_1] = ((/* implicit */int) (+(arr_5 [i_1])));
        var_15 = (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (var_8))));
    }
    var_16 &= min((((int) ((((/* implicit */int) (unsigned short)29529)) / (((/* implicit */int) var_4))))), (((/* implicit */int) var_4)));
    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)250)) ? ((+(var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_10))))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_4)))))))));
}
