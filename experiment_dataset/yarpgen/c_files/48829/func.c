/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48829
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
    var_18 = ((/* implicit */signed char) (+(var_7)));
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) == ((-(var_7)))))) >= ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) (((~(var_13))) < (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    arr_7 [4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((arr_4 [3LL] [i_1] [i_1] [3LL]), (((/* implicit */unsigned int) var_6))))) & ((~(max((var_8), (((/* implicit */unsigned long long int) 0))))))));
                    arr_8 [i_0 + 1] = ((/* implicit */signed char) ((short) (short)32767));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_4 [i_0 + 3] [i_0 + 3] [(unsigned char)5] [i_0 + 3]))));
                    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) : (min((arr_0 [i_0 + 3]), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_13)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_8)))) ? (max((var_10), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16)))))))));
}
