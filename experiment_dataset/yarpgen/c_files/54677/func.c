/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54677
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_11)) - (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) -87250385)) ? (((/* implicit */int) (short)29693)) : (2147483643))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned short)21831)) : (arr_1 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21844)) ? (((/* implicit */int) (short)-5098)) : (arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)21835)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_7 [i_0] [6ULL] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [0ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [2ULL] [i_1] [i_1] [i_0])) ? (8237968744796474671LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21844)))))) : (((arr_3 [i_0] [i_1]) / (((/* implicit */unsigned long long int) arr_1 [i_1])))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)43700)) : (arr_1 [i_1])))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_3 [i_0] [i_1])))))));
                    var_14 = ((((((/* implicit */_Bool) (~(3506615498U)))) ? (((/* implicit */int) ((-784157941) > (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) (unsigned short)43700)));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned int) (+((+((-(((/* implicit */int) (signed char)35))))))));
}
