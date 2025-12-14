/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221386
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)1] [(unsigned short)6] [(unsigned short)8] = ((/* implicit */_Bool) ((14638656071095388580ULL) << (((max((((long long int) var_7)), (((/* implicit */long long int) ((unsigned short) var_7))))) - (65453LL)))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((var_13) * (((/* implicit */unsigned long long int) var_6)))))));
                arr_6 [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))) / (((/* implicit */int) arr_4 [(unsigned char)13] [i_1]))));
                arr_7 [i_1] [(unsigned short)13] = ((/* implicit */unsigned int) (-((~(401612283084508077ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((5011485193942793432ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (var_4) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))) ? (((/* implicit */unsigned long long int) (+(var_5)))) : ((+(var_12)))))));
}
