/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20167
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
    var_18 = ((/* implicit */unsigned char) ((((var_6) > (((/* implicit */int) max((var_16), (((/* implicit */short) var_3))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_3)), (var_16)))) || (var_4)))) : (((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) var_13)) + (7603)))))));
    var_19 = ((/* implicit */_Bool) ((min(((!(((/* implicit */_Bool) (short)8649)))), (((var_2) == (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned short) (((_Bool)0) ? (((/* implicit */int) (short)-14584)) : (-796852419))))) : (var_8)));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((~(796852428))) : (((/* implicit */int) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) var_11))))))))));
    var_21 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_22 -= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-52)) ? (((-1900720683) / (((/* implicit */int) arr_1 [i_0])))) : (-796852453))), ((~(min((((/* implicit */int) arr_1 [i_1])), (arr_2 [i_1])))))));
                var_23 -= ((/* implicit */unsigned int) min((((/* implicit */int) (!(arr_0 [i_0])))), (((((/* implicit */int) ((((/* implicit */int) (signed char)52)) > (((/* implicit */int) (unsigned short)1716))))) | (min((((/* implicit */int) arr_0 [i_0])), (var_6)))))));
            }
        } 
    } 
}
