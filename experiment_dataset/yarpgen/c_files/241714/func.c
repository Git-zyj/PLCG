/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241714
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
    var_11 = ((/* implicit */unsigned char) var_4);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((((-(var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) var_1);
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] [i_0] = arr_4 [i_4 - 3] [i_0 + 1];
                            }
                        } 
                    } 
                    var_14 = ((_Bool) arr_9 [i_0] [i_1] [i_2] [i_2]);
                    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_10 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0]))))));
                    var_16 = ((((_Bool) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) (unsigned char)205))), ((unsigned char)50)))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)11] [i_0]))) + (arr_3 [i_0] [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) - (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_2 [i_0]))))));
                }
            } 
        } 
    } 
}
