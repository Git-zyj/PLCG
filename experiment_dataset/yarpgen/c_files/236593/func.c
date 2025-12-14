/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236593
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : (-2260743010481710729LL)))) ? (((((/* implicit */int) (unsigned char)23)) % (((/* implicit */int) (unsigned short)7335)))) : (((/* implicit */int) var_0)))))))));
    var_11 = min((min((1652962250U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)232))))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)43931)) ? (1650920136U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (arr_3 [i_0] [i_1]))) : ((-(((/* implicit */int) arr_6 [i_1]))))))) ? (((arr_1 [i_1]) | (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)45266))) ? (arr_0 [i_0] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((3229034773U), (677513479U))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                    var_13 = ((/* implicit */signed char) (-(1650920136U)));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)11)) ? (arr_4 [i_2 + 1] [i_2 - 2] [i_2 + 1]) : (((/* implicit */long long int) (+(1065932496U))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_7)))))) ? (((/* implicit */unsigned int) -328797765)) : (((unsigned int) var_1))));
}
