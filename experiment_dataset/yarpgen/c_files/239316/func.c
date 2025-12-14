/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239316
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
    var_12 ^= ((/* implicit */short) ((unsigned int) var_11));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((unsigned short) min((arr_2 [i_0 + 4]), (arr_2 [i_0 + 2]))));
                arr_5 [i_1] = (short)255;
                var_14 = ((/* implicit */unsigned int) ((signed char) 3062170020U));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)69)), ((~(((/* implicit */int) arr_2 [i_0 + 4]))))));
                var_15 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (arr_3 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5162))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [(signed char)2] [i_1] [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-255)) ? (((/* implicit */int) var_7)) : (var_3))))))) ? (((/* implicit */int) (short)-12174)) : (((/* implicit */int) (short)12173))));
    var_17 = ((/* implicit */short) -1);
    var_18 &= ((/* implicit */signed char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) (signed char)127))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) var_1)) : (var_3)))))));
}
