/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212543
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 14LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51727))) : (134217727LL))))))));
    var_15 = ((/* implicit */unsigned long long int) min((max((var_9), (((/* implicit */unsigned int) (unsigned short)13810)))), (((/* implicit */unsigned int) ((short) var_7)))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((signed char) (signed char)99);
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)13794))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)16814))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_12))))))));
    var_19 = ((/* implicit */unsigned char) ((((((long long int) var_2)) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) (signed char)-90))))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
}
