/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195082
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) var_8);
        var_19 = (+(max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_1))));
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)129))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) / (63LL)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) arr_1 [i_1] [i_1]))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1] [i_1])) != (((/* implicit */int) arr_2 [i_1] [i_1]))));
        var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)99)) : (arr_3 [i_1])))));
        var_24 = ((/* implicit */_Bool) (-(arr_0 [i_1] [i_1])));
        var_25 = ((((/* implicit */int) ((unsigned char) (unsigned char)116))) != (((((/* implicit */int) (unsigned char)227)) - (-1881972641))));
    }
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((~(((/* implicit */int) (unsigned char)129)))))), ((+(var_14))))))));
    var_27 = ((/* implicit */int) var_12);
    var_28 = min((((((/* implicit */long long int) (+(-1881972641)))) * (((4656100171820809266LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((1149292027) >> (((-1881972641) + (1881972664)))))));
}
