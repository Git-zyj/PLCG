/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40390
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (+(max((max((var_3), (((/* implicit */unsigned int) var_9)))), (((var_3) >> (((var_2) - (18411056U))))))))))));
    var_12 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned char)255))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (2650062349U)))) ? (((((/* implicit */unsigned long long int) 6352705842349076255LL)) * (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned long long int) (((+(2650062349U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0])))))))))));
                var_14 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8))))))) + (max((((/* implicit */long long int) var_2)), (7139657108718674337LL)))));
                var_15 = ((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0 + 1] [i_0 - 2]), (arr_0 [i_0 + 1] [i_0 + 1]))))) : (((unsigned int) 1644904946U))));
                arr_5 [(unsigned short)2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 2650062349U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_4)))) < (((/* implicit */int) ((((/* implicit */long long int) 4254062582U)) < (-7139657108718674337LL)))))))) : (((unsigned int) ((unsigned char) var_2)))));
            }
        } 
    } 
}
