/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193000
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(2U)))) ? ((-(((/* implicit */int) (short)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18U))))))), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)15872)) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (short)-32757))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3991788044U)))) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_1 [(unsigned short)9])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)252)), ((unsigned short)17465))))))))))));
                arr_5 [i_1] [(unsigned char)5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)1016)) : (((/* implicit */int) (unsigned short)63)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)159)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) <= (var_2)))))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_10))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((954952570U), (3U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (short)-1)) ? (2151970532U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158)))))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) : (-6097877421195398329LL)))));
    var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */int) min((var_9), (var_9)))) ^ (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)255)))))))));
    var_21 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-30))))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
}
