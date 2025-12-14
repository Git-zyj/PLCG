/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195015
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
    var_16 ^= ((/* implicit */_Bool) (unsigned short)63436);
    var_17 = min(((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)127))))) : (var_8))), (((((/* implicit */_Bool) (-(8473988669858040632ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min(((unsigned short)2100), (((/* implicit */unsigned short) arr_0 [i_0])))))));
        var_19 = arr_0 [i_0];
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_1 [i_0])))), (min(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))))))));
        var_21 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_22 -= ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? ((-((~(((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])))))) : (((/* implicit */int) (signed char)-107))));
        arr_4 [i_1] = ((/* implicit */int) arr_2 [i_1]);
        var_24 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))), (((/* implicit */int) arr_2 [i_1]))));
        var_25 = ((/* implicit */signed char) min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) max(((short)9139), (((/* implicit */short) arr_2 [i_1]))))) ? (((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_1])))) : (((/* implicit */int) arr_3 [24U] [23ULL]))))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_26 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)9151))));
        var_27 ^= ((/* implicit */unsigned int) (short)-9122);
    }
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_15))));
}
