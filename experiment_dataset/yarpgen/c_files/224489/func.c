/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224489
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */int) min(((+(1088734945U))), (((/* implicit */unsigned int) (-(min((((/* implicit */int) var_5)), (var_11))))))));
                                var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) max(((signed char)-1), (var_5))))))));
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_1 + 1] [(_Bool)1] [i_1] [i_2]);
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((((/* implicit */int) (signed char)-86)) / (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_16 -= (~(((((((/* implicit */_Bool) var_4)) ? (1790387270U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3454))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (short)3453))))))));
}
