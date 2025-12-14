/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47454
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = (((~(arr_4 [i_0] [i_1]))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-53)) + (((/* implicit */int) var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) arr_3 [(signed char)7] [i_1]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 4; i_4 < 18; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_2 - 2] [i_4 - 4] = ((157819300) / (((/* implicit */int) arr_13 [i_1] [i_1] [i_4 - 4] [i_4] [i_4])));
                                var_12 = ((/* implicit */int) var_5);
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))))))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 157819272)) : (1484860257U)))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (1484860248U))))));
                            }
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1492259889U)) ? (1484860253U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8192)))));
                arr_17 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (unsigned short)60446);
            }
        } 
    } 
    var_15 |= (+(((/* implicit */int) ((min((1492259889U), (((/* implicit */unsigned int) var_6)))) <= (((/* implicit */unsigned int) max((var_10), (((/* implicit */int) (unsigned char)8)))))))));
}
