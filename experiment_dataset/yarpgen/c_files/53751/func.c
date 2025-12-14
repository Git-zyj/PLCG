/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53751
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) 2200690621088153945LL);
        arr_3 [i_0] = ((/* implicit */short) ((arr_1 [(short)23] [(short)23]) << (((max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (-895881900)))), (arr_1 [i_0] [i_0]))) - (2625295396543120735LL)))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_18 -= ((/* implicit */signed char) (+(((/* implicit */int) ((arr_0 [i_1]) != (((((/* implicit */int) var_2)) + (var_15))))))));
        var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) arr_2 [i_1]))))));
        var_20 = ((/* implicit */short) var_9);
        arr_6 [i_1] = ((((/* implicit */_Bool) (+(895881899)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */int) (_Bool)1)), (-895881888)))))) : (((arr_5 [i_1]) ^ (((/* implicit */unsigned int) arr_0 [i_1])))));
    }
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) (+(-895881894)));
        var_21 = ((/* implicit */_Bool) ((unsigned short) 895881868));
    }
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13994)) / (-895881910)));
        var_23 = ((/* implicit */int) min(((+(((((/* implicit */unsigned int) var_15)) * (arr_13 [(_Bool)1]))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 895881900)) >= (arr_1 [i_3] [i_3]))))));
    }
}
