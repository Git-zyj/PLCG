/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38909
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((min((((/* implicit */int) var_2)), (281433005))) + (2147483647))) << (((((/* implicit */int) (unsigned short)42726)) - (42726)))))) | ((~(((((/* implicit */_Bool) 2936417109556265808ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))))))))));
    var_16 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                    arr_7 [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22807))) / (6917529027641081856ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22796)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)22807)))))))) ? (((((/* implicit */_Bool) (unsigned short)22810)) ? (((11529215046068469753ULL) << (((var_1) - (17716517873072374336ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), ((unsigned short)42717))))))) : (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) (unsigned short)22819)), (var_1))) : (((/* implicit */unsigned long long int) ((int) var_1))))))))));
}
