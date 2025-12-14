/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54715
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
    var_18 = var_16;
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */long long int) ((((/* implicit */_Bool) -1569142346506097206LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)167)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)0)))) : ((-(((unsigned int) -2935448601510487112LL))))));
    var_20 *= ((/* implicit */signed char) var_3);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((short) var_2)), (max((((/* implicit */short) var_0)), ((short)-20620)))))) ? ((+(3451313251U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_17), (((/* implicit */unsigned short) ((_Bool) var_17)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 + 1] [i_0]));
        arr_4 [i_0] = ((/* implicit */short) ((int) var_9));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_22 *= ((/* implicit */unsigned char) var_1);
        arr_8 [(signed char)12] [i_1] = ((/* implicit */short) (signed char)0);
        arr_9 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) 843654045U)))));
    }
}
