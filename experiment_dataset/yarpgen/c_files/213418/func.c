/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213418
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
    var_14 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)65535))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) arr_4 [i_0]);
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((117342677U) & (117342683U)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 4177624612U))))) >> (((((/* implicit */int) arr_0 [i_0])) - (54))))) : ((~((-(-2147483642)))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 117342688U)) ? (1655230714) : (((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0])), (arr_0 [10ULL]))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))))))));
                var_17 = ((/* implicit */int) max(((unsigned char)24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (3364328143753076437ULL)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_7))))))) & (((/* implicit */int) (unsigned char)77))));
}
