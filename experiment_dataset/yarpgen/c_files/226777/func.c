/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226777
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
    var_14 = ((/* implicit */signed char) (-((+(((2147483644U) * (2199177741U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17797)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)55743))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-78)), ((unsigned char)255))))) : (min((((/* implicit */unsigned int) (signed char)1)), (2440768142U)))))) ? (min((((/* implicit */unsigned int) ((signed char) arr_6 [0U] [i_3] [i_4]))), (((((/* implicit */_Bool) (unsigned short)30936)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))) : (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1854199153U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-22020)))))))))));
                                var_16 = arr_11 [i_1] [i_1] [i_2] [i_3] [i_4];
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_1] [i_0] [i_0]))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) (signed char)-49);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_4)))) / (((/* implicit */int) var_12))))) < ((~(max((((/* implicit */unsigned int) var_0)), (2440768125U)))))));
}
