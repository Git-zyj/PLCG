/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44033
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
    var_14 = var_10;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (var_8)))) ? ((+(((/* implicit */int) (unsigned char)112)))) : ((~(((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))))))));
        var_16 += ((/* implicit */unsigned int) (signed char)-3);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 80823856))) ? (((/* implicit */unsigned long long int) ((0U) >> ((((((-2147483647 - 1)) - (-2147483623))) + (50)))))) : ((-(arr_1 [i_0 + 1])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [(signed char)10] [i_1]);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) ((var_7) ? (var_12) : (((/* implicit */int) arr_0 [i_1] [i_2]))));
                    arr_13 [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-3))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (17U)))) : (((/* implicit */int) arr_8 [i_3 - 1])));
                    arr_14 [15] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_4 [i_1]));
                }
            } 
        } 
        var_17 = (!(((/* implicit */_Bool) (((_Bool)1) ? (131040U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27194)))))));
    }
    var_18 &= max((var_2), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1783848243)))));
}
