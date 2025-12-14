/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234410
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((6688233410185440042LL) >> (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)10086)) != (((/* implicit */int) var_8))))) : (((/* implicit */int) arr_2 [i_2] [i_2]))));
                    var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (!((_Bool)1))))));
                    var_13 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((-(3684124039461023513ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [0U] [i_0] [i_1] [(signed char)17])))) : ((((-(((/* implicit */int) arr_3 [i_0] [i_1])))) * (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)103)) + (((/* implicit */int) var_9))))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-22)))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) - (((/* implicit */int) var_5))));
}
