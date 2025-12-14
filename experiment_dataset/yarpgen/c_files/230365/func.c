/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230365
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */short) max((var_5), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_11 [(unsigned short)13] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_5))));
                                arr_12 [i_4] [(_Bool)1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (((~(var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [21ULL] = min((((min((var_16), (((/* implicit */unsigned int) var_15)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) ((unsigned short) var_3))));
                                var_18 = var_7;
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_2] = ((/* implicit */unsigned short) (unsigned char)0);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65517)) < (((/* implicit */int) (unsigned short)11))))) == (((/* implicit */int) ((unsigned char) var_12)))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned short)18)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) 1385283230))))));
    var_22 = ((/* implicit */unsigned short) var_6);
}
