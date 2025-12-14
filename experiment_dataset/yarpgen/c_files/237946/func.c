/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237946
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
    var_15 = ((/* implicit */unsigned char) (+((~(var_11)))));
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)110)))))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6801536078398205857LL))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2138863629U)))) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (unsigned short)2909)))))));
                    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1 + 1]) - (((/* implicit */long long int) (~(2109979552U))))))) ? (((/* implicit */int) max(((signed char)25), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)33)))))));
                    arr_9 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 1]))) : ((((_Bool)1) ? (224549396U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)236)))) <= (((/* implicit */int) ((_Bool) min((var_0), (((/* implicit */unsigned int) (signed char)-5))))))));
        var_19 = ((/* implicit */long long int) (-((~(980862019U)))));
    }
    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = max((((/* implicit */long long int) ((unsigned int) (signed char)-9))), ((+(-453550542210868127LL))));
        var_20 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
    }
    var_21 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -3149592169739236198LL)) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned char) 4294967295U)))))) <= (((var_12) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
}
