/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197206
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)146)), (325289535012143827ULL)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((signed char) 239091810))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_5))))) : (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? ((~(var_12))) : (((/* implicit */int) var_9)))))));
                var_15 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_0) : (((/* implicit */int) var_2))))) / (var_11))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))));
                arr_7 [i_0 - 2] [i_0 - 2] [2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (-239091810)))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) 239091810))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (var_8)))) : (((unsigned long long int) (_Bool)1)))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((4136411708472448907ULL) == (((/* implicit */unsigned long long int) var_3))))) >= (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) ? ((+(((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)1023)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_7))))))))));
    var_18 = var_7;
}
