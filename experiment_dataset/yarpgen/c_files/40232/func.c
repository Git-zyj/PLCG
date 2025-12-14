/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40232
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
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = ((arr_7 [i_2] [i_2]) > ((~(((((/* implicit */_Bool) var_9)) ? (var_5) : (1279783751U))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) arr_0 [(unsigned char)15]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_2] [i_2 - 3] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (((((/* implicit */_Bool) 619564811U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_11 [(_Bool)1] [i_3 - 2] [i_4] [i_4] [i_4] [i_4] [i_4])))));
                                var_22 = ((/* implicit */short) arr_4 [i_2]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) < (((((/* implicit */_Bool) 3015183530U)) ? (3015183513U) : (3384626144U))))) ? (max((arr_7 [i_2] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : ((+(4294967295U)))))));
                }
            } 
        } 
    } 
}
