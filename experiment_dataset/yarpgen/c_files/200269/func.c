/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200269
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((unsigned int) var_16));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) 196608LL)) || (((/* implicit */_Bool) -196609LL))))) : (((/* implicit */int) var_15))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_3 - 2] [i_3 - 3])) | (((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_3 - 2] [i_3 - 3]))))));
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) arr_7 [i_1] [i_2] [i_3]))), (arr_9 [i_1] [i_1] [i_2] [(unsigned short)10])));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) (~(min((min((((/* implicit */long long int) 2675549690U)), (-4LL))), (max((((/* implicit */long long int) (signed char)-64)), (-196608LL)))))));
    }
    var_22 = ((/* implicit */unsigned int) min((((unsigned long long int) (signed char)45)), (((((/* implicit */unsigned long long int) 982015830U)) & (var_10)))));
    var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7))))) : (((((/* implicit */_Bool) 196608LL)) ? (var_11) : (var_8)))))));
    var_24 = ((/* implicit */unsigned char) (-((+(((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_14))))))));
    var_25 = var_0;
}
