/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34780
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((/* implicit */long long int) var_16)) ^ (((var_0) / (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_16)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 1180185862U)))) : (var_5))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)14718))) : ((-(-5246320833483655815LL))))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (-1LL)))) ? ((~(1242360066))) : (1000564026)))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2 - 1] [i_0])) ? (((/* implicit */unsigned int) arr_7 [i_1 + 4] [i_2 + 1] [i_0])) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_13)))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) 1242360066))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (+(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) : (-6671416851529104087LL))) & (max((var_14), (var_14))))))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (var_2)));
            var_27 = ((/* implicit */signed char) var_14);
        }
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_16 [14LL] [i_4])) : (((/* implicit */int) (_Bool)1))))) ? (min((-7LL), (((/* implicit */long long int) var_18)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_4])))))));
    }
}
